#!/usr/bin/env ruby
# frozen_string_literal: true
# typed: true

module SorbetRBIGeneration; end

require_relative './serialize'
require_relative './constant_cache'
require_relative './require_everything'

require 'fileutils'
require 'json'
require 'set'

class SorbetRBIGeneration::HiddenMethodFinder
  PATH = "rbi/hidden-methods/"
  TMP_PATH = "/tmp/sorbet-hidden-methods/"
  TMP_RBI = TMP_PATH + "reflection.rbi"
  DIFF_RBI = TMP_PATH + "hidden.rbi.tmp"
  RBI_CONSTANTS = TMP_PATH + "reflection.json"
  SOURCE_CONSTANTS = TMP_PATH + "from-source.json"

  HIDDEN_RBI = PATH + "hidden.rbi"
  ERRORS_RBI = PATH + "errors.txt"

  HEADER = SorbetRBIGeneration::Serialize.header('autogenerated')

  def self.main
    self.new.main
  end

  def main
    remove_temp_files # comment this out if you want to use incremental
    mkdir
    if hidden_rbi
      require_everything
      classes, aliases = all_modules_and_aliases
      gen_source_rbi(classes, aliases)
    end
    if hidden_json
      rm_rbis
      write_constants
    end
    if hidden_diff
      rm_rbis
      source, rbi = read_constants
      require_everything
      write_diff(source, rbi)
    end
    if hidden_splits
      split_rbi
    end
  end

  def mkdir
    FileUtils.mkdir_p(PATH) unless Dir.exist?(PATH)
    FileUtils.mkdir_p(TMP_PATH) unless Dir.exist?(TMP_PATH)
  end

  def remove_temp_files
    FileUtils.rm_r(PATH) if Dir.exist?(PATH)
    FileUtils.rm_r(TMP_PATH) if Dir.exist?(TMP_PATH)
    rm_rbis
  end

  def require_everything
    puts "Requiring all of your code"
    SorbetRBIGeneration::RequireEverything.require_everything
  end

  def hidden_rbi
    return true if !File.exist?(TMP_RBI)
    puts "#{TMP_RBI} already exists, not generating"
  end

  def hidden_json
    return true if !File.exist?(RBI_CONSTANTS) || !File.exist?(SOURCE_CONSTANTS)
    puts "#{RBI_CONSTANTS} and #{SOURCE_CONSTANTS} already exists, not generating"
  end

  def hidden_diff
    return true if !File.exist?(DIFF_RBI)
    puts "#{DIFF_RBI} already exists, not generating"
  end

  def hidden_splits
    return true if !File.exist?(HIDDEN_RBI) || !File.exist?(ERRORS_RBI)
    puts "All split RBIs already exist, not generating"
  end

  def constant_cache
    @cache ||= SorbetRBIGeneration::ConstantLookupCache.new
    @cache
  end


  def all_modules_and_aliases
    puts "Naming all Modules"
    [constant_cache.all_module_names.sort, constant_cache.all_module_aliases]
  end

  def real_name(mod)
    constant_cache.name_by_class(mod)
  end

  def gen_source_rbi(classes, aliases)
    puts "Generating #{TMP_RBI} with #{classes.count} modules and #{aliases.count} aliases"
    serializer = SorbetRBIGeneration::Serialize.new
    buffer = []
    buffer << SorbetRBIGeneration::Serialize.header

    # should we do something with these errors?
    capture_stderr do
      classes.each do |class_name|
        buffer << serializer.class_or_module(class_name)
      end
      aliases.each do |base, other_names|
        other_names.each do |other_name|
          buffer << serializer.alias(base, other_name)
        end
      end
    end
    File.write(TMP_RBI, buffer.join("\n"))
  end

  def write_constants
    puts "Printing you code's symbol table into #{SOURCE_CONSTANTS}"
    files = Dir.glob("**/*.{rb,rbi}")
    io = IO.popen(
      [
        'sorbet',
        '--print=symbol-table-json',
        '--stdout-hup-hack',
        '--silence-dev-message',
        '--no-error-count',
      ] + files,
      err: '/dev/null'
    )
    File.write(SOURCE_CONSTANTS, io.read)
    io.close

    puts "Printing #{TMP_RBI}'s symbol table into #{RBI_CONSTANTS}"
    io = IO.popen(
      [
        'sorbet',
        '--print=symbol-table-json',
        '--error-black-list=4010',
        '--stdout-hup-hack',
        '--silence-dev-message',
        '--no-error-count',
        TMP_RBI,
      ],
      err: '/dev/null'
    )
    File.write(RBI_CONSTANTS, io.read)
    io.close
  end

  def read_constants
    puts "Reading #{SOURCE_CONSTANTS}"
    source = JSON.parse(File.read(SOURCE_CONSTANTS))
    puts "Reading #{RBI_CONSTANTS}"
    rbi = JSON.parse(File.read(RBI_CONSTANTS))
    [source, rbi]
  end

  def write_diff(source, rbi)
    puts "Building rbi id to symbol map"
    rbi_symbols = symbols_id_to_name(rbi, '')
    puts "Building source id to symbol map"
    source_symbols = symbols_id_to_name(source, '')
    puts "Writing #{DIFF_RBI}"
    diff = serialize_constants(
      source.fetch("children", []),
      rbi.fetch("children", []),
      Object, false, source_symbols, rbi_symbols)
    File.write(DIFF_RBI, diff)
  end

  def symbols_id_to_name(entry, prefix)
    ret = {}
    symbols_id_to_name_real(entry, prefix, ret)
    ret
  end

  private def symbols_id_to_name_real(entry, prefix, ret)
    name = entry["name"]["name"]
    if prefix == '' || prefix == "<root>"
      fqn = name.to_s
    else
      fqn = "#{prefix}::#{name}"
    end

    ret[entry["id"]] = fqn
    entry.fetch("children", []).each do |child|
      symbols_id_to_name_real(child, fqn, ret)
    end
  end

  def serialize_constants(source, rbi, klass, is_singleton, source_symbols, rbi_symbols)
    source_by_name = source.map {|v| [v["name"]["name"], v]}.to_h
    ret = []

    rbi.each do |rbi_entry|
      source_entry = source_by_name[rbi_entry["name"]["name"]]

      ret << serialize_alias(source_entry, rbi_entry, klass, source_symbols, rbi_symbols)
      ret << serialize_class(source_entry, rbi_entry, klass, source_symbols, rbi_symbols, source_by_name)
    end

    ret.compact.join("\n")
  end

  def serialize_class(source_entry, rbi_entry, klass, source_symbols, rbi_symbols, source_by_name)
    return if rbi_entry["kind"] != "CLASS"

    name = rbi_entry["name"]["name"]
    if name.start_with?('<Class:')
      name = name.sub('<Class:', '').sub('>', '')
      my_klass_is_singleton = true
    else
      my_klass_is_singleton = false
    end
    begin
      my_klass = klass.const_get(name, false) # rubocop:disable PrisonGuard/NoDynamicConstAccess
    rescue => e
      return "# #{e.message.gsub("\n", "\n# ")}"
    end

    # We specifically don't typecheck anything in T:: since it is hardcoded
    # into sorbet
    return if real_name(my_klass) == 'T'

    source_type = nil
    if !source_entry
      if source_by_name[name]
        source_type = source_by_name[name]["kind"]
      end
    else
      source_type = source_entry["kind"]
    end
    if source_type && source_type != "CLASS"
      return "# The source says #{real_name(my_klass)} is a #{source_type} but reflection says it is a #{rbi_entry['kind']}"
    end

    if !source_entry
      source_children = []
      source_mixins = []
      is_stub = true
    else
      source_children = source_entry.fetch("children", [])
      source_mixins = source_entry.fetch("mixins", [])
      is_stub = source_entry['superClass'] && source_symbols[source_entry['superClass']] == 'RubyTyper::StubClass'
    end
    rbi_children = rbi_entry.fetch("children", [])
    rbi_mixins = rbi_entry.fetch("mixins", [])

    methods = serialize_methods(source_children, rbi_children, my_klass, my_klass_is_singleton)
    includes = serialize_includes(source_mixins, rbi_mixins, my_klass, my_klass_is_singleton, source_symbols, rbi_symbols)

    ret = []
    if !methods.empty? || !includes.empty? || is_stub
      fqn = real_name(my_klass)
      klass_str = String.new
      klass_str << (my_klass.is_a?(Class) ? "class #{fqn}\n" : "module #{fqn}\n")
      klass_str << includes
      klass_str << "\n" unless includes.empty?
      klass_str << methods
      klass_str << "\n" unless klass_str.end_with?("\n")
      klass_str << "end\n"
      ret << klass_str
    end

    source_children = source_entry ? source_entry.fetch("children", []) : []
    rbi_children = rbi_entry.fetch("children", [])
    children = serialize_constants(source_children, rbi_children, my_klass, my_klass_is_singleton, source_symbols, rbi_symbols)
    if children != ""
      ret << children
    end

    ret.empty? ? nil : ret.join("\n")
  end

  def serialize_alias(source_entry, rbi_entry, my_klass, source_symbols, rbi_symbols)
    return if rbi_entry["kind"] != "STATIC_FIELD"
    return if source_entry == rbi_entry
    if source_entry
      is_stub = source_entry['superClass'] && source_symbols[source_entry['superClass']] == 'RubyTyper::StubClass'
      if !is_stub
        return
      end
    end
    return if !rbi_entry["aliasTo"]

    fqn = rbi_symbols[rbi_entry["id"]]
    other_fqn = rbi_symbols[rbi_entry["aliasTo"]]
    return if looks_like_stub_name(fqn)
    ret = String.new
    ret << "#{fqn} = #{other_fqn}\n"
    return ret
  end

  def looks_like_stub_name(name)
    name.include?('$')
  end

  # These methods are defined in C++ and we want our C++ definition to
  # win instead of a shim.
  BLACKLIST = Set.new([
    [Class.object_id, "new"],
    [BasicObject.object_id, "initialize"],
  ]).freeze

  private def serialize_methods(source, rbi, klass, is_singleton)
    source_by_name = source.map {|v| [v["name"]["name"], v]}.to_h
    ret = []
    maker = SorbetRBIGeneration::Serialize.new
    rbi.each do |rbi_entry|
      next if rbi_entry["kind"] != "METHOD"
      name = rbi_entry["name"]["name"]
      next if source_by_name[name]

      next if BLACKLIST.include?([klass.object_id, name])
      next if name.start_with?('<') && name.end_with?('>')

      begin
        if is_singleton
          method = klass.singleton_method(name)
        else
          method = klass.instance_method(name)
        end
      rescue => e
        ret << "# #{e.message.gsub("\n", "\n# ")}"
        next
      end

      super_method = method.super_method
      # next if super_method && T::AbstractUtils.abstract_method?(method) == T::AbstractUtils.abstract_method?(super_method)

      errors = capture_stderr do
        ret << maker.serialize_method(method, is_singleton, with_sig: false)
      end
      errors.split("\n").each do |line|
        ret << "# #{line}"
      end
    end

    ret.join("\n")
  end

  private def serialize_includes(source, rbi, klass, is_singleton, source_symbols, rbi_symbols)
    ret = []
    source_mixins = source.map {|id| source_symbols[id]}
    rbi_mixins = rbi.map {|id| rbi_symbols[id]}
    rbi_mixins.each do |rbi_mixin|
      if !source_mixins.include?(rbi_mixin)
        keyword = is_singleton ? "extend" : "include"
        ret << "  #{keyword} ::#{rbi_mixin}"
      end
    end
    ret.join("\n")
  end

  def capture_stderr
    real_stderr = $stderr
    $stderr = StringIO.new
    yield
    $stderr.string
  ensure
    $stderr = real_stderr
  end

  private def rm_rbis
    File.delete(HIDDEN_RBI) if File.exist?(HIDDEN_RBI)
    File.delete(ERRORS_RBI) if File.exist?(ERRORS_RBI)
  end

  private def split_rbi
    puts "Generating split RBIs into #{PATH}"
    output = {
      hidden: String.new,
      errors: String.new,
    }

    valid = File.read(DIFF_RBI)
    cur_output = nil

    valid.split("\n").each do |line|
      category = categorize(line)
      if category == :errors
        # Don't ever switch to errors output permanantly
        output[category] << line + "\n"
        next
      end
      if !category.nil?
        cur_output = output[category]
      end
      cur_output << line + "\n"
    end

    File.write(HIDDEN_RBI, HEADER + "\n" + output[:hidden])
    File.write(ERRORS_RBI, HEADER + "\n" + output[:errors])
  end

  private def categorize(line)
    if line.start_with?('#')
      return :errors
    end
    return :hidden
  end
end

if $PROGRAM_NAME == __FILE__
  SorbetRBIGeneration::HiddenMethodFinder.main
end
