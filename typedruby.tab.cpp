// A Bison parser, made by GNU Bison 3.3.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2019 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.


// Take the name prefix into account.
#define yylex   typedruby25lex



// //                    "%code requires" blocks.
#line 5 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:432

  #include <ruby_parser/builder.hh>
  #include <ruby_parser/node.hh>
  #include <ruby_parser/token.hh>
  #include <ruby_parser/lexer.hh>
  #include <ruby_parser/driver.hh>
  #include <ruby_parser/state_stack.hh>
  #include <iterator>
  #include <utility>
  #include <cstdlib>

using namespace ruby_parser;
using namespace std::string_literals;

#ifndef YY_NULLPTR
#define YY_NULLPTR nullptr
#endif
#line 368 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:432


union parser_value {
  ruby_parser::token *token;
  ruby_parser::delimited_node_list *delimited_list;
  ruby_parser::delimited_block *delimited_block;
  ruby_parser::node_with_token *with_token;
  ruby_parser::case_body *case_body;
  ruby_parser::ForeignPtr node;
  ruby_parser::node_list *list;
  ruby_parser::state_stack *stack;
  size_t size;
  bool boolean;
};


#line 79 "typedruby.tab.cpp" // lalr1.cc:432

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif



#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Debug traces.  */
#ifndef TYPEDRUBY25DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define TYPEDRUBY25DEBUG 1
#  else
#   define TYPEDRUBY25DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define TYPEDRUBY25DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined TYPEDRUBY25DEBUG */

#line 26 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:432
namespace ruby_parser { namespace bison { namespace typedruby25 {
#line 198 "typedruby.tab.cpp" // lalr1.cc:432



  /// A Bison parser.
  class parser
  {
  public:
#ifndef TYPEDRUBY25STYPE
    /// Symbol semantic values.
    typedef  union parser_value  semantic_type;
#else
    typedef TYPEDRUBY25STYPE semantic_type;
#endif

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const std::string& m)
        : std::runtime_error (m)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        kCLASS = 1001,
        kMODULE = 1002,
        kDEF = 1003,
        kUNDEF = 1004,
        kBEGIN = 1005,
        kRESCUE = 1006,
        kENSURE = 1007,
        kEND = 1008,
        kIF = 1009,
        kUNLESS = 1010,
        kTHEN = 1011,
        kELSIF = 1012,
        kELSE = 1013,
        kCASE = 1014,
        kWHEN = 1015,
        kWHILE = 1016,
        kUNTIL = 1017,
        kFOR = 1018,
        kBREAK = 1019,
        kNEXT = 1020,
        kREDO = 1021,
        kRETRY = 1022,
        kIN = 1023,
        kDO = 1024,
        kDO_COND = 1025,
        kDO_BLOCK = 1026,
        kDO_LAMBDA = 1027,
        kRETURN = 1028,
        kYIELD = 1029,
        kSUPER = 1030,
        kSELF = 1031,
        kNIL = 1032,
        kTRUE = 1033,
        kFALSE = 1034,
        kAND = 1035,
        kOR = 1036,
        kNOT = 1037,
        kIF_MOD = 1038,
        kUNLESS_MOD = 1039,
        kWHILE_MOD = 1040,
        kUNTIL_MOD = 1041,
        kRESCUE_MOD = 1042,
        kALIAS = 1043,
        kDEFINED = 1044,
        klBEGIN = 1045,
        klEND = 1046,
        k__LINE__ = 1047,
        k__FILE__ = 1048,
        k__ENCODING__ = 1049,
        tIDENTIFIER = 1050,
        tFID = 1051,
        tGVAR = 1052,
        tIVAR = 1053,
        tCONSTANT = 1054,
        tLABEL = 1055,
        tCVAR = 1056,
        tNTH_REF = 1057,
        tBACK_REF = 1058,
        tSTRING_CONTENT = 1059,
        tINTEGER = 1060,
        tFLOAT = 1061,
        tUPLUS = 1062,
        tUMINUS = 1063,
        tUNARY_OP = 1064,
        tPOW = 1065,
        tCMP = 1066,
        tEQ = 1067,
        tEQQ = 1068,
        tNEQ = 1069,
        tEQL = 1070,
        tGEQ = 1071,
        tLEQ = 1072,
        tANDOP = 1073,
        tOROP = 1074,
        tMATCH = 1075,
        tNMATCH = 1076,
        tDOT = 1077,
        tDOT2 = 1078,
        tDOT3 = 1079,
        tAREF = 1080,
        tASET = 1081,
        tLSHFT = 1082,
        tRSHFT = 1083,
        tCOLON2 = 1084,
        tCOLON3 = 1085,
        tOP_ASGN = 1086,
        tASSOC = 1087,
        tLPAREN = 1088,
        tLPAREN2 = 1089,
        tRPAREN = 1090,
        tLPAREN_ARG = 1091,
        tLBRACK = 1092,
        tLBRACK2 = 1093,
        tRBRACK = 1094,
        tLBRACE = 1095,
        tLBRACE_ARG = 1096,
        tSTAR = 1097,
        tSTAR2 = 1098,
        tAMPER = 1099,
        tAMPER2 = 1100,
        tTILDE = 1101,
        tPERCENT = 1102,
        tDIVIDE = 1103,
        tDSTAR = 1104,
        tPLUS = 1105,
        tMINUS = 1106,
        tLT = 1107,
        tGT = 1108,
        tPIPE = 1109,
        tBANG = 1110,
        tCARET = 1111,
        tLCURLY = 1112,
        tRCURLY = 1113,
        tBACK_REF2 = 1114,
        tSYMBEG = 1115,
        tSTRING_BEG = 1116,
        tXSTRING_BEG = 1117,
        tREGEXP_BEG = 1118,
        tREGEXP_OPT = 1119,
        tWORDS_BEG = 1120,
        tQWORDS_BEG = 1121,
        tSYMBOLS_BEG = 1122,
        tQSYMBOLS_BEG = 1123,
        tSTRING_DBEG = 1124,
        tSTRING_DVAR = 1125,
        tSTRING_END = 1126,
        tSTRING_DEND = 1127,
        tSTRING = 1128,
        tSYMBOL = 1129,
        tNL = 1130,
        tEH = 1131,
        tCOLON = 1132,
        tCOMMA = 1133,
        tSPACE = 1134,
        tSEMI = 1135,
        tLAMBDA = 1136,
        tLAMBEG = 1137,
        tCHARACTER = 1138,
        tRATIONAL = 1139,
        tIMAGINARY = 1140,
        tLABEL_END = 1141,
        tANDDOT = 1142,
        tRATIONAL_IMAGINARY = 1143,
        tFLOAT_IMAGINARY = 1144,
        tLOWEST = 1146
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef unsigned char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);
      /// Constructor for valueless symbols.
      basic_symbol (typename Base::kind_type t);

      /// Constructor for symbols with semantic value.
      basic_symbol (typename Base::kind_type t,
                    YY_RVREF (semantic_type) v);

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The token.
      token_type token () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {};

    /// Build a parser object.
    parser (ruby_parser::typedruby25& driver_yyarg, ruby_parser::SelfPtr self_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if TYPEDRUBY25DEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param msg    a description of the syntax error.
    virtual void error (const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);



  private:
    /// This class is not copyable.
    parser (const parser&);
    parser& operator= (const parser&);

    /// State numbers.
    typedef int state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short yypact_ninf_;
    static const short yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    static token_number_type yytranslate_ (int t);

    // Tables.
  // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
  // STATE-NUM.
  static const short yypact_[];

  // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
  // Performed when YYTABLE does not specify something else to do.  Zero
  // means the default is an error.
  static const unsigned short yydefact_[];

  // YYPGOTO[NTERM-NUM].
  static const short yypgoto_[];

  // YYDEFGOTO[NTERM-NUM].
  static const short yydefgoto_[];

  // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
  // positive, shift that token.  If negative, reduce the rule whose
  // number is the opposite.  If YYTABLE_NINF, syntax error.
  static const short yytable_[];

  static const short yycheck_[];

  // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
  // symbol of state STATE-NUM.
  static const unsigned short yystos_[];

  // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
  static const unsigned short yyr1_[];

  // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
  static const unsigned char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if TYPEDRUBY25DEBUG
  // YYRLINE[YYN] -- Source line where rule number YYN was defined.
  static const unsigned short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      enum { empty_state = -1 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (size_type i)
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (int i)
      {
        return operator[] (size_type (i));
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (size_type i) const
      {
        return seq_[size () - 1 - i];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (int i) const
      {
        return operator[] (size_type (i));
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (int n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      size_type
      size () const YY_NOEXCEPT
      {
        return seq_.size ();
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, int range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (int i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        int range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 12392,     ///< Last index in yytable_.
      yynnts_ = 183,  ///< Number of nonterminal symbols.
      yyfinal_ = 329, ///< Termination state number.
      yyterror_ = 1,
      yyerrcode_ = 256,
      yyntokens_ = 148  ///< Number of tokens.
    };


    // User arguments.
    ruby_parser::typedruby25& driver;
    ruby_parser::SelfPtr self;
  };


#line 26 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:432
} } } // ruby_parser::bison::typedruby25
#line 850 "typedruby.tab.cpp" // lalr1.cc:432






// Unqualified %code blocks.
#line 385 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:435

namespace ruby_parser {
namespace bison {
namespace typedruby25 {

#define DIAGCHECK() do { \
	if (driver.pending_error) { \
		driver.pending_error = false; \
		YYERROR; \
	} \
} while(false);

void parser::error(const std::string &msg) {
  std::string error_message = msg;

  int token_type = static_cast<int>(driver.last_token->type());
  const char* token_str_name = yytname_[yytranslate_(token_type)];

  if (token_str_name != nullptr) {
    error_message = token_str_name;
  }

	driver.diagnostics.emplace_back(
		dlevel::ERROR, dclass::UnexpectedToken,
		diagnostic::range(driver.lex.last_token_s, driver.lex.last_token_e),
		error_message);
}

int yylex(parser::semantic_type *lval, ruby_parser::typedruby25 &driver) {
	auto token = driver.lex.advance();
	driver.last_token = token;
	int token_type = static_cast<int>(token->type());
	assert(token_type >= 0);
	lval->token = token;
	return token_type;
}

}}} // namespace

#line 898 "typedruby.tab.cpp" // lalr1.cc:435


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if TYPEDRUBY25DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !TYPEDRUBY25DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !TYPEDRUBY25DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 26 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:510
namespace ruby_parser { namespace bison { namespace typedruby25 {
#line 974 "typedruby.tab.cpp" // lalr1.cc:510

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser (ruby_parser::typedruby25& driver_yyarg, ruby_parser::SelfPtr self_yyarg)
    :
#if TYPEDRUBY25DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg),
      self (self_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value (std::move (that.value))
  {}
#endif

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t)
    : Base (t)
    , value ()
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (semantic_type) v)
    : Base (t)
    , value (YY_MOVE (v))
  {}

  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
  }

  // by_type.
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  parser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  parser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  int
  parser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }


  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value))
  {
    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YYUSE (yysym.type_get ());
  }

#if TYPEDRUBY25DEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if TYPEDRUBY25DEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // TYPEDRUBY25DEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, driver));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;


      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 427 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.ast = (yystack_[0].value.node);
                    }
#line 1445 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 3:
#line 432 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.compstmt(self, (yystack_[1].value.list));
                    }
#line 1453 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 4:
#line 437 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 1461 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 5:
#line 441 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 1469 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 6:
#line 445 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yystack_[2].value.list)->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = (yystack_[2].value.list);
                    }
#line 1478 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 7:
#line 450 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 1486 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 8:
#line 454 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1492 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 9:
#line 456 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.preexe(self, (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 1500 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 10:
#line 461 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &rescueBodies = (yystack_[2].value.list);
                      auto &else_ = (yystack_[1].value.with_token);
                      auto &ensure = (yystack_[0].value.with_token);

                      if (rescueBodies->size() == 0 && else_ != nullptr) {
                        driver.diagnostics.emplace_back(
			  dlevel::WARNING, dclass::UselessElse, else_->tok);
                      }

                      (yylhs.value.node) = driver.build.beginBody(self, (yystack_[3].value.node), rescueBodies,
						else_ ? else_->tok : nullptr,
						else_ ? else_->nod : nullptr,
						ensure ? ensure->tok : nullptr,
						ensure ? ensure->nod : nullptr);
                    }
#line 1521 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 11:
#line 479 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.compstmt(self, (yystack_[1].value.list));
                    }
#line 1529 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 12:
#line 484 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 1537 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 13:
#line 488 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 1545 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 14:
#line 492 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yystack_[2].value.list)->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = (yystack_[2].value.list);
                    }
#line 1554 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 15:
#line 497 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 1562 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 16:
#line 501 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[1].value.node));
                    }
#line 1570 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 17:
#line 505 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1576 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 18:
#line 507 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR,
			dclass::BeginInMethod, (yystack_[3].value.token));
                      YYERROR;
                    }
#line 1586 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 19:
#line 514 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_fname();
                    }
#line 1594 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 20:
#line 518 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.alias(self, (yystack_[3].value.token), (yystack_[2].value.node), (yystack_[0].value.node));
                    }
#line 1602 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 21:
#line 522 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.alias(self, (yystack_[2].value.token), driver.build.gvar(self, (yystack_[1].value.token)), driver.build.gvar(self, (yystack_[0].value.token)));
                    }
#line 1610 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 22:
#line 526 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.alias(self, (yystack_[2].value.token), driver.build.gvar(self, (yystack_[1].value.token)), driver.build.backRef(self, (yystack_[0].value.token)));
                    }
#line 1618 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 23:
#line 530 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR, dclass::NthRefAlias, (yystack_[0].value.token));
                      YYERROR;
                    }
#line 1627 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 24:
#line 535 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.undefMethod(self, (yystack_[1].value.token), (yystack_[0].value.list));
                    }
#line 1635 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 25:
#line 539 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.conditionMod(self, (yystack_[2].value.node), nullptr, (yystack_[0].value.node));
                    }
#line 1643 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 26:
#line 543 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.conditionMod(self, nullptr, (yystack_[2].value.node), (yystack_[0].value.node));
                    }
#line 1651 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 27:
#line 547 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.loop_while_mod(self, (yystack_[2].value.node), (yystack_[0].value.node));
                    }
#line 1659 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 28:
#line 551 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.loopUntil_mod(self, (yystack_[2].value.node), (yystack_[0].value.node));
                    }
#line 1667 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 29:
#line 555 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      ruby_parser::node_list rescue_body(
						driver.build.rescue_body(self, (yystack_[1].value.token), nullptr, nullptr, nullptr, nullptr, (yystack_[0].value.node)));
                      (yylhs.value.node) = driver.build.beginBody(self, (yystack_[2].value.node), &rescue_body, nullptr, nullptr, nullptr, nullptr);
                    }
#line 1677 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 30:
#line 561 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.postexe(self, (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 1685 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 31:
#line 564 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1691 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 32:
#line 566 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_assign(self, (yystack_[2].value.node), (yystack_[0].value.node));
                    }
#line 1699 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 33:
#line 570 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assign(self, (yystack_[2].value.node), (yystack_[1].value.token), driver.build.array(self, nullptr, (yystack_[0].value.list), nullptr));
                    }
#line 1707 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 34:
#line 574 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_assign(self, (yystack_[2].value.node), (yystack_[0].value.node));
                    }
#line 1715 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 35:
#line 577 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1721 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 36:
#line 580 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assign(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 1729 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 37:
#line 584 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1738 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 38:
#line 589 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.index(self, (yystack_[5].value.node), (yystack_[4].value.token), (yystack_[3].value.list), (yystack_[2].value.token)), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1747 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 39:
#line 594 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, nullptr, nullptr), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1756 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 40:
#line 599 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, nullptr, nullptr), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1765 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 41:
#line 604 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto const_node = driver.build.constOpAssignable(self, driver.build.constFetch(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token)));
                      (yylhs.value.node) = driver.build.op_assign(self, const_node, (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1775 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 42:
#line 610 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, nullptr, nullptr), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1784 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 43:
#line 615 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 1793 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 44:
#line 620 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1799 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 45:
#line 622 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      node_list rescue_body(
			driver.build.rescue_body(self, (yystack_[1].value.token), nullptr, nullptr, nullptr, nullptr, (yystack_[0].value.node)));
                      (yylhs.value.node) = driver.build.beginBody(self, (yystack_[2].value.node), &rescue_body, nullptr, nullptr, nullptr, nullptr);
                    }
#line 1809 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 46:
#line 627 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1815 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 47:
#line 629 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1821 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 48:
#line 631 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.logicalAnd(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 1829 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 49:
#line 635 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.logicalOr(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 1837 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 50:
#line 639 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.not_op(self, (yystack_[2].value.token), nullptr, (yystack_[0].value.node), nullptr);
                    }
#line 1845 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 51:
#line 643 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.not_op(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.node), nullptr);
                    }
#line 1853 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 52:
#line 646 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1859 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 53:
#line 648 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1865 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 54:
#line 650 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1871 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 55:
#line 651 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1877 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 56:
#line 653 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 1883 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 57:
#line 655 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 1891 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 58:
#line 660 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &block = (yystack_[1].value.delimited_block);
                      block->begin = (yystack_[2].value.token);
                      block->end = (yystack_[0].value.token);
                      (yylhs.value.delimited_block) = block;
                    }
#line 1902 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 59:
#line 667 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 1908 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 60:
#line 670 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.call_method(self, nullptr, nullptr, (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 1916 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 61:
#line 674 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto methodCall = driver.build.call_method(self, nullptr, nullptr, (yystack_[2].value.token), nullptr, (yystack_[1].value.list), nullptr);
                      auto &delimited_block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, methodCall,
                                      delimited_block->begin,
                                      delimited_block->args,
                                      delimited_block->body,
                                      delimited_block->end);
                      DIAGCHECK();
                    }
#line 1931 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 62:
#line 685 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 1939 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 63:
#line 689 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto methodCall = driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, (yystack_[1].value.list), nullptr);
                      auto &delimited_block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, methodCall,
                                      delimited_block->begin,
                                      delimited_block->args,
                                      delimited_block->body,
                                      delimited_block->end);
                      DIAGCHECK();
                    }
#line 1954 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 64:
#line 700 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 1962 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 65:
#line 704 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto methodCall = driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, (yystack_[1].value.list), nullptr);
                      auto &delimited_block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, methodCall,
                                      delimited_block->begin,
                                      delimited_block->args,
                                      delimited_block->body,
                                      delimited_block->end);
                      DIAGCHECK();
                    }
#line 1977 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 66:
#line 715 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordSuper(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 1985 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 67:
#line 719 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordYield(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                      DIAGCHECK();
                    }
#line 1994 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 68:
#line 724 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordReturn(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 2002 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 69:
#line 728 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordBreak(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 2010 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 70:
#line 732 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordNext(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 2018 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 71:
#line 737 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_lhs(self, nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 2026 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 72:
#line 741 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.begin(self, (yystack_[2].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 2034 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 73:
#line 746 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_lhs(self, nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 2042 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 74:
#line 750 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_lhs1(self, (yystack_[2].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 2050 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 75:
#line 754 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 2056 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 76:
#line 756 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 2066 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 77:
#line 762 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back(driver.build.splat_mlhs(self, (yystack_[1].value.token), (yystack_[0].value.node)));
                      (yylhs.value.list) = list;
                    }
#line 2076 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 78:
#line 768 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &head = (yystack_[4].value.list);
                      head->emplace_back(driver.build.splat_mlhs(self, (yystack_[3].value.token), (yystack_[2].value.node)));
                      head->concat((yystack_[0].value.list));
                      (yylhs.value.list) = head;
                    }
#line 2087 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 79:
#line 775 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back(driver.build.splat_mlhs(self, (yystack_[0].value.token), nullptr));
                      (yylhs.value.list) = list;
                    }
#line 2097 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 80:
#line 781 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &head = (yystack_[3].value.list);
                      head->emplace_back(driver.build.splat_mlhs(self, (yystack_[2].value.token), nullptr));
                      head->concat((yystack_[0].value.list));
                      (yylhs.value.list) = head;
                    }
#line 2108 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 81:
#line 788 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.splat_mlhs(self, (yystack_[1].value.token), (yystack_[0].value.node)));
                    }
#line 2116 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 82:
#line 792 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      node_list *items = driver.alloc.node_list(driver.build.splat_mlhs(self, (yystack_[3].value.token), (yystack_[2].value.node)));
                      items->concat((yystack_[0].value.list));
                      (yylhs.value.list) = items;
                    }
#line 2126 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 83:
#line 798 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.splat_mlhs(self, (yystack_[0].value.token), nullptr));
                    }
#line 2134 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 84:
#line 802 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      node_list *items = driver.alloc.node_list(driver.build.splat_mlhs(self, (yystack_[2].value.token), nullptr));
                      items->concat((yystack_[0].value.list));
                      (yylhs.value.list) = items;
                    }
#line 2144 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 85:
#line 808 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 2150 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 86:
#line 810 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.begin(self, (yystack_[2].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 2158 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 87:
#line 815 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[1].value.node));
                    }
#line 2166 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 88:
#line 819 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[1].value.node));
                      (yylhs.value.list) = list;
                    }
#line 2176 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 89:
#line 826 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 2184 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 90:
#line 830 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 2194 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 91:
#line 837 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2203 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 92:
#line 842 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2212 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 93:
#line 847 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.indexAsgn(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 2220 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 94:
#line 851 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.attrAsgn(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2228 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 95:
#line 855 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.attrAsgn(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2236 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 96:
#line 859 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.attrAsgn(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2244 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 97:
#line 863 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, driver.build.constFetch(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token)));
                      DIAGCHECK();
                    }
#line 2253 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 98:
#line 868 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, driver.build.constGlobal(self, (yystack_[1].value.token), (yystack_[0].value.token)));
                      DIAGCHECK();
                    }
#line 2262 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 99:
#line 873 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2271 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 100:
#line 879 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2280 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 101:
#line 884 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2289 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 102:
#line 889 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.indexAsgn(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 2297 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 103:
#line 893 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.attrAsgn(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2305 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 104:
#line 897 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.attrAsgn(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2313 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 105:
#line 901 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.attrAsgn(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2321 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 106:
#line 905 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, driver.build.constFetch(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token)));
                      DIAGCHECK();
                    }
#line 2330 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 107:
#line 910 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, driver.build.constGlobal(self, (yystack_[1].value.token), (yystack_[0].value.token)));
                      DIAGCHECK();
                    }
#line 2339 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 108:
#line 915 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2348 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 109:
#line 921 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ModuleNameConst, (yystack_[0].value.token));
                      YYERROR;
                    }
#line 2357 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 110:
#line 925 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2363 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 111:
#line 928 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.constGlobal(self, (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2371 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 112:
#line 932 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.const_(self, (yystack_[0].value.token));
                    }
#line 2379 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 113:
#line 936 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.constFetch(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 2387 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 114:
#line 940 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2393 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 115:
#line 940 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2399 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 116:
#line 940 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2405 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 117:
#line 941 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2411 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 118:
#line 942 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2417 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 119:
#line 945 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.symbol(self, (yystack_[0].value.token));
                    }
#line 2425 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 120:
#line 948 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 2431 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 121:
#line 950 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 2437 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 122:
#line 951 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 2443 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 123:
#line 954 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 2451 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 124:
#line 958 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_fname();
                    }
#line 2459 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 125:
#line 962 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[3].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 2469 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 126:
#line 968 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2475 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 127:
#line 968 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2481 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 128:
#line 968 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2487 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 129:
#line 968 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2493 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 130:
#line 968 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2499 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 131:
#line 968 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2505 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 132:
#line 969 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2511 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 133:
#line 969 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2517 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 134:
#line 969 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2523 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 135:
#line 969 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2529 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 136:
#line 969 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2535 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 137:
#line 969 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2541 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 138:
#line 970 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2547 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 139:
#line 970 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2553 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 140:
#line 970 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2559 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 141:
#line 970 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2565 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 142:
#line 970 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2571 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 143:
#line 970 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2577 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 144:
#line 971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2583 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 145:
#line 971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2589 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 146:
#line 971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2595 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 147:
#line 971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2601 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 148:
#line 971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2607 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 149:
#line 971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2613 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 150:
#line 972 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2619 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 151:
#line 972 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2625 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 152:
#line 972 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2631 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 153:
#line 972 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2637 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 154:
#line 972 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2643 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 155:
#line 972 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2649 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 156:
#line 974 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2655 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 157:
#line 974 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2661 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 158:
#line 974 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2667 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 159:
#line 974 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2673 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 160:
#line 974 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2679 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 161:
#line 975 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2685 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 162:
#line 975 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2691 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 163:
#line 975 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2697 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 164:
#line 975 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2703 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 165:
#line 975 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2709 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 166:
#line 976 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2715 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 167:
#line 976 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2721 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 168:
#line 976 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2727 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 169:
#line 976 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2733 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 170:
#line 976 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2739 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 171:
#line 977 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2745 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 172:
#line 977 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2751 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 173:
#line 977 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2757 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 174:
#line 977 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2763 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 175:
#line 977 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2769 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 176:
#line 978 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2775 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 177:
#line 978 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2781 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 178:
#line 978 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2787 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 179:
#line 978 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2793 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 180:
#line 978 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2799 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 181:
#line 979 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2805 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 182:
#line 979 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2811 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 183:
#line 979 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2817 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 184:
#line 979 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2823 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 185:
#line 979 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2829 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 186:
#line 980 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2835 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 187:
#line 980 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2841 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 188:
#line 980 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2847 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 189:
#line 980 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2853 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 190:
#line 980 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2859 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 191:
#line 981 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2865 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 192:
#line 981 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2871 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 193:
#line 981 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2877 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 194:
#line 981 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2883 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 195:
#line 981 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2889 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 196:
#line 982 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 2895 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 197:
#line 985 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assign(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 2903 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 198:
#line 989 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2912 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 199:
#line 994 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.index(self, (yystack_[5].value.node), (yystack_[4].value.token), (yystack_[3].value.list), (yystack_[2].value.token)), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2921 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 200:
#line 999 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, nullptr, nullptr), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2930 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 201:
#line 1004 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, nullptr, nullptr), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2939 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 202:
#line 1009 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, nullptr, nullptr), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2948 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 203:
#line 1014 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto const_ = driver.build.constOpAssignable(self, driver.build.constFetch(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token)));
                      (yylhs.value.node) = driver.build.op_assign(self, const_, (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2958 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 204:
#line 1020 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto const_ = driver.build.constOpAssignable(self, driver.build.constGlobal(self, (yystack_[3].value.token), (yystack_[2].value.token)));
                      (yylhs.value.node) = driver.build.op_assign(self, const_, (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2968 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 205:
#line 1026 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.op_assign(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 2977 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 206:
#line 1031 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.range_inclusive(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 2985 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 207:
#line 1035 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.range_exclusive(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 2993 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 208:
#line 1039 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3001 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 209:
#line 1043 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3009 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 210:
#line 1047 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3017 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 211:
#line 1051 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3025 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 212:
#line 1055 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3033 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 213:
#line 1059 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3041 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 214:
#line 1063 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.unary_op(self, (yystack_[3].value.token), driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node)));
                    }
#line 3049 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 215:
#line 1067 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.unary_op(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3057 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 216:
#line 1071 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.unary_op(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3065 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 217:
#line 1075 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3073 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 218:
#line 1079 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3081 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 219:
#line 1083 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3089 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 220:
#line 1087 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3097 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 221:
#line 1091 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3105 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 222:
#line 1095 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3113 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 223:
#line 1099 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3121 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 224:
#line 1103 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3129 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 225:
#line 1107 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3137 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 226:
#line 1111 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3145 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 227:
#line 1115 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3153 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 228:
#line 1119 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.match_op(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 3162 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 229:
#line 1124 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3170 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 230:
#line 1128 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.not_op(self, (yystack_[1].value.token), nullptr, (yystack_[0].value.node), nullptr);
                    }
#line 3178 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 231:
#line 1132 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.unary_op(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3186 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 232:
#line 1136 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3194 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 233:
#line 1140 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.binaryOp(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3202 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 234:
#line 1144 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.logicalAnd(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3210 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 235:
#line 1148 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.logicalOr(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3218 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 236:
#line 1152 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordDefined(self, (yystack_[2].value.token), (yystack_[0].value.node));
                    }
#line 3226 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 237:
#line 1156 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.ternary(self, (yystack_[5].value.node), (yystack_[4].value.token), (yystack_[3].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3234 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 238:
#line 1159 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3240 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 239:
#line 1161 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3246 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 240:
#line 1163 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 3252 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 241:
#line 1164 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[1].value.list); }
#line 3258 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 242:
#line 1166 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[3].value.list);
                      list->emplace_back(driver.build.associate(self, nullptr, (yystack_[1].value.list), nullptr));
                      (yylhs.value.list) = list;
                    }
#line 3268 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 243:
#line 1172 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.associate(self, nullptr, (yystack_[1].value.list), nullptr));
                    }
#line 3276 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 244:
#line 1176 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3282 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 245:
#line 1178 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      node_list rescue_body(driver.build.rescue_body(self, (yystack_[1].value.token), nullptr, nullptr, nullptr, nullptr, (yystack_[0].value.node)));
                      (yylhs.value.node) = driver.build.beginBody(self, (yystack_[2].value.node), &rescue_body, nullptr, nullptr, nullptr, nullptr);
                    }
#line 3291 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 246:
#line 1184 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.delimited_list) = driver.alloc.delimited_node_list((yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 3299 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 247:
#line 1189 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.delimited_list) = driver.alloc.delimited_node_list(nullptr, driver.alloc.node_list(), nullptr);
                    }
#line 3307 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 248:
#line 1192 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.delimited_list) = (yystack_[0].value.delimited_list); }
#line 3313 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 249:
#line 1195 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 3321 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 250:
#line 1198 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 3327 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 251:
#line 1199 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[1].value.list); }
#line 3333 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 252:
#line 1201 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[3].value.list);
                      list->emplace_back(driver.build.associate(self, nullptr, (yystack_[1].value.list), nullptr));
                      (yylhs.value.list) = list;
                    }
#line 3343 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 253:
#line 1207 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.associate(self, nullptr, (yystack_[1].value.list), nullptr));
                    }
#line 3351 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 254:
#line 1212 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 3359 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 255:
#line 1216 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 3369 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 256:
#line 1222 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      node_list *args = driver.alloc.node_list(driver.build.associate(self, nullptr, (yystack_[1].value.list), nullptr));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 3379 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 257:
#line 1228 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->emplace_back(driver.build.associate(self, nullptr, (yystack_[1].value.list), nullptr));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 3390 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 258:
#line 1235 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 3398 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 259:
#line 1239 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.push(true);
                    }
#line 3407 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 260:
#line 1244 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.replace_stack((yystack_[1].value.stack));
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 3416 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 261:
#line 1250 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.blockPass(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 3424 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 262:
#line 1255 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 3432 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 263:
#line 1259 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 3440 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 264:
#line 1264 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 3448 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 265:
#line 1268 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.splat(self, (yystack_[1].value.token), (yystack_[0].value.node)));
                    }
#line 3456 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 266:
#line 1272 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 3466 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 267:
#line 1278 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[3].value.list);
                      list->emplace_back(driver.build.splat(self, (yystack_[1].value.token), (yystack_[0].value.node)));
                      (yylhs.value.list) = list;
                    }
#line 3476 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 268:
#line 1285 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.array(self, nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 3484 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 269:
#line 1288 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3490 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 270:
#line 1291 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 3500 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 271:
#line 1297 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[3].value.list);
                      list->emplace_back(driver.build.splat(self, (yystack_[1].value.token), (yystack_[0].value.node)));
                      (yylhs.value.list) = list;
                    }
#line 3510 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 272:
#line 1303 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.splat(self, (yystack_[1].value.token), (yystack_[0].value.node)));
                    }
#line 3518 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 273:
#line 1307 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3524 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 274:
#line 1308 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3530 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 275:
#line 1309 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3536 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 276:
#line 1310 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3542 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 277:
#line 1311 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3548 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 278:
#line 1312 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3554 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 279:
#line 1313 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3560 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 280:
#line 1314 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3566 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 281:
#line 1315 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3572 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 282:
#line 1316 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3578 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 283:
#line 1318 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.call_method(self, nullptr, nullptr, (yystack_[0].value.token), nullptr, nullptr, nullptr);
                    }
#line 3586 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 284:
#line 1322 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 3595 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 285:
#line 1327 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.replace_stack((yystack_[2].value.stack));
                      (yylhs.value.node) = driver.build.beginKeyword(self, (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 3604 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 286:
#line 1332 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 3613 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 287:
#line 1337 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                    }
#line 3621 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 288:
#line 1341 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.replace_stack((yystack_[3].value.stack));
                      (yylhs.value.node) = driver.build.begin(self, (yystack_[4].value.token), (yystack_[2].value.node), (yystack_[0].value.token));
                    }
#line 3630 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 289:
#line 1346 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                    }
#line 3638 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 290:
#line 1350 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.begin(self, (yystack_[3].value.token), nullptr, (yystack_[0].value.token));
                    }
#line 3646 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 291:
#line 1354 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.begin(self, (yystack_[2].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 3654 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 292:
#line 1358 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.constFetch(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 3662 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 293:
#line 1362 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.constGlobal(self, (yystack_[1].value.token), (yystack_[0].value.token));
                    }
#line 3670 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 294:
#line 1366 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.array(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 3678 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 295:
#line 1370 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.associate(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 3686 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 296:
#line 1374 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordReturn(self, (yystack_[0].value.token), nullptr, nullptr, nullptr);
                    }
#line 3694 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 297:
#line 1378 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordYield(self, (yystack_[3].value.token), (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                      DIAGCHECK();
                    }
#line 3703 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 298:
#line 1383 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      node_list tmp;
                      (yylhs.value.node) = driver.build.keywordYield(self, (yystack_[2].value.token), (yystack_[1].value.token), &tmp, (yystack_[0].value.token));
                      DIAGCHECK();
                    }
#line 3713 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 299:
#line 1389 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordYield(self, (yystack_[0].value.token), nullptr, nullptr, nullptr);
                      DIAGCHECK();
                    }
#line 3722 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 300:
#line 1394 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordDefined(self, (yystack_[4].value.token), (yystack_[1].value.node));
                    }
#line 3730 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 301:
#line 1398 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.not_op(self, (yystack_[3].value.token), (yystack_[2].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 3738 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 302:
#line 1402 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.not_op(self, (yystack_[2].value.token), (yystack_[1].value.token), nullptr, (yystack_[0].value.token));
                    }
#line 3746 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 303:
#line 1406 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto methodCall = driver.build.call_method(self, nullptr, nullptr, (yystack_[1].value.token), nullptr, nullptr, nullptr);
                      auto &delimited_block = (yystack_[0].value.delimited_block);

                      (yylhs.value.node) = driver.build.block(self, methodCall,
                        delimited_block->begin,
                        delimited_block->args,
                        delimited_block->body,
                        delimited_block->end);
                      DIAGCHECK();
                    }
#line 3762 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 304:
#line 1417 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 3768 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 305:
#line 1419 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited_block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, (yystack_[1].value.node),
                        delimited_block->begin,
                        delimited_block->args,
                        delimited_block->body,
                        delimited_block->end);
                      DIAGCHECK();
                    }
#line 3782 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 306:
#line 1429 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto lambda_call = driver.build.callLambda(self, (yystack_[1].value.token));
                      auto &lambda = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, lambda_call,
                        lambda->begin,
                        lambda->args,
                        lambda->body,
                        lambda->end);
                      DIAGCHECK();
                    }
#line 3797 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 307:
#line 1440 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &else_ = (yystack_[1].value.with_token);
                      (yylhs.value.node) = driver.build.condition(self, (yystack_[5].value.token), (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.node),
			else_ ? else_->tok : nullptr,
			else_ ? else_->nod : nullptr, (yystack_[0].value.token));
                    }
#line 3808 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 308:
#line 1447 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &else_ = (yystack_[1].value.with_token);
                      (yylhs.value.node) = driver.build.condition(self, (yystack_[5].value.token), (yystack_[4].value.node), (yystack_[3].value.token),
                        else_ ? else_->nod : nullptr,
			else_ ? else_->tok : nullptr, (yystack_[2].value.node), (yystack_[0].value.token));
                    }
#line 3819 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 309:
#line 1454 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.push(true);
                    }
#line 3827 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 310:
#line 1458 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.pop();
                    }
#line 3835 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 311:
#line 1462 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.loop_while(self, (yystack_[6].value.token), (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 3843 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 312:
#line 1466 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.push(true);
                    }
#line 3851 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 313:
#line 1470 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.pop();
                    }
#line 3859 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 314:
#line 1474 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.loopUntil(self, (yystack_[6].value.token), (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 3867 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 315:
#line 1478 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &case_body = (yystack_[1].value.case_body);
                      auto &else_ = case_body->els;
                      (yylhs.value.node) = driver.build.case_(self, (yystack_[4].value.token), (yystack_[3].value.node),
                        &case_body->whens,
                        else_ ? else_->tok : nullptr,
			else_ ? else_->nod : nullptr, (yystack_[0].value.token));
                    }
#line 3880 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 316:
#line 1487 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &case_body = (yystack_[1].value.case_body);
                      auto &else_ = case_body->els;
                      (yylhs.value.node) = driver.build.case_(self, (yystack_[3].value.token), nullptr,
                        &case_body->whens,
                        else_ ? else_->tok : nullptr,
			else_ ? else_->nod : nullptr, (yystack_[0].value.token));
                    }
#line 3893 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 317:
#line 1496 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.push(true);
                    }
#line 3901 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 318:
#line 1500 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.pop();
                    }
#line 3909 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 319:
#line 1504 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.for_(self, (yystack_[8].value.token), (yystack_[7].value.node), (yystack_[6].value.token), (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 3917 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 320:
#line 1508 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.extend_static();
                      driver.lex.cond.push(false);
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 3928 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 321:
#line 1515 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto class_tok = (yystack_[5].value.token);
                      auto end_tok = (yystack_[0].value.token);

                      if (driver.def_level > 0) {
                        driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ClassInDef, class_tok);
                        YYERROR;
                      }

                      auto &superclass_ = (yystack_[3].value.with_token);
                      auto lt_t       = superclass_ ? superclass_->tok : nullptr;
                      auto superclass = superclass_ ? superclass_->nod : nullptr;

                      (yylhs.value.node) = driver.build.def_class(self, class_tok, (yystack_[4].value.node), lt_t, superclass, (yystack_[1].value.node), end_tok);
                      driver.replace_stack((yystack_[2].value.stack));
                      driver.lex.cond.pop();
                      driver.lex.unextend();
                    }
#line 3951 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 322:
#line 1534 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.size) = driver.def_level;
                      driver.def_level = 0;
                    }
#line 3960 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 323:
#line 1538 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.extend_static();
                      driver.lex.cond.push(false);
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 3971 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 324:
#line 1545 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.def_sclass(self, (yystack_[7].value.token), (yystack_[6].value.token), (yystack_[5].value.node), (yystack_[1].value.node), (yystack_[0].value.token));
                      driver.def_level = (yystack_[3].value.size);
                      driver.replace_stack((yystack_[2].value.stack));
                      driver.lex.cond.pop();
                      driver.lex.unextend();
                    }
#line 3983 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 325:
#line 1553 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.extend_static();
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 3993 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 326:
#line 1559 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto module_tok = (yystack_[4].value.token);
                      auto end_tok = (yystack_[0].value.token);

                      if (driver.def_level > 0) {
                        driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ModuleInDef, module_tok);
                        YYERROR;
                      }

                      (yylhs.value.node) = driver.build.defModule(self, module_tok, (yystack_[3].value.node), (yystack_[1].value.node), end_tok);
                      driver.replace_stack((yystack_[2].value.stack));
                      driver.lex.unextend();
                    }
#line 4011 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 327:
#line 1573 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.def_level++;
                      driver.lex.extend_static();
                      driver.lex.cond.push(false);
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 4023 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 328:
#line 1581 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.defMethod(self, (yystack_[5].value.token), (yystack_[4].value.token), (yystack_[2].value.node), (yystack_[1].value.node), (yystack_[0].value.token));
                      driver.replace_stack((yystack_[3].value.stack));
                      driver.lex.cond.pop();
                      driver.lex.unextend();
                      driver.def_level--;
                    }
#line 4035 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 329:
#line 1589 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_fname();
                    }
#line 4043 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 330:
#line 1593 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.def_level++;
                      driver.lex.extend_static();
                      driver.lex.cond.push(false);
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 4055 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 331:
#line 1601 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.defSingleton(self, (yystack_[8].value.token), (yystack_[7].value.node), (yystack_[6].value.token), (yystack_[4].value.token), (yystack_[2].value.node), (yystack_[1].value.node), (yystack_[0].value.token));
                      DIAGCHECK();

                      driver.replace_stack((yystack_[3].value.stack));
                      driver.lex.cond.pop();
                      driver.lex.unextend();
                      driver.def_level--;
                    }
#line 4069 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 332:
#line 1611 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordBreak(self, (yystack_[0].value.token), nullptr, nullptr, nullptr);
                    }
#line 4077 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 333:
#line 1615 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordNext(self, (yystack_[0].value.token), nullptr, nullptr, nullptr);
                    }
#line 4085 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 334:
#line 1619 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordRedo(self, (yystack_[0].value.token));
                    }
#line 4093 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 335:
#line 1623 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordRetry(self, (yystack_[0].value.token));
                    }
#line 4101 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 336:
#line 1627 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 4107 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 337:
#line 1629 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 4113 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 338:
#line 1630 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 4119 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 339:
#line 1632 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.token) = (yystack_[0].value.token);
                    }
#line 4127 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 340:
#line 1636 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 4133 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 341:
#line 1637 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 4139 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 342:
#line 1639 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.with_token) = (yystack_[0].value.with_token); }
#line 4145 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 343:
#line 1641 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto elsif_t = (yystack_[4].value.token);
                      auto &else_ = (yystack_[0].value.with_token);
                      (yylhs.value.with_token) = driver.alloc.node_with_token(elsif_t,
                        driver.build.condition(self,
                          elsif_t, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.node),
                          else_ ? else_->tok : nullptr,
                          else_ ? else_->nod : nullptr, nullptr)
                      );
                    }
#line 4160 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 344:
#line 1653 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = nullptr;
                    }
#line 4168 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 345:
#line 1657 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = driver.alloc.node_with_token((yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 4176 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 346:
#line 1661 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 4182 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 347:
#line 1662 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 4188 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 348:
#line 1665 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.arg(self, (yystack_[0].value.token));
                    }
#line 4196 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 349:
#line 1669 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_lhs(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 4204 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 350:
#line 1674 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 4212 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 351:
#line 1678 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 4222 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 352:
#line 1684 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 4228 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 353:
#line 1686 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[3].value.list);
                      list->emplace_back(driver.build.restarg(self, (yystack_[1].value.token), (yystack_[0].value.token)));
                      (yylhs.value.list) = list;
                    }
#line 4238 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 354:
#line 1692 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->emplace_back(driver.build.restarg(self, (yystack_[3].value.token), (yystack_[2].value.token)));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4249 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 355:
#line 1699 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back(driver.build.restarg(self, (yystack_[0].value.token), nullptr));
                      (yylhs.value.list) = list;
                    }
#line 4259 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 356:
#line 1705 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[4].value.list);
                      args->emplace_back(driver.build.restarg(self, (yystack_[2].value.token), nullptr));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4270 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 357:
#line 1712 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.restarg(self, (yystack_[1].value.token), (yystack_[0].value.token)));
                    }
#line 4278 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 358:
#line 1716 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[0].value.list);
                      args->push_front(driver.build.restarg(self, (yystack_[3].value.token), (yystack_[2].value.token)));
                      (yylhs.value.list) = args;
                    }
#line 4288 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 359:
#line 1722 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list(driver.build.restarg(self, (yystack_[0].value.token), nullptr));
                    }
#line 4296 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 360:
#line 1726 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[0].value.list);
                      args->push_front(driver.build.restarg(self, (yystack_[2].value.token), nullptr));
                      (yylhs.value.list) = args;
                    }
#line 4306 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 361:
#line 1733 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4317 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 362:
#line 1740 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4327 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 363:
#line 1746 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4337 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 364:
#line 1752 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 4345 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 365:
#line 1758 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 4353 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 366:
#line 1762 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 4361 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 367:
#line 1767 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4373 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 368:
#line 1775 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[7].value.list);
                      args->concat((yystack_[5].value.list));
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4386 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 369:
#line 1784 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4397 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 370:
#line 1791 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4409 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 371:
#line 1799 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4420 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 372:
#line 1805 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[1].value.list); }
#line 4426 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 373:
#line 1807 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4438 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 374:
#line 1815 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      auto &block_args_tail = (yystack_[0].value.list);

                      if (block_args_tail->size() == 0 && args->size() == 1) {
                        (yylhs.value.list) = driver.alloc.node_list(driver.build.procarg0(self, args->at(0)));
                      } else {
                        args->concat(block_args_tail);
                        (yylhs.value.list) = args;
                      }
                    }
#line 4454 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 375:
#line 1827 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4465 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 376:
#line 1834 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4477 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 377:
#line 1842 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4487 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 378:
#line 1848 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4498 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 379:
#line 1855 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4508 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 380:
#line 1861 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 4519 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 381:
#line 1867 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 4525 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 382:
#line 1870 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.args(self, nullptr, nullptr, nullptr, true);
                      DIAGCHECK();
                    }
#line 4534 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 383:
#line 1875 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_value();
                    }
#line 4542 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 384:
#line 1880 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.args(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token), true);
                      DIAGCHECK();
                    }
#line 4551 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 385:
#line 1885 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.args(self, (yystack_[0].value.token), nullptr, (yystack_[0].value.token), true);
                      DIAGCHECK();
                    }
#line 4560 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 386:
#line 1890 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &params = (yystack_[2].value.list);
                      params->concat((yystack_[1].value.list));
                      (yylhs.value.node) = driver.build.args(self, (yystack_[3].value.token), params, (yystack_[0].value.token), true);
                      DIAGCHECK();
                    }
#line 4571 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 387:
#line 1898 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 4579 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 388:
#line 1902 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[1].value.list);
                    }
#line 4587 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 389:
#line 1907 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 4595 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 390:
#line 1911 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 4605 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 391:
#line 1918 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto ident = (yystack_[0].value.token);
                      driver.lex.declare(ident->string());
                      (yylhs.value.node) = driver.build.shadowarg(self, ident);
                    }
#line 4615 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 392:
#line 1924 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ArgumentConst, (yystack_[0].value.token));
                      YYERROR;
                    }
#line 4624 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 393:
#line 1929 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.extend_dynamic();
                    }
#line 4632 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 394:
#line 1933 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 4641 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 395:
#line 1938 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.replace_stack((yystack_[1].value.stack));
                      driver.lex.cmdarg.lexpop();

                      auto &delimited_block = (yystack_[0].value.delimited_block);
                      delimited_block->args = (yystack_[2].value.node);
                      (yylhs.value.delimited_block) = delimited_block;
                      driver.lex.unextend();
                    }
#line 4655 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 396:
#line 1949 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[2].value.list);
                      args->concat((yystack_[1].value.list));
                      (yylhs.value.node) = driver.build.args(self, (yystack_[3].value.token), args, (yystack_[0].value.token), true);
                      DIAGCHECK();
                    }
#line 4666 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 397:
#line 1956 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.args(self, nullptr, (yystack_[0].value.list), nullptr, true);
                      DIAGCHECK();
                    }
#line 4675 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 398:
#line 1962 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.delimited_block) = driver.alloc.delimited_block((yystack_[2].value.token), nullptr, (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 4683 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 399:
#line 1966 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.delimited_block) = driver.alloc.delimited_block((yystack_[2].value.token), nullptr, (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 4691 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 400:
#line 1971 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited_block = (yystack_[1].value.delimited_block);
                      delimited_block->begin = (yystack_[2].value.token);
                      delimited_block->end = (yystack_[0].value.token);
                      (yylhs.value.delimited_block) = delimited_block;
                    }
#line 4702 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 401:
#line 1979 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited_block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, (yystack_[1].value.node),
                          delimited_block->begin,
                          delimited_block->args,
                          delimited_block->body,
                          delimited_block->end
                        );
                      DIAGCHECK();
                    }
#line 4717 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 402:
#line 1990 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.token),
                                  delimited->begin,
                                  delimited->inner,
                                  delimited->end);
                    }
#line 4729 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 403:
#line 1998 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[1].value.delimited_list);
                      auto methodCall = driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token),
                          delimited->begin,
                          delimited->inner,
                          delimited->end);
                      auto &block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, methodCall,
                          block->begin,
                          block->args,
                          block->body,
                          block->end);
                      DIAGCHECK();
                    }
#line 4748 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 404:
#line 2013 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto methodCall = driver.build.call_method(self, (yystack_[4].value.node), (yystack_[3].value.token), (yystack_[2].value.token), nullptr, (yystack_[1].value.list), nullptr);
                      auto &block = (yystack_[0].value.delimited_block);
                      (yylhs.value.node) = driver.build.block(self, methodCall, block->begin, block->args, block->body, block->end);
                      DIAGCHECK();
                    }
#line 4759 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 405:
#line 2021 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.call_method(self, nullptr, nullptr, (yystack_[1].value.token),
                        delimited->begin,
                        delimited->inner,
                        delimited->end);
                    }
#line 4771 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 406:
#line 2029 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.token),
                          delimited->begin,
                          delimited->inner,
                          delimited->end);
                    }
#line 4783 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 407:
#line 2037 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.token),
                          delimited->begin,
                          delimited->inner,
                          delimited->end);
                    }
#line 4795 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 408:
#line 2045 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.token), nullptr, nullptr, nullptr);
                    }
#line 4803 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 409:
#line 2049 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[2].value.node), (yystack_[1].value.token), nullptr,
                          delimited->begin,
                          delimited->inner,
                          delimited->end);
                    }
#line 4815 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 410:
#line 2057 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.call_method(self, (yystack_[2].value.node), (yystack_[1].value.token), nullptr,
                          delimited->begin,
                          delimited->inner,
                          delimited->end);
                    }
#line 4827 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 411:
#line 2065 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &delimited = (yystack_[0].value.delimited_list);
                      (yylhs.value.node) = driver.build.keywordSuper(self, (yystack_[1].value.token),
                          delimited->begin,
                          delimited->inner,
                          delimited->end);
                    }
#line 4839 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 412:
#line 2073 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.keywordZsuper(self, (yystack_[0].value.token));
                    }
#line 4847 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 413:
#line 2077 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.index(self, (yystack_[3].value.node), (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 4855 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 414:
#line 2082 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &block = (yystack_[1].value.delimited_block);
                      block->begin = (yystack_[2].value.token);
                      block->end = (yystack_[0].value.token);
                      (yylhs.value.delimited_block) = block;
                    }
#line 4866 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 415:
#line 2089 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &block = (yystack_[1].value.delimited_block);
                      block->begin = (yystack_[2].value.token);
                      block->end = (yystack_[0].value.token);
                      (yylhs.value.delimited_block) = block;
                    }
#line 4877 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 416:
#line 2096 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.extend_dynamic();
                    }
#line 4885 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 417:
#line 2099 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 4894 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 418:
#line 2104 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.delimited_block) = driver.alloc.delimited_block(nullptr, (yystack_[1].value.node), (yystack_[0].value.node), nullptr);

                      driver.lex.unextend();
                      driver.replace_stack((yystack_[2].value.stack));
                      driver.lex.cmdarg.pop();
                    }
#line 4906 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 419:
#line 2112 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.extend_dynamic();
                    }
#line 4914 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 420:
#line 2115 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.stack) = driver.copy_stack();
                      driver.lex.cmdarg.clear();
                    }
#line 4923 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 421:
#line 2120 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.delimited_block) = driver.alloc.delimited_block(nullptr, (yystack_[1].value.node), (yystack_[0].value.node), nullptr);
                      driver.lex.unextend();

                      driver.replace_stack((yystack_[2].value.stack));
                    }
#line 4934 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 422:
#line 2128 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &cases = (yystack_[0].value.case_body);
                      cases->whens.push_front(driver.build.when(self, (yystack_[4].value.token), (yystack_[3].value.list), (yystack_[2].value.token), (yystack_[1].value.node)));
                      (yylhs.value.case_body) = cases;
                    }
#line 4944 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 423:
#line 2135 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.case_body) = driver.alloc.case_body((yystack_[0].value.with_token));
                    }
#line 4952 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 424:
#line 2138 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.case_body) = (yystack_[0].value.case_body); }
#line 4958 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 425:
#line 2141 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &excVar = (yystack_[3].value.with_token);
                      auto &excList_ = (yystack_[4].value.list);
                      auto excList = excList_
                        ? driver.build.array(self, nullptr, excList_, nullptr)
                        : nullptr;
                      auto &rescues = (yystack_[0].value.list);

                      rescues->push_front(driver.build.rescue_body(self, (yystack_[5].value.token),
                          excList,
			  excVar ? excVar->tok : nullptr,
			  excVar ? excVar->nod : nullptr,
			  (yystack_[2].value.token), (yystack_[1].value.node)));

                      (yylhs.value.list) = rescues;
                    }
#line 4979 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 426:
#line 2158 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 4987 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 427:
#line 2163 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 4995 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 428:
#line 2166 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 5001 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 429:
#line 2167 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[0].value.list); }
#line 5007 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 430:
#line 2170 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = driver.alloc.node_with_token((yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 5015 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 431:
#line 2174 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = nullptr;
                    }
#line 5023 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 432:
#line 2179 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = driver.alloc.node_with_token((yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 5031 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 433:
#line 2183 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = nullptr;
                    }
#line 5039 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 434:
#line 2187 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 5045 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 435:
#line 2188 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 5051 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 436:
#line 2189 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 5057 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 437:
#line 2192 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.string_compose(self, nullptr, (yystack_[0].value.list), nullptr);
                    }
#line 5065 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 438:
#line 2197 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 5073 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 439:
#line 2201 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 5083 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 440:
#line 2208 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto str = driver.build.string_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                      (yylhs.value.node) = driver.build.dedentString(self, str, driver.lex.dedentLevel().value_or(0));
                    }
#line 5092 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 441:
#line 2213 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto str = driver.build.string(self, (yystack_[0].value.token));
                      (yylhs.value.node) = driver.build.dedentString(self, str, driver.lex.dedentLevel().value_or(0));
                    }
#line 5101 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 442:
#line 2218 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.character(self, (yystack_[0].value.token));
                    }
#line 5109 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 443:
#line 2223 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto xstr = driver.build.xstring_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                      (yylhs.value.node) = driver.build.dedentString(self, xstr, driver.lex.dedentLevel().value_or(0));
                    }
#line 5118 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 444:
#line 2229 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto opts = driver.build.regexp_options(self, (yystack_[0].value.token));
                      (yylhs.value.node) = driver.build.regexp_compose(self, (yystack_[3].value.token), (yystack_[2].value.list), (yystack_[1].value.token), opts);
                      DIAGCHECK();
                    }
#line 5128 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 445:
#line 2236 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.words_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 5136 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 446:
#line 2241 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5144 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 447:
#line 2245 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back(driver.build.word(self, (yystack_[1].value.list)));
                      (yylhs.value.list) = list;
                    }
#line 5154 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 448:
#line 2252 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 5162 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 449:
#line 2256 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 5172 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 450:
#line 2263 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.symbols_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 5180 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 451:
#line 2268 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5188 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 452:
#line 2272 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back(driver.build.word(self, (yystack_[1].value.list)));
                      (yylhs.value.list) = list;
                    }
#line 5198 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 453:
#line 2279 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.words_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 5206 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 454:
#line 2284 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.symbols_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 5214 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 455:
#line 2289 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5222 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 456:
#line 2293 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back(driver.build.string_internal(self, (yystack_[1].value.token)));
                      (yylhs.value.list) = list;
                    }
#line 5232 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 457:
#line 2300 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5240 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 458:
#line 2304 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back(driver.build.symbol_internal(self, (yystack_[1].value.token)));
                      (yylhs.value.list) = list;
                    }
#line 5250 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 459:
#line 2311 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5258 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 460:
#line 2315 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 5268 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 461:
#line 2322 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5276 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 462:
#line 2326 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 5286 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 463:
#line 2333 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5294 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 464:
#line 2337 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[1].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 5304 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 465:
#line 2344 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.string_internal(self, (yystack_[0].value.token));
                    }
#line 5312 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 466:
#line 2348 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = (yystack_[0].value.node);
                    }
#line 5320 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 467:
#line 2352 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.push(false);
                      driver.lex.cmdarg.push(false);
                    }
#line 5329 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 468:
#line 2357 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.cond.lexpop();
                      driver.lex.cmdarg.lexpop();
                      (yylhs.value.node) = driver.build.begin(self, (yystack_[3].value.token), (yystack_[1].value.node), (yystack_[0].value.token));
                    }
#line 5339 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 469:
#line 2364 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.gvar(self, (yystack_[0].value.token));
                    }
#line 5347 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 470:
#line 2368 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.ivar(self, (yystack_[0].value.token));
                    }
#line 5355 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 471:
#line 2372 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.cvar(self, (yystack_[0].value.token));
                    }
#line 5363 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 472:
#line 2375 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 5369 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 473:
#line 2379 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.symbol(self, (yystack_[0].value.token));
                    }
#line 5378 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 474:
#line 2385 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.symbol_compose(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 5387 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 475:
#line 2391 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = (yystack_[0].value.node);
                    }
#line 5395 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 476:
#line 2395 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.unary_op(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 5403 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 477:
#line 2400 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.integer(self, (yystack_[0].value.token));
                    }
#line 5412 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 478:
#line 2405 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.float_(self, (yystack_[0].value.token));
                    }
#line 5421 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 479:
#line 2410 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.rational(self, (yystack_[0].value.token));
                    }
#line 5430 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 480:
#line 2415 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.complex(self, (yystack_[0].value.token));
                    }
#line 5439 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 481:
#line 2420 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.rational_complex(self, (yystack_[0].value.token));
                    }
#line 5448 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 482:
#line 2425 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_endarg();
                      (yylhs.value.node) = driver.build.floatComplex(self, (yystack_[0].value.token));
                    }
#line 5457 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 483:
#line 2431 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.ident(self, (yystack_[0].value.token));
                    }
#line 5465 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 484:
#line 2435 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.ivar(self, (yystack_[0].value.token));
                    }
#line 5473 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 485:
#line 2439 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.gvar(self, (yystack_[0].value.token));
                    }
#line 5481 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 486:
#line 2443 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.const_(self, (yystack_[0].value.token));
                    }
#line 5489 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 487:
#line 2447 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.cvar(self, (yystack_[0].value.token));
                    }
#line 5497 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 488:
#line 2452 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.nil(self, (yystack_[0].value.token));
                    }
#line 5505 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 489:
#line 2456 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.self_(self, (yystack_[0].value.token));
                    }
#line 5513 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 490:
#line 2460 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.true_(self, (yystack_[0].value.token));
                    }
#line 5521 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 491:
#line 2464 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.false_(self, (yystack_[0].value.token));
                    }
#line 5529 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 492:
#line 2468 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.fileLiteral(self, (yystack_[0].value.token));
                    }
#line 5537 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 493:
#line 2472 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.line_literal(self, (yystack_[0].value.token));
                    }
#line 5545 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 494:
#line 2476 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.encodingLiteral(self, (yystack_[0].value.token));
                    }
#line 5553 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 495:
#line 2481 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.accessible(self, (yystack_[0].value.node));
                    }
#line 5561 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 496:
#line 2485 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.accessible(self, (yystack_[0].value.node));
                    }
#line 5569 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 497:
#line 2490 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 5578 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 498:
#line 2495 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.assignable(self, (yystack_[0].value.node));
                      DIAGCHECK();
                    }
#line 5587 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 499:
#line 2501 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.nth_ref(self, (yystack_[0].value.token));
                    }
#line 5595 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 500:
#line 2505 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.backRef(self, (yystack_[0].value.token));
                    }
#line 5603 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 501:
#line 2510 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_value();
                    }
#line 5611 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 502:
#line 2514 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = driver.alloc.node_with_token((yystack_[3].value.token), (yystack_[1].value.node));
                    }
#line 5619 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 503:
#line 2518 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.with_token) = nullptr;
                    }
#line 5627 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 504:
#line 2523 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.lex.set_state_expr_value();
                      (yylhs.value.node) = driver.build.args(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token), true);
                    }
#line 5636 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 505:
#line 2528 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.args(self, nullptr, (yystack_[1].value.list), nullptr, true);
                      DIAGCHECK();
                    }
#line 5645 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 506:
#line 2534 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5656 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 507:
#line 2541 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5666 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 508:
#line 2547 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5676 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 509:
#line 2553 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 5684 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 510:
#line 2558 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 5692 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 511:
#line 2562 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5700 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 512:
#line 2567 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5712 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 513:
#line 2575 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[7].value.list);
                      args->concat((yystack_[5].value.list));
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5725 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 514:
#line 2584 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5736 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 515:
#line 2591 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5748 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 516:
#line 2599 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5759 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 517:
#line 2606 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5771 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 518:
#line 2614 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5781 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 519:
#line 2620 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5792 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 520:
#line 2627 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[5].value.list);
                      args->concat((yystack_[3].value.list));
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5804 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 521:
#line 2635 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {

                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5815 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 522:
#line 2642 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5826 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 523:
#line 2649 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[1].value.list);
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5836 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 524:
#line 2655 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &args = (yystack_[3].value.list);
                      args->concat((yystack_[1].value.list));
                      args->concat((yystack_[0].value.list));
                      (yylhs.value.list) = args;
                    }
#line 5847 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 525:
#line 2662 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 5855 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 526:
#line 2666 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 5863 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 527:
#line 2671 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ArgumentIvar, (yystack_[0].value.token));
                      YYERROR;
                    }
#line 5872 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 528:
#line 2676 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ArgumentGvar, (yystack_[0].value.token));
                      YYERROR;
                    }
#line 5881 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 529:
#line 2681 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ArgumentCvar, (yystack_[0].value.token));
                      YYERROR;
                    }
#line 5890 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 530:
#line 2686 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 5896 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 531:
#line 2688 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto ident = (yystack_[0].value.token);
                      driver.lex.declare(ident->string());
                      (yylhs.value.token) = ident;
                    }
#line 5906 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 532:
#line 2695 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.token) = (yystack_[0].value.token);
                    }
#line 5914 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 533:
#line 2700 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.arg(self, (yystack_[0].value.token));
                    }
#line 5922 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 534:
#line 2704 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.multi_lhs(self, (yystack_[2].value.token), (yystack_[1].value.list), (yystack_[0].value.token));
                    }
#line 5930 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 535:
#line 2709 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 5938 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 536:
#line 2713 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 5948 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 537:
#line 2720 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto label = (yystack_[0].value.token);
                      if (!driver.valid_kwarg_name(label)) {
                        driver.diagnostics.emplace_back(dlevel::ERROR, dclass::ArgumentConst, label);
                        YYERROR;
                      }
                      driver.lex.declare(label->string());
                      (yylhs.value.token) = label;
                    }
#line 5962 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 538:
#line 2731 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.kwoptarg(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 5970 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 539:
#line 2735 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.kwarg(self, (yystack_[0].value.token));
                    }
#line 5978 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 540:
#line 2740 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.kwoptarg(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 5986 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 541:
#line 2744 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.kwarg(self, (yystack_[0].value.token));
                    }
#line 5994 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 542:
#line 2749 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 6002 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 543:
#line 2753 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 6012 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 544:
#line 2760 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 6020 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 545:
#line 2764 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 6030 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 546:
#line 2770 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6036 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 547:
#line 2770 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6042 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 548:
#line 2773 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto ident = (yystack_[0].value.token);

                      driver.lex.declare(ident->string());

                      auto kwrestarg = driver.build.kwrestarg(self, (yystack_[1].value.token), ident);

                      (yylhs.value.list) = driver.alloc.node_list(kwrestarg);
                    }
#line 6056 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 549:
#line 2783 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto kwrestarg = driver.build.kwrestarg(self, (yystack_[0].value.token), nullptr);

                      (yylhs.value.list) = driver.alloc.node_list(kwrestarg);
                    }
#line 6066 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 550:
#line 2790 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.optarg(self, (yystack_[2].value.token), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 6074 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 551:
#line 2795 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.optarg(self, (yystack_[2].value.token), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 6082 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 552:
#line 2800 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 6090 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 553:
#line 2804 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 6100 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 554:
#line 2811 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 6108 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 555:
#line 2815 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 6118 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 556:
#line 2821 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6124 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 557:
#line 2821 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6130 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 558:
#line 2824 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto ident = (yystack_[0].value.token);

                      driver.lex.declare(ident->string());

                      auto restarg = driver.build.restarg(self, (yystack_[1].value.token), ident);

                      (yylhs.value.list) = driver.alloc.node_list(restarg);
                    }
#line 6144 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 559:
#line 2834 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto restarg = driver.build.restarg(self, (yystack_[0].value.token), nullptr);

                      (yylhs.value.list) = driver.alloc.node_list(restarg);
                    }
#line 6154 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 560:
#line 2840 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6160 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 561:
#line 2840 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6166 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 562:
#line 2843 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto ident = (yystack_[0].value.token);

                      driver.lex.declare(ident->string());

                      auto blockarg = driver.build.blockarg(self, (yystack_[1].value.token), ident);

                      (yylhs.value.list) = driver.alloc.node_list(blockarg);
                    }
#line 6180 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 563:
#line 2853 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto blockarg = driver.build.blockarg(self, (yystack_[0].value.token), nullptr);

                      (yylhs.value.list) = driver.alloc.node_list(blockarg);
                    }
#line 6190 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 564:
#line 2860 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = (yystack_[0].value.list);
                    }
#line 6198 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 565:
#line 2864 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 6206 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 566:
#line 2868 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.node) = (yystack_[0].value.node); }
#line 6212 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 567:
#line 2870 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = (yystack_[1].value.node);
                    }
#line 6220 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 568:
#line 2875 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list();
                    }
#line 6228 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 569:
#line 2878 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.list) = (yystack_[1].value.list); }
#line 6234 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 570:
#line 2881 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.list) = driver.alloc.node_list((yystack_[0].value.node));
                    }
#line 6242 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 571:
#line 2885 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      auto &list = (yystack_[2].value.list);
                      list->emplace_back((yystack_[0].value.node));
                      (yylhs.value.list) = list;
                    }
#line 6252 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 572:
#line 2892 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.pair(self, (yystack_[2].value.node), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 6260 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 573:
#line 2896 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.pair_keyword(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 6268 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 574:
#line 2900 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.pair_quoted(self, (yystack_[3].value.token), (yystack_[2].value.list), (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 6276 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 575:
#line 2904 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.node) = driver.build.kwsplat(self, (yystack_[1].value.token), (yystack_[0].value.node));
                    }
#line 6284 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 576:
#line 2908 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6290 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 577:
#line 2908 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6296 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 578:
#line 2908 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6302 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 579:
#line 2909 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6308 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 580:
#line 2909 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6314 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 581:
#line 2909 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6320 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 582:
#line 2909 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6326 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 583:
#line 2910 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6332 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 584:
#line 2910 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6338 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 585:
#line 2910 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6344 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 586:
#line 2911 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6350 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 587:
#line 2911 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6356 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 588:
#line 2913 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      // XXX what is this???
                      // $$ = put(p, [:dot, $1[1]]
                      (yylhs.value.token) = (yystack_[0].value.token);
                    }
#line 6366 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 589:
#line 2919 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      // XXX what is this???
                      // $$ = [:anddot, $1[1]]
                      (yylhs.value.token) = (yystack_[0].value.token);
                    }
#line 6376 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 594:
#line 2927 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.token) = (yystack_[0].value.token);
                    }
#line 6384 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 595:
#line 2931 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                      (yylhs.value.token) = (yystack_[0].value.token);
                    }
#line 6392 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 599:
#line 2937 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                    yyerrok;
                  }
#line 6400 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 600:
#line 2940 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    { (yylhs.value.token) = (yystack_[0].value.token); }
#line 6406 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 603:
#line 2946 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                    (yylhs.value.node) = nullptr;
                  }
#line 6414 "typedruby.tab.cpp" // lalr1.cc:919
    break;

  case 604:
#line 2951 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:919
    {
                    (yylhs.value.list) = nullptr;
                  }
#line 6422 "typedruby.tab.cpp" // lalr1.cc:919
    break;


#line 6426 "typedruby.tab.cpp" // lalr1.cc:919
            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -833;

  const short parser::yytable_ninf_ = -586;

  const short
  parser::yypact_[] =
  {
    2606,  7024,  9688, 10372, 11170, 11041,  -833,  9292,  9292,  8092,
    -833,  -833,  9820,  7288,  7288,  -833,  -833,  7288,  6049,  5633,
    -833,  -833,  -833,  -833,    17, 10912,   -12,    74,   112,  -833,
    -833,  -833,  4933,  5771,  -833,  -833,  5073,  -833,  -833,  -833,
    -833,  -833,  9424,  9424,   315,   106,  3920,    42,  7696,  8236,
    9952,  9424,  9556,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,   156,
    -833,   348,  -833,  1314,  -833,   451,  -833,  -833,   299,   151,
     166,  -833,   167, 10096,  -833,   175,  9953,   289,   611,   430,
      72,  -833,  -833,   437,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,    47,   513,  -833,   178,   923,
    -833,  -833,  -833,  -833,  -833,   231,   259,   269,   -12,   746,
     826,   315,  9292,   446,  4066,   299,  -833,   243,  -833,   779,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,   440,   622,   648,   749,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,   750,   793,   803,   823,  -833,   876,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  9292,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,   430,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,   227,  -833,  -833,  2898,
     323,   451,    86,   309,   847,    85,    93,   305,   275,    86,
    -833,  -833,   348,   370,  -833,   267,  9292,  9292,   342,  -833,
    -833,   897,   412,    81,    89,   128,  9424,  9424,  9424,  9424,
    9424,  -833,  -833,  9953,   357,  -833,  -833,   324,   368,  -833,
    -833,  -833,  7156,  -833,  7288,  7288,  -833,  -833,  8368,  -833,
    9292,   100,  -833,  8500,  4212,  4358,  -833,   901,   467,   475,
     952,  7432,   413,  3920,   438,   348,  -833,  1759,   -12,   481,
    7432,   -12,   480,    67,   280,  -833,   357,   442,   280,   503,
   10504,   454,   918,   922,   933,   969,  -833,  -833,  -833,   397,
     423,   517,   653,   661,    56,   742,    65,  -833,  1374,  -833,
    -833,  6736,  9292,  9292,  9292,  9292,  7432,  9292,  9292,  -833,
    -833,  -833,   492,  -833,  -833,  -833,  8632,  -833,  3920, 10228,
     456,  8632,  9424,  9424,  9424,  9424,  9424,  9424,  9424,  9424,
    9424,  9424,  9424,  9424,  9424,  9424,  9424,  9424,  9424,  9424,
    9424,  9424,  9424,  9424,  9424,  9424,  9424,  9424,  -833, 11346,
    7288,  -833, 11408,  -833, 12276,  -833,  -833,  -833,  9556,  9556,
     509,  -833,   279,  -833,  1040,  -833,  -833,  -833, 11470,  7288,
   11532,  2898,   126,  1427,  -833,  -833,   594,   602,   360,  -833,
    3190,   595,  9424, 11594,  7288, 11656,  9424,  9424,  3628,   370,
    8764,   605,  -833,    48,    48,   144, 11718,  7288, 11780,  -833,
    -833,  -833,  -833,  -833,   338,  9424,  7564,  -833,  7828,  -833,
     -12,   527,  -833,  -833,   -12,  -833,   494,   511,   126,  -833,
    -833,  -833,  -833,  -833, 11041,  9292,  9953,   537,   544, 11594,
   11656,  9424,  9424,  1314,  4212,   -12,  -833,  -833,  6880,  -833,
     519,  1314,   585,  -833,  -833,  7960,  -833,  8236,  -833,  -833,
    -833,  1040,  -833,   546, 10504, 11842,  7288, 11904,  -833,  -833,
    1102,  -833,  -833,  -833,  -833,  -833,   566,  -833,  -833,   105,
    -833,   555,  -833,  -833,   313,   558,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  1247,  1604,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,   623,  -833,   574,  9424,  -833,
     586,   686,   604,  -833,   606,   692,   610,   699,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,   748,  -833,   649,
    -833,  -833,  -833,   758,  9424,  -833,   635,   638,  -833,  -833,
     -12, 10504,   639,  -833,  -833,  -833,   732,   706,  2165,  -833,
    -833,  -833,  1054,   398,   467,  1877,  1877,  1877,  1877,  1802,
    1802,  2439,  2084,  1877,  1877,  6414,  6414,  1354,  1354,   467,
    1430,   467,   467,  1186,  1186,  1802,  1802,  1265,  1265,  9821,
    6187,  5213,  6463,  5353,  -833,   259,  -833,   -12,   961,  -833,
     975,  -833,  -833,  5911,  -833,  -833,  2382,  -833,  9689,  -833,
    -833,  -833,  -833,  9292,  2898,   981,   820,  -833,   259,   -12,
     259,   772,  -833,  1604,  2898,   348, 11284, 11041,  -833,  8896,
     769,   463,  -833,  4793,  5493,   -12,   460,   500,   769,   780,
      63,  -833,  -833,  -833,  -833,  -833,   116,   121,   -12,   146,
     162,  9292,  9424,  -833,  9424,   357,  -833,   368,  -833,  -833,
    -833,  -833,  7564,  7828,  -833,  -833,   126,  -833,  -833,   467,
    -833,   679,   200,  -833,  1314,   -12,  -833,   280, 10504,   546,
     531,   820,   -12,   383,   600,  4504,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  1247,   665,  -833,
     660,   -12,  -833,   -12,    75,  9424,  1604,  -833,  -833,  1126,
    -833,  -833,   461,  -833,  1604,  -833,  -833,  1192,  -833,  -833,
    -833,   262,  -833,   262,   681,  -833,   666,  9028,  -833,   546,
   10504,  7432,  9556,  9424, 11966,  7288, 12028,   668,  9556,  9556,
    -833,   492,   708,   987,  9556,  9556,  -833,  -833,   492,    72,
     151,  -833,   348,   796,  -833,  -833,   -12,   801,  -833,  -833,
    -833,   635,  -833,   725,  -833,  3336,   809,  -833,  9292,   813,
    -833,  9424,  9424,   530,  9424,  9424,   814,  -833,  9160,  3482,
    4650,  4650,   184,    48,  -833,  -833,  -833,   691,  -833,  -833,
    -833,  -833,  -833,   608,   698,   -12,   873,   704,  1284,  -833,
     762,   697,  4650,  4358,  -833,  -833,  -833,  -833,   720,   722,
    -833,   604,  -833,   736,  -833,   740,  -833,   736,  -833,  1216,
    2898,  -833,  3044,  -833,  9424,   743,   546,  -833,  9953,  6325,
    6601,   -12,   539,   627,  9424,  -833,  -833,  -833,  -833,  -833,
    -833,  9556,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  2898,
    -833,  -833,  -833,  -833,  1427, 10636,    86,  -833,  3774,  -833,
      86,  -833,  9424,  -833,  -833,   306,   870,   871,  -833,  7828,
    -833,  -833,   768,   873,   761,  -833,  -833,  1076,   894,   792,
    1604,  -833,  1192,  -833,  -833,  1192,  -833,  1192,  -833,  -833,
    -833,   -12,   797,   811,   781, 10768,  -833,   784,   604,  -833,
     785,   789,  -833,  -833,  -833,   795,   654,  9953,  -833,  -833,
     904,  2898,   878,  -833,  1099,    90,    96,    98,  2752,  -833,
    3190,  -833,  -833,  -833,  -833,  -833,  4650,   873,   768,   873,
     800,  -833,   336,  -833,  -833,  -833,  -833,   736,   804,   736,
     736,   821,  -833, 10768,  1604,  -833,   889,  1101,  1126,  -833,
    -833,  1604,  -833,  1192,  -833,  -833,   939,   102, 12090,  7288,
   12152,   602,   463,   941,   768,   873,  1076,  -833,  -833,  1192,
    -833,  -833,  -833,  -833,  1101,  -833,   817,   818,  -833, 12214,
    -833,   604,   822,  -833,   830,   822,  -833,    59,    76,   -12,
     120,   159,  -833,  -833,  -833,   768,  -833,   736,  1604,  -833,
    1192,  -833,   877,   887,  -833,  1192,  -833,  1192,  -833,  -833,
     254,  -833,   822,   834,   822,   822,  -833,  1192,  -833,  -833,
    -833,   822,  -833
  };

  const unsigned short
  parser::yydefact_[] =
  {
       0,     0,     0,     0,     0,     0,   284,     0,     0,   590,
     309,   312,     0,   332,   333,   334,   335,   296,   259,   259,
     489,   488,   490,   491,   592,     0,   592,     0,     0,   493,
     492,   494,   576,   578,   485,   484,   577,   487,   499,   500,
     477,   478,     0,     0,     0,     0,     0,   286,   604,   568,
      83,     0,     0,   461,   459,   461,   463,   446,   455,   451,
     457,   441,   473,   393,   442,   479,   480,   481,   482,     0,
       2,   590,     5,     8,    31,    35,    47,    55,   259,    54,
       0,    71,     0,    75,    85,     0,    52,   238,     0,    56,
     304,   273,   274,   437,   438,   275,   276,   277,   279,   278,
     280,   435,   436,   434,   475,   495,   496,   281,     0,   282,
      59,     7,   332,   333,   296,   299,   412,     0,   592,   109,
     110,     0,     0,     0,     0,     0,   112,   503,   336,     0,
     495,   496,   282,   325,   166,   177,   167,   190,   163,   183,
     173,   172,   193,   194,   188,   171,   170,   165,   191,   195,
     196,   175,   164,   178,   182,   184,   176,   169,   185,   192,
     187,   186,   179,   189,   174,   162,   181,   180,   161,   168,
     159,   160,   156,   157,   158,   114,   116,   115,   150,   151,
     147,   129,   130,   131,   138,   135,   137,   132,   133,   152,
     153,   139,   140,     0,   144,   143,   128,   149,   146,   145,
     154,   141,   142,   136,   134,   126,   148,   127,   155,   327,
     117,   118,   566,     0,   186,   179,   189,   174,   156,   157,
     158,   114,   115,   119,   121,   123,    24,   120,   122,     0,
       0,    53,     0,     0,     0,   495,   496,     0,   282,     0,
     600,   599,   590,     0,   601,   591,     0,     0,     0,   347,
     346,     0,     0,   495,   496,   282,     0,     0,     0,     0,
       0,   459,   254,   239,   264,    69,   258,   263,   263,   570,
      70,    68,   592,    67,     0,   249,   411,    66,   592,   593,
       0,     0,    19,     0,     0,     0,   215,     0,   216,   476,
     293,     0,     0,     0,     0,   590,    13,     0,   592,    73,
       0,   592,     0,   596,   596,   240,     0,     0,   596,     0,
       0,    81,     0,    91,    92,    99,   231,    51,   230,     0,
       0,     0,     0,     0,     0,     0,     0,   306,   526,     1,
       3,   591,     0,     0,     0,     0,     0,     0,     0,   419,
     416,   405,    60,   303,   419,   401,     0,    87,     0,    79,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   588,     0,
     249,   589,     0,   587,     0,   586,   305,   439,     0,     0,
       0,   476,     0,   109,   110,   111,   501,   320,     0,   249,
       0,     0,   592,   526,   329,   124,     0,   426,   293,   338,
       0,   337,     0,     0,   249,     0,     0,     0,     0,     0,
       0,     0,   602,     0,     0,   293,     0,   249,     0,   317,
     573,   265,   261,   575,     0,     0,     0,   255,     0,   256,
     592,     0,   298,   260,   592,   250,   263,   263,   592,   302,
      50,    21,    23,    22,     0,     0,   236,     0,     0,     0,
       0,     0,     0,    15,     0,   592,   291,    11,   591,    16,
      72,   287,     0,   294,   597,   598,   241,   598,   243,   295,
     569,    98,    89,    84,     0,     0,   249,     0,   465,   467,
       0,   474,   462,   440,   460,   443,     0,   464,   445,     0,
     448,     0,   453,   450,     0,     0,   454,   531,   528,   527,
     537,   529,   546,     0,   526,   557,   556,   561,   560,   547,
     394,   525,   397,   530,   532,   533,   535,   511,   539,   544,
     565,   549,   565,   554,   511,   559,   511,   563,   509,     6,
      25,    26,    27,    28,    29,    48,    49,     0,   420,     0,
     417,   416,    61,     0,     0,    32,   269,     0,    34,   268,
     592,     0,    77,    88,    46,    36,    44,     0,   244,   264,
     197,    33,     0,   282,   213,   220,   225,   226,   227,   222,
     224,   234,   235,   228,   229,   206,   207,   232,   233,   210,
     219,   212,   211,   208,   209,   223,   221,   217,   218,   592,
     579,   581,   580,   582,   410,   259,   408,   592,   579,   581,
     580,   582,   409,   259,   579,   580,   259,    37,   244,   198,
      43,   205,   322,     0,     0,   109,   110,   113,     0,   592,
     247,     0,   567,   526,     0,     0,     0,     0,   285,   604,
     603,   603,   339,   579,   580,   592,   579,   580,   603,     0,
       0,   316,   341,   310,   340,   313,   583,   292,   592,   579,
     580,     0,     0,   572,     0,   266,   262,   263,   571,   297,
     594,   246,   251,   253,   301,    20,   592,     9,    30,   214,
     204,     0,    74,    14,    17,   592,   290,   596,     0,    82,
     583,    97,   592,   579,   580,     0,   469,   470,   471,   466,
     472,   444,   447,   449,   456,   452,   458,     0,   359,   350,
     352,   592,   348,   592,     0,     0,     0,   518,   538,     0,
     507,   548,     0,   508,     0,   521,   558,     0,   523,   562,
     415,   382,   414,   382,     0,   400,   272,     0,    86,    80,
       0,     0,     0,     0,     0,   249,     0,     0,     0,     0,
     407,    64,     0,   413,     0,     0,   248,   406,    62,   402,
      57,   323,     0,     0,   413,   326,   592,     0,   505,   330,
     125,   427,   428,   431,   429,     0,   433,   344,     0,     0,
     342,     0,     0,   413,     0,     0,     0,   315,     0,     0,
       0,     0,   413,     0,   574,   267,   257,   263,   300,    18,
     288,   242,    90,   413,     0,   592,     0,   357,     0,   534,
       0,   387,     0,     0,   395,   550,   510,   536,   511,   511,
     545,   565,   564,   511,   555,   511,   533,   511,   385,   592,
       0,   383,     0,    58,     0,   270,    78,    45,   245,   579,
     580,   592,   579,   580,     0,    42,   202,    41,   203,    65,
     595,     0,    39,   200,    40,   201,    63,   403,   404,     0,
     502,   321,   504,   328,   526,     0,     0,   345,     0,    10,
       0,   307,     0,   308,   266,   603,     0,     0,   318,   252,
     468,   349,   360,     0,   355,   351,   396,     0,     0,     0,
       0,   514,     0,   516,   506,     0,   522,     0,   519,   524,
     381,   592,     0,   533,   366,   541,   542,   565,   565,   552,
     366,   366,   364,   421,   418,   271,   413,   237,    38,   199,
       0,     0,     0,   430,     0,   495,   496,   282,     0,   432,
       0,   423,   424,   422,   311,   314,     0,     0,   358,     0,
     353,   391,   592,   389,   392,   399,   398,   511,   511,   511,
     511,     0,   384,     0,   372,   374,     0,   540,     0,   362,
     363,     0,   377,     0,   379,   324,     0,   293,     0,   249,
       0,   426,   603,     0,   356,     0,     0,   388,   515,     0,
     512,   517,   520,   386,   551,   365,   366,   366,   293,     0,
     543,   565,   366,   553,   366,   366,   331,   583,   292,   592,
     579,   580,   425,   343,   319,   354,   390,   511,     0,   369,
       0,   371,   583,   292,   361,     0,   378,     0,   375,   380,
     413,   513,   366,   366,   366,   366,   370,     0,   367,   373,
     376,   366,   368
  };

  const short
  parser::yypgoto_[] =
  {
    -833,  -833,  -245,  -833,    34,  -339,    18,  -833,   514,    36,
    -833,  -211,  -184,   837,    -3,   -18,  -833,  -606,   261,    15,
     974,  -180,    21,   -64,  -833,  -406,     0,  1542,   -83,   991,
      -1,  -833,   -11,  -833,  -833,    19,  -833,   849,   909,  -833,
    -168,    23,   384,  -283,   108,    69,  -833,  -368,  -250,    79,
    -833,  -302,    45,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
    -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,  -833,
       8,  -209,  -417,    33,  -575,  -833,  -745,  -722,   292,   185,
     420,  -833,   285,  -833,  -686,  -833,    46,  -833,  -833,  -833,
    -833,  -833,   263,  -833,  -833,   -89,   470,  -833,  -833,   682,
    -833,  -833,  -388,  -833,    54,  -833,  -833,  -833,  -833,  -833,
    -833,   945,  -833,  -833,  -833,  -833,   707,  -833,  -833,  -833,
    -833,  -833,  -833,   782,   998,  -833,  -240,  -833,  -833,    28,
      41,  -833,    68,  1277,  1388,  1042,  1746,  1068,  -833,  -833,
     192,  -285,    24,  -272,  -806,     4,  -324,  -689,   137,  -256,
     346,    99,  -833,  -833,  -833,    27,  -665,  -832,   107,   362,
    -833,  -440,  -833,   131,  -463,  -833,  -833,    38,  -367,  -833,
    -277,  -833,   866,   -76,     3,   -24,   -38,  -568,  -263,    29,
     -45,  -833,   443
  };

  const short
  parser::yydefgoto_[] =
  {
      -1,    69,    70,    71,    72,   406,   407,   295,   296,   297,
     454,    74,   565,    75,   232,    76,    77,   552,   125,    79,
      80,   298,    81,    82,    83,   483,    84,   233,   126,   127,
     223,   224,   225,   226,   637,   603,   211,    86,   264,   302,
     570,   604,   757,   444,   445,   273,   274,   266,   437,   446,
     558,   559,    87,   229,   300,   685,   301,   246,   790,   247,
     791,   661,   936,   624,   761,   859,   401,   403,   636,   864,
     287,   410,   653,   779,   780,   252,   709,   710,   711,   985,
     955,   901,   830,   831,   810,   942,   943,   327,   328,   714,
     520,   814,   345,    89,    90,   343,   549,   550,   733,   547,
     548,   731,   421,   933,   640,   773,   866,   869,    91,    92,
      93,    94,    95,    96,    97,   323,   499,    98,   325,    99,
     100,   324,   326,   320,   319,   322,   492,   695,   699,   101,
     102,   103,   104,   235,   236,   107,   237,   238,   397,   623,
     634,   816,   717,   635,   523,   524,   826,   526,   527,   528,
     529,   906,   907,   530,   531,   532,   533,   909,   910,   534,
     535,   536,   537,   538,   720,   213,   307,   447,   269,   110,
     628,   606,   384,   400,   243,   441,   442,   753,   476,   411,
     245,   777,   305
  };

  const short
  parser::yytable_[] =
  {
     280,   386,   283,   209,   525,   239,   242,   655,    88,    88,
     129,   129,   382,   385,   282,   234,   234,   234,   439,   350,
     251,   234,   234,   210,   210,   234,   331,   817,   262,   262,
     418,   649,   262,   227,   317,   111,    73,    73,   244,   457,
     395,   478,   276,   521,   210,   480,   228,   128,   128,   571,
     311,   268,   268,   227,    88,   268,   522,   128,   312,   824,
     234,   764,   631,   885,   294,   776,   228,   299,   666,   723,
     666,   668,  -104,   786,   330,   652,   409,   783,   689,   525,
     494,   944,   497,   500,   882,   500,   304,   308,   277,  -106,
     792,   312,   267,   267,   390,   128,   267,   607,   339,   409,
     244,   341,   605,  -100,   812,   613,  -100,   616,   278,  -101,
     668,  -108,   289,   465,  -101,  -107,   629,   501,   521,  -100,
     279,   265,   270,   630,   803,   271,   505,   303,   128,   993,
     234,   645,    88,  -103,  -289,  -497,   605,   385,   613,   276,
     564,  -104,   294,   902,   658,   849,  -106,   342,   341,   279,
    -579,   630,   856,  -108,   451,   739,   329,  -100,   415,   452,
     453,   938,   290,   337,   338,  -101,   488,  -580,   560,  -107,
     944,  -103,  -105,  -497,  -289,   428,   993,   564,   564,   344,
     240,  -498,   -91,   630,   502,   241,   340,  -105,   284,   391,
     525,  -104,   885,   506,   494,   240,  -104,   439,   788,   474,
     241,   234,   475,   692,   617,   620,   817,  -579,  -106,  -102,
     630,   460,  -580,  -106,   813,   951,   -91,   974,   240,   681,
     619,   621,  -100,   241,   -92,   824,   285,  -100,  -101,   521,
    -108,   489,   490,  -101,  -107,  -108,   487,    88,   346,  -107,
     449,   702,   713,   423,   424,   419,   482,   351,   619,   621,
     468,   -95,  -103,  1005,   234,   234,   -97,  -103,   279,   703,
     470,    78,    78,   -99,   703,   817,   388,  -102,    78,    78,
      78,   244,   -72,   916,    78,    78,   819,   472,    78,   -98,
     234,   -94,   234,   234,   825,   763,   234,   262,   234,   262,
     262,  -105,    88,    88,   680,   767,  -105,   -96,   467,    88,
     931,    88,   347,   458,   666,   666,   668,    78,    88,   525,
     268,   294,   268,    78,   299,   627,   337,   338,   312,   -93,
      73,   775,   272,   420,   244,   339,   817,   463,   555,   540,
     541,   542,   543,   566,   836,   -86,   471,   772,   828,    88,
     234,   234,   234,   234,    88,   234,   234,  -108,   521,   562,
     275,   267,   396,   267,   234,   128,    88,   312,   894,   572,
     278,   766,   405,   417,   632,   539,   294,    73,  -336,   299,
     566,   566,   544,   829,   488,  -336,   878,    40,    41,   408,
     440,   412,   443,    78,  -336,    78,  -102,   420,   234,   911,
     275,  -102,   525,   416,   128,   262,   572,   572,   425,   488,
     525,   611,   669,   611,   422,   612,   671,   234,   -94,    88,
     674,   240,   474,   340,   262,   477,   241,   796,    88,   611,
     482,   622,   234,   612,   801,   557,    88,   682,   641,   262,
     557,  1020,  -107,  -336,   611,   234,   648,   429,   612,   489,
     490,   789,   262,   675,   959,   960,   435,   611,   462,   705,
     948,   612,   654,   654,    78,   -94,    65,    66,   488,   436,
      67,    68,   841,   234,   489,   490,   493,   605,   279,   613,
    -108,   976,    88,   210,   667,   -94,    88,   778,   775,   611,
     240,   662,   227,   612,   488,   241,   389,   932,   337,   338,
      78,   913,   312,   914,   234,   228,   746,   482,   393,   650,
      73,   262,   394,   438,   684,   903,   611,    78,    78,   378,
     612,   666,   668,   687,   987,   -94,   383,   712,   -94,  -489,
     920,   994,   738,   489,   490,   491,  -489,   464,  1014,   128,
     466,   564,  -103,    78,   352,    78,    78,   564,   564,    78,
     525,    78,   461,   564,   564,    78,    78,   796,   784,   489,
     490,   493,    78,   -71,    78,    54,   -95,   479,   725,   481,
     728,    78,   517,   518,   845,   847,   525,    61,  1023,   312,
     852,   854,  -105,   905,   381,   747,   473,    64,   488,   521,
     846,   848,   966,   752,  -489,  -101,   853,   855,   785,   484,
     551,   563,    78,    78,    78,    78,    78,    78,    78,    78,
     455,  -498,  -102,   -95,   638,   752,   128,    78,   642,    78,
     639,  -103,    78,   846,   848,   651,   853,   855,   872,   670,
     762,   752,  -579,   -95,   802,   -96,   770,   754,   750,   672,
     903,   234,    88,   -93,   752,   769,   756,   903,   798,   756,
     564,    78,    88,   489,   490,   495,   673,   800,   -92,    78,
      78,   750,   677,   756,   -86,   210,   210,   928,   793,   678,
      78,   930,    78,   -95,   768,   227,   -95,   918,   752,   234,
     857,    78,   -96,   809,   751,    78,   482,   686,   228,    78,
     -93,   688,   758,   919,   903,   760,   999,   701,    78,   811,
     378,   704,   -96,   630,   706,   715,   312,   379,   905,  -105,
     -93,  -488,   905,    88,   919,   905,   380,   905,  -488,   716,
     797,   712,   807,   804,   488,   755,    78,   507,   557,   508,
     509,   719,   488,   511,   566,    78,  -102,  -490,   862,    78,
     566,   566,   -96,   128,  -490,   -96,   566,   566,   721,   722,
     -93,   724,   851,   -93,   726,   727,   821,    78,   312,    88,
     572,   729,   905,   234,   905,   381,   572,   572,   730,   905,
     262,   905,   572,   572,   732,   611,  -488,   881,   735,   612,
    -264,   905,  -576,   737,   740,   870,   741,   837,   742,   489,
     490,   496,   765,    88,   775,   128,   234,   489,   490,   498,
     787,   860,  -490,   867,   799,   808,   833,    88,    88,    88,
     806,  -265,   844,   488,   850,   811,   861,   875,   876,   877,
     712,   863,   712,   507,   865,   508,   509,   752,   868,   511,
      88,    88,   654,   871,   873,  -483,   879,   880,  -491,  -493,
     888,   889,  -483,   566,   887,  -491,  -493,  -576,    88,   883,
      88,  -483,   891,   893,   231,   231,   231,   896,   970,   898,
     822,   899,  -577,   822,   886,   890,   908,   892,   378,   572,
    -576,   823,   263,   263,   827,   398,   263,    88,   489,   490,
     503,   895,  -492,   924,   399,   897,    88,   811,  -266,  -492,
     934,   935,  -494,   953,    78,    78,   929,   712,   940,  -494,
    -483,   286,   288,  -491,  -493,    78,   939,   263,   263,  -292,
     316,   318,  -483,   937,   945,  -486,  -292,   946,   952,  -483,
     128,  -580,  -486,   957,   965,  -292,   954,  -577,   977,   958,
     961,  -486,    78,   381,   963,   507,   378,   508,   509,    88,
    -267,   511,   983,   413,   967,   975,    88,  -492,    88,   979,
    -577,   712,   414,   712,    88,   988,   971,  -494,   972,   996,
     128,  1004,  1008,  1010,   973,  -486,    78,  1015,   306,   392,
     912,   984,  -486,   707,  -292,  1017,   904,  -483,  -579,  1027,
    -486,   978,   980,   981,   982,   752,   378,   234,  -580,   712,
     378,   908,   683,   426,   262,   991,   249,   459,   908,   611,
     908,   381,   427,   612,   133,  -108,   414,   378,   128,   805,
     759,  -495,    78,    78,   485,  1003,    78,  -583,  -495,    78,
      78,   389,  -496,   486,   900,    78,    78,  -495,   832,  -496,
    -486,   734,  1006,   858,  -107,  1002,   553,   947,  -496,   949,
     402,  1021,   504,  -103,   950,   908,    78,   908,   387,    78,
     462,   381,   908,   434,   908,   381,   212,  -105,  -282,   754,
      78,    78,    78,   321,   908,  -282,   921,   990,   -99,  -102,
    -583,   986,   381,   755,  -282,   820,  -495,  -583,   109,   109,
     132,   132,  -579,    78,    78,   851,  -583,  -496,   818,   404,
     255,     0,   774,   231,   231,   912,     0,   -98,     0,   822,
       0,    78,   912,    78,   912,  -583,   -94,     0,   992,     0,
     995,     0,     0,     0,     0,   263,   263,   263,   263,   318,
     -96,     0,    78,  -282,   109,   448,  1007,   450,   315,  -293,
      78,   263,   -93,   263,   263,  -583,  -293,     0,   941,    78,
     508,   509,   456,   378,   511,  -293,     0,     0,     0,   912,
     744,   912,     0,     0,     0,  1022,   912,  1024,   912,   745,
       0,   315,     0,     0,  1025,     0,   696,   697,   912,     0,
     698,    38,    39,     0,  1031,   430,   431,   432,   433,   231,
     231,   231,   231,     0,   545,   546,     0,     0,   378,     0,
     378,     0,    78,   510,  -293,   968,     0,   989,     0,    78,
       0,    78,   109,   512,   969,   263,   399,    78,   381,     0,
     568,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   517,   518,   263,
      78,     0,   519,     0,     0,     0,     0,   618,   618,     0,
       0,     0,     0,   381,   507,   381,   508,   509,   263,   510,
     511,     0,     0,   352,     0,   556,     0,     0,     0,   512,
     569,   618,     0,   263,     0,   618,   618,     0,   507,   263,
     508,   509,     0,   510,   511,     0,   263,   105,   105,   130,
     130,   130,   513,   512,   263,   263,   367,   263,     0,   253,
     369,   370,   676,   517,   518,     0,     0,   109,   519,   507,
       0,   508,   509,     0,     0,   511,   513,     0,     0,     0,
     679,   618,     0,     0,     0,   515,   516,   517,   518,     0,
       0,     0,   519,   105,   263,     0,   263,   313,     0,   569,
     962,   964,   352,     0,     0,   263,   507,   707,   508,   509,
       0,     0,   511,     0,   663,   665,   708,   306,   279,   365,
     366,     0,   109,   109,   332,   333,   334,   335,   336,   109,
     313,   109,     0,     0,     0,   367,     0,   368,   109,   369,
     370,     0,   371,   372,   707,     0,     0,   263,   315,     0,
       0,     0,     0,   884,   665,     0,   306,     0,   106,   106,
     131,   131,   131,     0,     0,     0,     0,     0,     0,   109,
     254,   105,     0,   263,   109,     0,  1009,  1011,     0,     0,
       0,     0,  1016,     0,  1018,  1019,   109,   315,     0,   573,
       0,   352,     0,     0,     0,     0,   507,     0,   508,   509,
       0,   510,   511,     0,   106,     0,     0,   718,   314,     0,
       0,   512,  1026,  1028,  1029,  1030,     0,     0,     0,     0,
       0,  1032,     0,     0,   367,     0,   573,   573,   369,   370,
     231,   371,   372,   736,   513,   514,     0,     0,     0,   109,
       0,   314,     0,   515,   516,   517,   518,     0,   109,   507,
     519,   508,   509,     0,   510,   511,   109,     0,   263,     0,
       0,     0,     0,     0,   512,     0,     0,   352,   231,     0,
       0,     0,     0,     0,     0,     0,   105,     0,     0,     0,
       0,   263,   106,   263,   365,   366,     0,   513,   633,     0,
       0,   263,   263,     0,     0,     0,   515,   516,   517,   518,
     367,     0,   109,   519,   369,   370,   109,   371,   372,     0,
       0,     0,    85,    85,     0,     0,     0,     0,   771,     0,
       0,     0,   315,     0,   250,     0,     0,     0,   700,     0,
       0,   105,   105,     0,   263,     0,     0,     0,   105,     0,
     105,   794,     0,   795,     0,     0,     0,   105,     0,     0,
       0,   665,   306,     0,     0,     0,   263,   313,    85,     0,
       0,   618,   838,     0,   263,     0,     0,   618,   618,     0,
       0,     0,     0,   618,   618,     0,     0,     0,   105,     0,
       0,     0,     0,   105,     0,   231,     0,   106,     0,     0,
       0,     0,     0,     0,   815,   105,   313,     0,     0,   315,
     618,   618,     0,   618,   618,     0,     0,   263,     0,     0,
       0,     0,     0,     0,     0,     0,   835,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   507,     0,   508,   509,
       0,   510,   511,     0,     0,     0,    85,     0,     0,     0,
       0,   512,   106,   106,     0,     0,     0,     0,   105,   106,
       0,   106,     0,   263,     0,     0,     0,   105,   106,     0,
       0,     0,   109,   917,   513,   105,     0,   874,   314,     0,
     618,     0,   109,   515,   516,   517,   518,     0,     0,     0,
     519,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,   618,     0,     0,   106,     0,     0,     0,   263,     0,
       0,     0,     0,     0,     0,     0,   106,   314,     0,     0,
       0,   105,     0,   915,     0,   105,   108,   108,     0,     0,
       0,     0,     0,     0,     0,     0,   315,     0,     0,     0,
     469,   313,     0,   109,     0,     0,     0,   -17,   -17,   -17,
       0,    85,     0,   -17,   -17,     0,   -17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,   106,
       0,     0,   108,     0,     0,     0,     0,     0,   106,   332,
     333,   334,   335,   336,     0,     0,   106,     0,   315,   109,
     573,     0,     0,     0,     0,     0,   573,   573,   263,     0,
       0,     0,   573,   573,     0,     0,    85,    85,     0,     0,
       0,     0,     0,    85,     0,    85,     0,     0,   313,     0,
       0,     0,    85,   109,     0,     0,     0,     0,     0,     0,
       0,   -17,   106,     0,     0,     0,   106,   109,   109,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
     108,     0,   314,    85,   -17,     0,     0,     0,    85,     0,
     109,   109,     0,     0,     0,     0,   365,   366,   -17,     0,
      85,   -17,     0,   567,     0,     0,   -17,     0,   109,     0,
     109,   105,   367,     0,   368,     0,   369,   370,     0,   371,
     372,   105,     0,   375,     0,   376,     0,     0,     0,   573,
       0,     0,     0,     0,     0,     0,     0,   109,     0,     0,
     567,   567,     0,   927,     0,     0,   109,     0,     0,     0,
       0,     0,     0,    85,   352,  -586,  -586,  -586,  -586,   314,
     357,   358,    85,     0,  -586,  -586,     0,     0,     0,     0,
      85,   365,   366,     0,     0,   313,     0,     0,     0,     0,
       0,     0,   105,   132,     0,   108,     0,   367,     0,   368,
       0,   369,   370,     0,   371,   372,   373,   374,   375,   109,
     376,     0,     0,     0,     0,     0,   109,     0,   109,     0,
       0,     0,     0,     0,   109,     0,    85,     0,     0,     0,
      85,     0,   106,     0,     0,     0,     0,   313,   105,     0,
       0,   132,   106,     0,     0,     0,     0,     0,     0,     0,
     108,   108,     0,     0,     0,     0,     0,   108,     0,   108,
       0,     0,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   105,   105,     0,
       0,     0,     0,     0,     0,     0,   314,   108,     0,     0,
       0,     0,   108,   106,     0,     0,     0,     0,     0,   105,
     105,     0,     0,     0,   108,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   314,   106,
       0,     0,     0,     0,   108,   108,   105,     0,     0,     0,
       0,     0,   925,     0,     0,   105,     0,   108,     0,     0,
       0,   352,   353,   354,   355,   356,   108,   357,   358,   359,
       0,   361,   362,   106,   108,     0,    85,     0,   365,   366,
       0,     0,     0,     0,     0,     0,    85,   106,   106,   106,
       0,     0,   130,     0,   367,     0,   368,     0,   369,   370,
       0,   371,   372,   373,   374,   375,     0,   376,   105,     0,
     106,   106,     0,     0,     0,   105,     0,   105,     0,   743,
     108,     0,     0,   105,   108,     0,     0,     0,   106,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,   352,   353,   354,   355,   356,    85,   357,   358,
     359,   360,   361,   362,     0,   363,   364,   106,     0,   365,
     366,     0,     0,   926,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,   368,     0,   369,
     370,     0,   371,   372,   373,   374,   375,     0,   376,     0,
       0,     0,     0,    85,   567,     0,     0,     0,     0,     0,
     567,   567,     0,   131,     0,     0,   567,   567,   377,     0,
    -239,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,   106,    85,   106,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,    85,    85,    85,     0,     0,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,     0,    85,     0,    85,     0,     0,     0,     0,     0,
     108,     0,  -247,  -247,     0,     0,     0,     0,     0,     0,
    -247,  -247,  -247,   567,     0,  -247,  -247,  -247,     0,  -247,
       0,    85,     0,     0,     0,     0,     0,   923,  -247,  -247,
      85,     0,     0,     0,     0,     0,     0,     0,     0,  -247,
    -247,     0,  -247,  -247,  -247,  -247,  -247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -247,     0,    85,     0,     0,     0,     0,  -247,     0,
      85,     0,    85,   275,  -247,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   108,     0,
       0,     0,     0,     0,   108,   108,  -247,  -247,     0,     0,
     108,   108,     0,     0,     0,     0,   352,   353,   354,   355,
     356,  -247,   357,   358,  -247,     0,   361,   362,     0,  -247,
       0,   108,     0,   365,   366,     0,  -247,     0,     0,     0,
       0,     0,     0,     0,     0,   108,   108,   108,     0,   367,
       0,   368,     0,   369,   370,     0,   371,   372,   373,   374,
     375,     0,   376,     0,     0,     0,     0,     0,   108,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,   108,    -4,     1,     0,     2,
       3,     4,     5,     6,   108,     0,     0,     7,     8,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,   108,    40,    41,
      42,    43,    44,     0,   108,     0,   108,     0,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,     0,     0,    47,
      48,     0,     0,    49,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,    -4,     0,
       0,     0,     0,    -4,    63,     0,    64,    65,    66,     0,
       0,    67,    68,   291,     0,     2,     3,     4,     5,     6,
     -12,   -12,   -12,     7,     8,     0,     0,   -12,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,    25,    26,   292,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,     0,    47,    48,     0,     0,    49,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,   -12,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,   -12,     0,     0,     0,     0,   -12,
      63,     0,    64,    65,    66,     0,     0,    67,    68,   291,
       0,     2,     3,     4,     5,     6,   -12,   -12,   -12,     7,
       8,     0,     0,   -12,     9,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,    25,    26,   292,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
       0,    47,    48,     0,     0,    49,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
     -12,     0,     0,     0,     0,   -12,    63,     0,    64,    65,
      66,     0,     0,    67,    68,   291,     0,     2,     3,     4,
       5,     6,   -12,   -12,     0,     7,     8,     0,     0,   -12,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,     0,     0,     0,     0,     0,    25,
      26,   292,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,     0,     0,    47,    48,     0,
       0,    49,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,   -12,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,   -12,     0,     0,     0,
       0,   -12,    63,     0,    64,    65,    66,     0,     0,    67,
      68,   291,     0,     2,     3,     4,     5,     6,     0,     0,
     -12,     7,     8,     0,   -12,   -12,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,   292,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,     0,     0,    47,    48,     0,     0,    49,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,   -12,     0,     0,     0,     0,   -12,    63,     0,
      64,    65,    66,     0,     0,    67,    68,   291,     0,     2,
       3,     4,     5,     6,     0,   -12,   -12,     7,     8,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,    25,    26,   292,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,     0,     0,    47,
      48,     0,     0,    49,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,   -12,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,   -12,     0,
       0,     0,     0,   -12,    63,     0,    64,    65,    66,     0,
       0,    67,    68,   291,     0,     2,     3,     4,     5,     6,
       0,     0,   -12,     7,     8,     0,     0,   -12,     9,   -12,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,    25,    26,   292,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,     0,    47,    48,     0,     0,    49,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,   -12,     0,     0,     0,     0,   -12,
      63,     0,    64,    65,    66,     0,     0,    67,    68,   291,
       0,     2,     3,     4,     5,     6,     0,     0,   -12,     7,
       8,     0,     0,   -12,     9,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,    25,    26,   292,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
       0,    47,    48,     0,     0,    49,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
     -12,     0,     0,     0,     0,   -12,    63,     0,    64,    65,
      66,     0,     0,    67,    68,   291,     0,     2,     3,     4,
       5,     6,     0,     0,   -12,     7,     8,     0,     0,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,     0,     0,     0,     0,     0,    25,
      26,   292,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,     0,     0,    47,    48,     0,
       0,    49,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,   -12,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,   -12,     0,     0,     0,
       0,   -12,    63,     0,    64,    65,    66,     0,     0,    67,
      68,   291,     0,     2,     3,     4,     5,     6,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,   292,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
     293,     0,   -12,    47,    48,     0,     0,    49,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,   -12,     0,     0,     0,     0,   -12,    63,     0,
      64,    65,    66,     0,     0,    67,    68,   291,     0,     2,
       3,     4,     5,     6,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,    25,    26,   292,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,     0,   -12,    47,
      48,     0,     0,    49,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,   -12,     0,
       0,     0,     0,   -12,    63,     0,    64,    65,    66,     0,
       0,    67,    68,     1,     0,     2,     3,     4,     5,     6,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,     0,    47,    48,     0,     0,    49,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,    -4,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,    -4,     0,     0,     0,     0,    -4,
      63,     0,    64,    65,    66,     0,     0,    67,    68,   291,
       0,     2,     3,     4,     5,     6,     0,     0,     0,     7,
       8,     0,     0,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,    25,    26,   292,    28,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,    46,     0,
       0,    47,    48,     0,     0,    49,     0,    50,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,   -12,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
     -12,     0,     0,     0,     0,   -12,    63,     0,    64,    65,
      66,     0,     0,    67,    68,   291,     0,     2,     3,     4,
       5,     6,     0,     0,     0,     7,     8,     0,     0,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,     0,     0,     0,     0,     0,    25,
      26,   292,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,     0,     0,    47,    48,     0,
       0,    49,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,   -12,    61,    62,   -12,     0,     0,     0,
       0,   -12,    63,     0,    64,    65,    66,     0,     0,    67,
      68,   291,     0,     2,     3,     4,     5,     6,     0,     0,
     -12,     7,     8,     0,     0,     0,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,   292,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,     0,     0,    47,    48,     0,     0,    49,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,   -12,     0,     0,     0,     0,   -12,    63,     0,
      64,    65,    66,  -583,  -583,    67,    68,     0,     0,     0,
       0,  -583,  -583,  -583,     0,     0,  -583,  -583,  -583,     0,
    -583,     0,     0,     0,     0,     0,     0,     0,     0,  -583,
    -583,  -583,  -583,     0,     0,     0,     0,     0,     0,     0,
    -583,  -583,     0,  -583,  -583,  -583,  -583,  -583,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -583,  -583,  -583,  -583,  -583,  -104,  -583,  -583,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,     0,     0,  -583,  -583,  -583,
       0,   781,  -583,     0,     0,  -583,     0,     0,  -583,  -583,
       0,  -583,     0,  -583,     0,  -583,     0,  -583,  -583,     0,
    -583,  -583,  -583,  -583,  -583,     0,  -583,  -583,  -583,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -583,     0,     0,  -583,  -583,  -583,  -583,     0,
    -583,     0,  -583,  -483,  -483,     0,     0,  -583,     0,     0,
       0,  -483,  -483,  -483,     0,     0,  -483,  -483,  -483,     0,
    -483,     0,     0,     0,     0,     0,     0,     0,  -483,     0,
    -483,  -483,  -483,     0,     0,     0,     0,     0,     0,     0,
    -483,  -483,     0,  -483,  -483,  -483,  -483,  -483,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,
    -483,  -483,  -483,  -483,  -483,     0,     0,  -483,  -483,  -483,
       0,  -483,  -483,     0,     0,  -483,     0,     0,  -483,  -483,
       0,  -483,     0,  -483,     0,  -483,     0,  -483,  -483,     0,
    -483,  -483,  -483,  -483,  -483,     0,  -483,     0,  -483,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -483,     0,     0,  -483,  -483,  -483,  -483,     0,
    -483,     0,  -483,  -486,  -486,     0,     0,  -483,     0,     0,
       0,  -486,  -486,  -486,     0,     0,  -486,  -486,  -486,     0,
    -486,     0,     0,     0,     0,     0,     0,     0,  -486,     0,
    -486,  -486,  -486,     0,     0,     0,     0,     0,     0,     0,
    -486,  -486,     0,  -486,  -486,  -486,  -486,  -486,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,  -486,
    -486,  -486,  -486,  -486,  -486,     0,     0,  -486,  -486,  -486,
       0,  -486,  -486,     0,     0,  -486,     0,     0,  -486,  -486,
       0,  -486,     0,  -486,     0,  -486,     0,  -486,  -486,     0,
    -486,  -486,  -486,  -486,  -486,     0,  -486,     0,  -486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -486,     0,     0,  -486,  -486,  -486,  -486,     0,
    -486,     0,  -486,  -584,  -584,     0,     0,  -486,     0,     0,
       0,  -584,  -584,  -584,     0,     0,  -584,  -584,  -584,     0,
    -584,     0,     0,     0,     0,     0,     0,     0,     0,  -584,
    -584,  -584,  -584,     0,     0,     0,     0,     0,     0,     0,
    -584,  -584,     0,  -584,  -584,  -584,  -584,  -584,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -584,  -584,  -584,  -584,  -584,     0,  -584,  -584,  -584,  -584,
    -584,  -584,  -584,  -584,  -584,     0,     0,  -584,  -584,  -584,
       0,     0,  -584,     0,     0,  -584,     0,     0,  -584,  -584,
       0,  -584,     0,  -584,     0,  -584,     0,  -584,  -584,     0,
    -584,  -584,  -584,  -584,  -584,     0,  -584,  -584,  -584,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -584,     0,     0,  -584,  -584,  -584,  -584,     0,
    -584,     0,  -584,  -585,  -585,     0,     0,  -584,     0,     0,
       0,  -585,  -585,  -585,     0,     0,  -585,  -585,  -585,     0,
    -585,     0,     0,     0,     0,     0,     0,     0,     0,  -585,
    -585,  -585,  -585,     0,     0,     0,     0,     0,     0,     0,
    -585,  -585,     0,  -585,  -585,  -585,  -585,  -585,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -585,  -585,  -585,  -585,  -585,     0,  -585,  -585,  -585,  -585,
    -585,  -585,  -585,  -585,  -585,     0,     0,  -585,  -585,  -585,
       0,     0,  -585,     0,     0,  -585,     0,     0,  -585,  -585,
       0,  -585,     0,  -585,     0,  -585,     0,  -585,  -585,     0,
    -585,  -585,  -585,  -585,  -585,     0,  -585,  -585,  -585,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -585,     0,     0,  -585,  -585,  -585,  -585,     0,
    -585,     0,  -585,  -292,  -292,     0,     0,  -585,     0,     0,
       0,  -292,  -292,  -292,     0,     0,  -292,  -292,  -292,     0,
    -292,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -292,  -292,  -292,     0,     0,     0,     0,     0,     0,     0,
    -292,  -292,     0,  -292,  -292,  -292,  -292,  -292,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -292,  -292,  -292,  -292,  -292,  -106,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,     0,     0,  -292,  -292,  -292,
       0,   782,  -292,     0,     0,  -292,     0,     0,  -292,  -292,
       0,  -292,     0,  -292,     0,  -292,     0,  -292,  -292,     0,
    -292,  -292,  -292,  -292,  -292,     0,  -292,     0,  -292,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -292,     0,     0,  -292,  -292,  -292,  -292,     0,
    -292,     0,  -292,  -412,  -412,     0,     0,  -292,     0,     0,
       0,  -412,  -412,  -412,     0,     0,  -412,  -412,  -412,     0,
    -412,     0,     0,     0,     0,     0,     0,     0,     0,  -412,
    -412,  -412,     0,     0,     0,     0,     0,     0,     0,     0,
    -412,  -412,     0,  -412,  -412,  -412,  -412,  -412,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -412,  -412,  -412,  -412,  -412,     0,  -412,  -412,  -412,  -412,
    -412,  -412,  -412,  -412,  -412,     0,     0,  -412,  -412,  -412,
       0,     0,  -412,     0,   275,  -412,     0,     0,  -412,  -412,
       0,  -412,     0,  -412,     0,  -412,     0,  -412,  -412,     0,
    -412,  -412,  -412,  -412,  -412,     0,  -412,  -412,  -412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -412,     0,     0,  -412,  -412,     0,  -412,     0,
    -412,  -283,  -283,     0,     0,     0,     0,  -412,     0,  -283,
    -283,  -283,     0,     0,  -283,  -283,  -283,     0,  -283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -283,  -283,
    -283,     0,     0,     0,     0,     0,     0,     0,  -283,  -283,
       0,  -283,  -283,  -283,  -283,  -283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -283,  -283,
    -283,  -283,  -283,     0,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,     0,     0,  -283,  -283,  -283,     0,     0,
    -283,     0,     0,  -283,     0,     0,  -283,  -283,     0,  -283,
       0,  -283,     0,  -283,     0,  -283,  -283,     0,  -283,  -283,
    -283,  -283,  -283,     0,  -283,     0,  -283,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -283,     0,     0,  -283,  -283,  -283,  -283,     0,  -283,     0,
    -283,  -247,  -247,     0,     0,  -283,     0,     0,     0,  -247,
    -247,  -247,     0,     0,  -247,  -247,  -247,     0,  -247,     0,
       0,     0,     0,     0,     0,     0,     0,  -247,  -247,  -247,
       0,     0,     0,     0,     0,     0,     0,     0,  -247,  -247,
       0,  -247,  -247,  -247,  -247,  -247,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -247,  -247,
    -247,  -247,  -247,     0,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,     0,     0,  -247,  -247,  -247,     0,     0,
    -247,     0,   275,  -247,     0,     0,  -247,  -247,     0,  -247,
       0,  -247,     0,  -247,     0,  -247,  -247,     0,  -247,  -247,
    -247,  -247,  -247,     0,  -247,  -247,  -247,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -247,     0,     0,  -247,  -247,     0,  -247,     0,  -247,  -299,
    -299,     0,     0,     0,     0,  -247,     0,  -299,  -299,  -299,
       0,     0,  -299,  -299,  -299,     0,  -299,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -299,  -299,     0,     0,
       0,     0,     0,     0,     0,     0,  -299,  -299,     0,  -299,
    -299,  -299,  -299,  -299,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -299,  -299,  -299,  -299,
    -299,     0,  -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,
    -299,     0,     0,  -299,  -299,  -299,     0,     0,  -299,     0,
     272,  -299,     0,     0,  -299,  -299,     0,  -299,     0,  -299,
       0,  -299,     0,  -299,  -299,     0,  -299,  -299,  -299,  -299,
    -299,     0,  -299,     0,  -299,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -299,     0,
       0,  -299,  -299,     0,  -299,     0,  -299,  -583,  -583,     0,
       0,     0,     0,  -299,     0,  -583,  -583,  -583,     0,     0,
       0,  -583,  -583,     0,  -583,     0,     0,     0,     0,     0,
       0,     0,     0,  -583,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -583,  -583,     0,  -583,  -583,  -583,
    -583,  -583,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -583,  -583,  -583,  -583,  -583,  -104,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,  -583,     0,
       0,  -583,  -583,  -583,     0,   748,     0,     0,     0,  -583,
       0,     0,  -583,     0,     0,     0,     0,  -583,     0,  -583,
       0,  -583,  -583,     0,  -583,  -583,  -583,  -583,  -583,     0,
    -583,  -583,  -583,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -583,     0,     0,  -583,
    -583,     0,   -95,     0,  -583,  -583,  -583,     0,     0,     0,
       0,  -583,     0,  -583,  -583,  -583,     0,     0,     0,  -583,
    -583,     0,  -583,     0,     0,     0,     0,     0,     0,     0,
       0,  -583,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -583,  -583,     0,  -583,  -583,  -583,  -583,  -583,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -583,  -583,  -583,  -583,  -583,  -104,  -583,  -583,
    -583,  -583,  -583,  -583,  -583,  -583,  -583,     0,     0,  -583,
    -583,  -583,     0,   748,     0,     0,     0,  -583,     0,     0,
    -583,     0,     0,     0,     0,  -583,     0,  -583,     0,  -583,
    -583,     0,  -583,  -583,  -583,  -583,  -583,     0,  -583,  -583,
    -583,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -583,     0,     0,  -583,  -583,     0,
    -583,     0,  -583,  -292,  -292,     0,     0,     0,     0,  -583,
       0,  -292,  -292,  -292,     0,     0,     0,  -292,  -292,     0,
    -292,   352,   353,   354,   355,   356,     0,   357,   358,   359,
     360,   361,   362,     0,  -586,  -586,     0,     0,   365,   366,
    -292,  -292,     0,  -292,  -292,  -292,  -292,  -292,     0,     0,
       0,     0,     0,     0,   367,     0,   368,     0,   369,   370,
       0,   371,   372,   373,   374,   375,     0,   376,     0,     0,
    -292,  -292,  -292,  -292,  -292,  -106,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,  -292,  -292,     0,     0,  -292,  -292,  -292,
       0,   749,     0,     0,     0,  -292,     0,     0,  -292,     0,
       0,     0,     0,  -292,     0,  -292,     0,  -292,  -292,     0,
    -292,  -292,  -292,  -292,  -292,     0,  -292,     0,  -292,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -292,     0,     0,  -292,  -292,     0,   -97,     0,
    -292,  -292,  -292,     0,     0,     0,     0,  -292,     0,  -292,
    -292,  -292,     0,     0,     0,  -292,  -292,     0,  -292,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -292,  -292,
       0,  -292,  -292,  -292,  -292,  -292,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -292,  -292,
    -292,  -292,  -292,  -106,  -292,  -292,  -292,  -292,  -292,  -292,
    -292,  -292,  -292,     0,     0,  -292,  -292,  -292,     0,   749,
       0,     0,     0,  -292,     0,     0,  -292,     0,     0,     0,
       0,  -292,     0,  -292,     0,  -292,  -292,     0,  -292,  -292,
    -292,  -292,  -292,     0,  -292,     0,  -292,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -292,     0,     0,  -292,  -292,     0,  -292,     0,  -292,     2,
       3,     4,     5,     6,     0,  -292,     0,     7,     8,     0,
       0,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,    24,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,    46,     0,     0,    47,
      48,     0,     0,    49,     0,    50,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     0,     0,   422,    63,     0,    64,    65,    66,     0,
       0,    67,    68,     2,     3,     4,     5,     6,     0,     0,
       0,     7,     8,     0,     0,     0,     9,     0,    10,    11,
      12,    13,    14,    15,    16,     0,     0,     0,     0,     0,
      17,    18,    19,    20,    21,    22,    23,     0,     0,    24,
       0,     0,     0,     0,     0,    25,    26,   292,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
      46,     0,     0,    47,    48,     0,     0,    49,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,   422,    63,     0,
      64,    65,    66,     0,     0,    67,    68,     2,     3,     4,
       5,     6,     0,     0,     0,     7,     8,     0,     0,     0,
       9,     0,    10,    11,    12,    13,    14,    15,    16,     0,
       0,     0,     0,     0,    17,    18,    19,    20,    21,    22,
      23,     0,     0,    24,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,    46,     0,     0,    47,    48,     0,
       0,    49,     0,    50,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     2,
       3,     4,    63,     6,    64,    65,    66,     7,     8,    67,
      68,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,   256,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,   124,     0,     0,    47,
      48,     0,     0,    49,     0,   257,     0,   258,     0,    51,
       0,     0,   259,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,    53,   261,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,   279,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,   117,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,   256,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,   257,     0,   258,
       0,    51,     0,     0,   259,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,    53,   261,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,    63,     0,    64,    65,
      66,     0,     0,    67,    68,     2,     3,     4,     5,     6,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,    25,    26,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,    46,     0,     0,    47,    48,     0,     0,    49,
       0,    50,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,     0,     2,     3,     4,
      63,     6,    64,    65,    66,     7,     8,    67,    68,     0,
       9,     0,    10,    11,    12,   112,   113,    15,    16,     0,
       0,     0,     0,     0,   114,   115,   116,    20,    21,    22,
      23,     0,     0,   117,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,   256,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,   124,     0,     0,    47,    48,     0,
       0,    49,     0,   664,     0,   258,     0,    51,     0,     0,
     259,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,    53,   261,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     2,
       3,     4,    63,     6,    64,    65,    66,     7,     8,    67,
      68,     0,     9,     0,    10,    11,    12,   112,   113,    15,
      16,     0,     0,     0,     0,     0,   114,   115,   116,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,   256,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,   124,     0,     0,    47,
      48,     0,     0,    49,     0,   257,     0,     0,     0,    51,
       0,     0,   259,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,    53,   261,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,   112,
     113,    15,    16,     0,     0,     0,     0,     0,   114,   115,
     116,    20,    21,    22,    23,     0,     0,   117,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,   256,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,     0,     0,   258,
       0,    51,     0,     0,   259,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,    53,   261,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     2,     3,     4,    63,     6,    64,    65,
      66,     7,     8,    67,    68,     0,     9,     0,    10,    11,
      12,   112,   113,    15,    16,     0,     0,     0,     0,     0,
     114,   115,   116,    20,    21,    22,    23,     0,     0,   117,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,   256,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,     0,
     124,     0,     0,    47,    48,     0,     0,    49,     0,   664,
       0,     0,     0,    51,     0,     0,   259,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,    53,   261,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     2,     3,     4,    63,     6,
      64,    65,    66,     7,     8,    67,    68,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,     0,   124,     0,     0,    47,    48,     0,     0,    49,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,   240,     0,     0,     0,     0,   241,
      63,     0,    64,    65,    66,     0,     0,    67,    68,     2,
       3,     4,     0,     6,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,    10,    11,    12,   112,   113,    15,
      16,     0,     0,     0,     0,     0,   114,   115,   116,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,   256,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,   124,     0,     0,    47,
      48,     0,     0,    49,     0,     0,     0,     0,     0,    51,
       0,     0,   259,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,    53,   261,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,    13,
      14,    15,    16,     0,     0,     0,     0,     0,    17,    18,
      19,    20,    21,    22,    23,     0,     0,    24,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
     279,     0,     0,     2,     3,     4,    63,     6,    64,    65,
      66,     7,     8,    67,    68,     0,     9,     0,    10,    11,
      12,   112,   113,    15,    16,     0,     0,     0,     0,     0,
     114,   115,   116,    20,    21,    22,    23,     0,     0,   117,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,     0,
     124,   455,     0,    47,    48,     0,     0,    49,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     2,     3,     4,    63,     6,
      64,    65,    66,     7,     8,    67,    68,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,   117,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,     0,   124,     0,     0,    47,    48,     0,     0,    49,
       0,   554,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,   260,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,     0,     2,     3,     4,
      63,     6,    64,    65,    66,     7,     8,    67,    68,     0,
       9,     0,    10,    11,    12,   112,   113,    15,    16,     0,
       0,     0,     0,     0,   114,   115,   116,    20,    21,    22,
      23,     0,     0,   117,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,   124,     0,     0,    47,    48,     0,
       0,    49,     0,   257,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     2,
       3,     4,    63,     6,    64,    65,    66,     7,     8,    67,
      68,     0,     9,     0,    10,    11,    12,   112,   113,    15,
      16,     0,     0,     0,     0,     0,   114,   115,   116,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,   124,     0,     0,    47,
      48,     0,     0,    49,     0,   554,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,   112,
     113,    15,    16,     0,     0,     0,     0,     0,   114,   115,
     116,    20,    21,    22,    23,     0,     0,   117,     0,     0,
       0,     0,     0,     0,    26,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   230,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,   834,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     2,     3,     4,    63,     6,    64,    65,
      66,     7,     8,    67,    68,     0,     9,     0,    10,    11,
      12,   112,   113,    15,    16,     0,     0,     0,     0,     0,
     114,   115,   116,    20,    21,    22,    23,     0,     0,   117,
       0,     0,     0,     0,     0,     0,    26,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   230,     0,     0,
     124,     0,     0,    47,    48,     0,     0,    49,     0,   664,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     2,     3,     4,    63,     6,
      64,    65,    66,     7,     8,    67,    68,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,     0,     0,     0,
       0,     0,    17,    18,    19,    20,    21,    22,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,    26,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
       0,     0,   124,     0,     0,    47,    48,     0,     0,    49,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,     0,     2,     3,     4,
      63,     6,    64,    65,    66,     7,     8,    67,    68,     0,
       9,     0,    10,    11,    12,   112,   113,    15,    16,     0,
       0,     0,     0,     0,   114,   115,   116,    20,    21,    22,
      23,     0,     0,   117,     0,     0,     0,     0,     0,     0,
      26,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,   124,     0,     0,    47,    48,     0,
       0,    49,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     2,
       3,     4,    63,     6,    64,    65,    66,     7,     8,    67,
      68,     0,     9,     0,    10,    11,    12,    13,    14,    15,
      16,     0,     0,     0,     0,     0,    17,    18,    19,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,    26,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,   124,     0,     0,    47,
      48,     0,     0,    49,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,   112,
     113,    15,    16,     0,     0,     0,     0,     0,   114,   115,
     116,    20,    21,    22,    23,     0,     0,   117,     0,     0,
       0,     0,     0,   743,   118,     0,     0,    29,    30,    31,
     119,    33,    34,    35,   120,     0,    37,    38,    39,     0,
      40,    41,     0,     0,   121,     0,   352,   353,   354,   355,
     356,     0,   357,   358,   359,   360,   361,   362,     0,   363,
     364,     0,   122,   365,   366,   123,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,     0,     0,   367,
       0,   368,     0,   369,   370,     0,   371,   372,   373,   374,
     375,     0,   376,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,   377,     2,     3,     4,    63,     6,    64,    65,
      66,     7,     8,    67,    68,     0,     9,     0,    10,    11,
      12,   112,   113,    15,    16,     0,     0,     0,     0,     0,
     114,   115,   116,    20,    21,    22,    23,     0,     0,   117,
       0,     0,     0,     0,     0,     0,   118,     0,     0,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,     0,    40,    41,     0,     0,   121,     0,   352,   353,
     354,   355,   356,     0,   357,   358,   359,   360,   361,   362,
       0,   363,   364,     0,     0,   365,   366,   248,     0,     0,
      46,     0,     0,    47,    48,     0,     0,    49,     0,    50,
       0,   367,     0,   368,     0,   369,   370,     0,   371,   372,
     373,   374,   375,     0,   376,     0,     0,    53,    54,    55,
      56,     0,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,     0,   279,   377,     2,     3,     4,    63,     6,
      64,    65,    66,     7,     8,    67,    68,     0,     9,     0,
      10,    11,    12,   112,   113,    15,    16,     0,     0,     0,
       0,     0,   114,   115,   116,    20,    21,    22,    23,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    29,    30,    31,    32,    33,    34,    35,    36,     0,
      37,    38,    39,     0,    40,    41,     0,     0,   121,     0,
     352,   353,   354,   355,   356,     0,   357,   358,   359,   360,
     361,   362,     0,   363,   364,     0,     0,   365,   366,   309,
       0,     0,   124,     0,     0,    47,    48,     0,     0,    49,
       0,     0,     0,   367,     0,   368,     0,   369,   370,     0,
     371,   372,   373,   374,   375,     0,   376,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,   377,   310,     0,     0,
      63,     0,    64,    65,    66,     0,     0,    67,    68,     2,
       3,     4,     0,     6,     0,     0,     0,     7,     8,     0,
       0,     0,     9,     0,    10,    11,    12,   112,   113,    15,
      16,     0,     0,     0,     0,     0,   114,   115,   116,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,     0,     0,   348,     0,     0,    47,
      48,     0,     0,    49,     0,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,   112,
     113,    15,    16,     0,     0,     0,     0,     0,   114,   115,
     116,    20,    21,    22,    23,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   309,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,     0,   561,     0,     0,    63,     0,    64,    65,
      66,     0,     0,    67,    68,     2,     3,     4,     0,     6,
       0,     0,     0,     7,     8,     0,     0,     0,     9,     0,
      10,    11,    12,   112,   113,    15,    16,     0,     0,     0,
       0,     0,   114,   115,   116,    20,    21,    22,    23,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   118,     0,
       0,    29,    30,    31,   119,    33,    34,    35,   120,     0,
      37,    38,    39,     0,    40,    41,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,   124,     0,     0,    47,    48,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,     0,    57,    58,    59,    60,     0,     0,
       0,     0,    61,    62,     0,     0,     0,     2,     3,     4,
      63,     6,    64,    65,    66,     7,     8,    67,    68,     0,
       9,     0,    10,    11,    12,   112,   113,    15,    16,     0,
       0,     0,     0,     0,   114,   115,   116,    20,    21,    22,
      23,     0,     0,   117,     0,     0,     0,     0,     0,     0,
     118,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,     0,    40,    41,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   309,     0,     0,   348,     0,     0,    47,    48,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,    54,    55,    56,     0,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,     0,     0,     0,     2,
       3,     4,    63,     6,    64,    65,    66,     7,     8,    67,
      68,     0,     9,     0,    10,    11,    12,   112,   113,    15,
      16,     0,     0,     0,     0,     0,   114,   115,   116,    20,
      21,    22,    23,     0,     0,   117,     0,     0,     0,     0,
       0,     0,   118,     0,     0,    29,    30,    31,    32,    33,
      34,    35,    36,     0,    37,    38,    39,     0,    40,    41,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   922,     0,     0,   124,     0,     0,    47,
      48,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,     0,    57,    58,
      59,    60,     0,     0,     0,     0,    61,    62,     0,     0,
       0,     2,     3,     4,    63,     6,    64,    65,    66,     7,
       8,    67,    68,     0,     9,     0,    10,    11,    12,   112,
     113,    15,    16,     0,     0,     0,     0,     0,   114,   115,
     116,    20,    21,    22,    23,     0,     0,   117,     0,     0,
       0,     0,     0,     0,   118,     0,     0,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,     0,
      40,    41,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   956,     0,     0,   124,     0,
       0,    47,    48,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,     0,
      57,    58,    59,    60,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,    63,     0,    64,    65,
      66,     0,     0,    67,    68,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     0,
       0,     0,   158,   159,   160,   214,   215,   216,   217,   165,
     166,   167,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   218,   219,   220,   221,   176,   281,     0,   222,     0,
       0,     0,     0,     0,     0,     0,   178,   179,     0,   180,
     181,   182,   183,   184,     0,   185,   186,     0,     0,   187,
     188,     0,     0,     0,   189,   190,   191,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   194,   195,     0,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,     0,     0,   208,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     0,     0,
       0,   158,   159,   160,   214,   215,   216,   217,   165,   166,
     167,     0,     0,     0,     0,     0,   168,   169,   170,   171,
     218,   219,   220,   221,   176,     0,     0,   222,     0,     0,
       0,     0,     0,     0,     0,   178,   179,     0,   180,   181,
     182,   183,   184,     0,   185,   186,     0,     0,   187,   188,
       0,     0,     0,   189,   190,   191,   192,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,   195,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,     0,     0,   208,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     0,     0,     0,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   174,   175,   176,    34,    35,   177,     0,    37,     0,
       0,     0,     0,     0,   178,   179,     0,   180,   181,   182,
     183,   184,     0,   185,   186,     0,     0,   187,   188,     0,
       0,     0,   189,   190,   191,   192,     0,     0,     0,     0,
       0,   193,     0,     0,     0,     0,     0,     0,     0,   194,
     195,     0,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,   208,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,     0,     0,     0,   158,   159,   160,   214,   215,   216,
     217,   165,   166,   167,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   218,   219,   220,   221,   176,     0,     0,
     222,     0,     0,     0,     0,     0,     0,     0,   178,   179,
       0,   180,   181,   182,   183,   184,     0,   185,   186,     0,
       0,   187,   188,     0,     0,     0,   189,   190,   191,   192,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   194,   195,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   600,   601,
     208,     0,   602,     0,     0,     0,     0,     0,     0,     0,
     178,   179,     0,   180,   181,   182,   183,   184,     0,   185,
     186,     0,     0,   187,   188,     0,     0,     0,   189,   190,
     191,   192,     0,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,     0,     0,   194,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     608,   609,   208,     0,   610,     0,     0,     0,     0,     0,
       0,     0,   178,   179,     0,   180,   181,   182,   183,   184,
       0,   185,   186,     0,     0,   187,   188,     0,     0,     0,
     189,   190,   191,   192,     0,     0,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,   194,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   625,   601,   208,     0,   626,     0,     0,     0,
       0,     0,     0,     0,   178,   179,     0,   180,   181,   182,
     183,   184,     0,   185,   186,     0,     0,   187,   188,     0,
       0,     0,   189,   190,   191,   192,     0,     0,     0,     0,
       0,   275,     0,     0,     0,     0,     0,     0,     0,   194,
     195,     0,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   614,   609,   208,     0,   615,     0,
       0,     0,     0,     0,     0,     0,   178,   179,     0,   180,
     181,   182,   183,   184,     0,   185,   186,     0,     0,   187,
     188,     0,     0,     0,   189,   190,   191,   192,     0,     0,
       0,     0,     0,   275,     0,     0,     0,     0,     0,     0,
       0,   194,   195,     0,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   643,   601,   208,     0,
     644,     0,     0,     0,     0,     0,     0,     0,   178,   179,
       0,   180,   181,   182,   183,   184,     0,   185,   186,     0,
       0,   187,   188,     0,     0,     0,   189,   190,   191,   192,
       0,     0,     0,     0,     0,   275,     0,     0,     0,     0,
       0,     0,     0,   194,   195,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   646,   609,
     208,     0,   647,     0,     0,     0,     0,     0,     0,     0,
     178,   179,     0,   180,   181,   182,   183,   184,     0,   185,
     186,     0,     0,   187,   188,     0,     0,     0,   189,   190,
     191,   192,     0,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,     0,     0,   194,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     656,   601,   208,     0,   657,     0,     0,     0,     0,     0,
       0,     0,   178,   179,     0,   180,   181,   182,   183,   184,
       0,   185,   186,     0,     0,   187,   188,     0,     0,     0,
     189,   190,   191,   192,     0,     0,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,   194,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   659,   609,   208,     0,   660,     0,     0,     0,
       0,     0,     0,     0,   178,   179,     0,   180,   181,   182,
     183,   184,     0,   185,   186,     0,     0,   187,   188,     0,
       0,     0,   189,   190,   191,   192,     0,     0,     0,     0,
       0,   275,     0,     0,     0,     0,     0,     0,     0,   194,
     195,     0,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   690,   601,   208,     0,   691,     0,
       0,     0,     0,     0,     0,     0,   178,   179,     0,   180,
     181,   182,   183,   184,     0,   185,   186,     0,     0,   187,
     188,     0,     0,     0,   189,   190,   191,   192,     0,     0,
       0,     0,     0,   275,     0,     0,     0,     0,     0,     0,
       0,   194,   195,     0,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   693,   609,   208,     0,
     694,     0,     0,     0,     0,     0,     0,     0,   178,   179,
       0,   180,   181,   182,   183,   184,     0,   185,   186,     0,
       0,   187,   188,     0,     0,     0,   189,   190,   191,   192,
       0,     0,     0,     0,     0,   275,     0,     0,     0,     0,
       0,     0,     0,   194,   195,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   839,   601,
     208,     0,   840,     0,     0,     0,     0,     0,     0,     0,
     178,   179,     0,   180,   181,   182,   183,   184,     0,   185,
     186,     0,     0,   187,   188,     0,     0,     0,   189,   190,
     191,   192,     0,     0,     0,     0,     0,   275,     0,     0,
       0,     0,     0,     0,     0,   194,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     842,   609,   208,     0,   843,     0,     0,     0,     0,     0,
       0,     0,   178,   179,     0,   180,   181,   182,   183,   184,
       0,   185,   186,     0,     0,   187,   188,     0,     0,     0,
     189,   190,   191,   192,     0,     0,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,   194,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   997,   601,   208,     0,   998,     0,     0,     0,
       0,     0,     0,     0,   178,   179,     0,   180,   181,   182,
     183,   184,     0,   185,   186,     0,     0,   187,   188,     0,
       0,     0,   189,   190,   191,   192,     0,     0,     0,     0,
       0,   275,     0,     0,     0,     0,     0,     0,     0,   194,
     195,     0,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,  1000,   609,   208,     0,  1001,     0,
       0,     0,     0,     0,     0,     0,   178,   179,     0,   180,
     181,   182,   183,   184,     0,   185,   186,     0,     0,   187,
     188,     0,     0,     0,   189,   190,   191,   192,     0,     0,
       0,     0,     0,   275,     0,     0,     0,     0,     0,     0,
       0,   194,   195,     0,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,  1012,   601,   208,     0,
    1013,     0,     0,     0,     0,     0,     0,     0,   178,   179,
       0,   180,   181,   182,   183,   184,     0,   185,   186,     0,
       0,   187,   188,     0,     0,     0,   189,   190,   191,   192,
       0,     0,     0,     0,     0,   275,     0,     0,     0,     0,
       0,     0,     0,   194,   195,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   614,   609,
     208,     0,   615,     0,     0,     0,     0,     0,     0,     0,
     178,   179,     0,   180,   181,   182,   183,   184,     0,   185,
     186,     0,     0,   187,   188,     0,     0,     0,   189,   190,
     191,   192,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   194,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
       0,     0,   208
  };

  const short
  parser::yycheck_[] =
  {
      24,    90,    26,     4,   328,     8,     9,   424,     0,     1,
       2,     3,    88,    89,    25,     7,     8,     9,   268,    83,
      12,    13,    14,     4,     5,    17,    71,   716,    13,    14,
     239,   419,    17,     5,    52,     1,     0,     1,     9,   284,
     123,   304,    19,   328,    25,   308,     5,     2,     3,   351,
      50,    13,    14,    25,    46,    17,   328,    12,    50,   724,
      52,   629,   401,   808,    46,   640,    25,    46,   436,   532,
     438,   438,    13,   648,    71,    27,    13,   645,   484,   403,
     320,   887,   322,   323,   806,   325,    48,    49,    19,    13,
     658,    83,    13,    14,   118,    50,    17,   380,    26,    13,
      71,    78,   379,    13,    29,   382,    25,   384,    91,    13,
     477,    13,    44,   293,    25,    13,   399,    61,   403,    72,
     132,    13,    14,   400,   692,    17,    61,    48,    83,   961,
     122,   414,   124,    13,    92,    88,   413,   213,   415,   116,
     351,    25,   124,   829,   427,   751,    25,    78,   125,   132,
      91,   428,   758,    25,    54,   561,     0,    72,   234,    59,
      60,   883,    56,    37,    38,    72,    61,    91,   348,    25,
     976,    25,    13,    88,   132,   251,  1008,   388,   389,    28,
     132,    88,   135,   460,   128,   137,   114,    25,   114,   121,
     514,   132,   937,   128,   434,   132,   137,   447,   135,   132,
     137,   193,   135,   486,   388,   389,   895,    91,   132,    25,
     487,   287,    91,   137,   139,   901,   135,   939,   132,   464,
     388,   389,   132,   137,   135,   890,   114,   137,   132,   514,
     132,   126,   127,   137,   132,   137,   312,   229,    72,   137,
     278,   136,   514,   246,   247,   242,   310,    72,   416,   417,
     295,   135,   132,   975,   246,   247,   135,   137,   132,   499,
     298,     0,     1,   135,   504,   954,    88,    13,     7,     8,
       9,   242,    72,   841,    13,    14,   716,   301,    17,   135,
     272,   135,   274,   275,   724,   624,   278,   272,   280,   274,
     275,   132,   284,   285,   462,   634,   137,   135,   295,   291,
     875,   293,   135,   285,   672,   673,   673,    46,   300,   633,
     272,   293,   274,    52,   293,   398,    37,    38,   310,   135,
     284,    15,    91,    17,   295,    26,  1015,   291,   346,   332,
     333,   334,   335,   351,   740,   135,   300,   639,    76,   331,
     332,   333,   334,   335,   336,   337,   338,    72,   633,   349,
      91,   272,   109,   274,   346,   310,   348,   349,   821,   351,
      91,   633,   135,    88,   402,   331,   348,   331,    79,   348,
     388,   389,   336,   111,    61,    86,   793,    62,    63,    56,
     272,    72,   274,   122,    95,   124,   132,    17,   380,   829,
      91,   137,   716,    88,   349,   380,   388,   389,    56,    61,
     724,   382,   440,   384,   137,   382,   444,   399,    25,   401,
     448,   132,   132,   114,   399,   135,   137,   667,   410,   400,
     484,   392,   414,   400,   687,   346,   418,   465,   410,   414,
     351,   999,    72,   144,   415,   427,   418,    25,   415,   126,
     127,   650,   427,   454,   907,   908,    89,   428,    88,   136,
     890,   428,   423,   424,   193,    72,   141,   142,    61,   135,
     145,   146,   745,   455,   126,   127,   128,   744,   132,   746,
      72,   135,   464,   454,   436,    92,   468,    14,    15,   460,
     132,   143,   454,   460,    61,   137,    88,   875,    37,    38,
     229,   830,   484,   832,   486,   454,   572,   561,    52,   420,
     464,   486,    56,   135,   468,   829,   487,   246,   247,    79,
     487,   879,   879,   475,   954,   132,    86,   513,   135,    79,
     859,   961,   560,   126,   127,   128,    86,   114,   991,   484,
      92,   742,    72,   272,    67,   274,   275,   748,   749,   278,
     864,   280,    67,   754,   755,   284,   285,   797,    88,   126,
     127,   128,   291,    72,   293,   118,    25,   115,   534,    56,
     536,   300,   101,   102,   748,   749,   890,   130,  1008,   561,
     754,   755,    72,   829,   144,   599,    96,   140,    61,   864,
     748,   749,   921,   607,   144,    72,   754,   755,    88,   135,
      98,   135,   331,   332,   333,   334,   335,   336,   337,   338,
      91,    88,    72,    72,    10,   629,   561,   346,    13,   348,
       8,    72,   351,   781,   782,    10,   784,   785,    88,    92,
     623,   645,    91,    92,   688,    25,   637,    88,   605,   135,
     954,   623,   624,    25,   658,   636,   613,   961,   676,   616,
     851,   380,   634,   126,   127,   128,   135,   685,   135,   388,
     389,   628,   115,   630,   135,   636,   637,   866,   661,   115,
     399,   870,   401,   132,   635,   637,   135,   851,   692,   661,
     759,   410,    72,   711,   605,   414,   740,    92,   637,   418,
      72,   135,   613,   851,  1008,   616,   969,   121,   427,   713,
      79,   136,    92,   970,   136,    72,   688,    86,   954,    72,
      92,    79,   958,   695,   872,   961,    95,   963,    86,   135,
     672,   707,   708,   695,    61,    88,   455,    52,   639,    54,
      55,   135,    61,    58,   742,   464,    72,    79,   766,   468,
     748,   749,   132,   688,    86,   135,   754,   755,    52,   135,
     132,   135,    88,   135,    52,   135,   719,   486,   740,   741,
     742,    52,  1008,   745,  1010,   144,   748,   749,    10,  1015,
     745,  1017,   754,   755,   115,   746,   144,   805,    10,   746,
     135,  1027,    26,   135,   135,   778,    44,   741,    72,   126,
     127,   128,    10,   775,    15,   740,   778,   126,   127,   128,
      10,   762,   144,   775,   115,   135,   115,   789,   790,   791,
     135,   135,   134,    61,    96,   829,    10,   789,   790,   791,
     806,    10,   808,    52,    89,    54,    55,   841,     9,    58,
     812,   813,   793,    10,    10,    79,   135,   129,    79,    79,
     812,   813,    86,   851,   137,    86,    86,    91,   830,   135,
     832,    95,   818,   819,     7,     8,     9,   823,   924,   825,
     719,   827,    26,   722,    92,   135,   829,   135,    79,   851,
     114,   724,    13,    14,   727,    86,    17,   859,   126,   127,
     128,   135,    79,   865,    95,   135,   868,   901,   135,    86,
      10,    10,    79,    72,   623,   624,   868,   883,   884,    86,
     144,    42,    43,   144,   144,   634,   135,    48,    49,    79,
      51,    52,    79,   135,    10,    79,    86,   115,   111,    86,
     865,    91,    86,   905,    10,    95,   135,    91,   942,   135,
     135,    95,   661,   144,   135,    52,    79,    54,    55,   921,
     135,    58,   111,    86,    56,   135,   928,   144,   930,   135,
     114,   937,    95,   939,   936,    56,   928,   144,   930,    10,
     905,    10,   135,   135,   936,    79,   695,   135,    49,   122,
     829,   953,    86,    90,   144,   135,   829,   144,    91,   135,
     144,   947,   948,   949,   950,   999,    79,   969,    91,   975,
      79,   954,   468,    86,   969,   958,    12,    86,   961,   970,
     963,   144,    95,   970,     3,    72,    95,    79,   953,   707,
     616,    79,   741,   742,    86,   972,   745,    26,    86,   748,
     749,    88,    79,    95,   829,   754,   755,    95,   733,    86,
     144,   551,   976,   760,    72,   971,   344,   890,    95,   892,
     193,  1007,   325,    72,   897,  1008,   775,  1010,    93,   778,
      88,   144,  1015,   261,  1017,   144,     4,    72,    79,    88,
     789,   790,   791,    55,  1027,    86,   864,   958,   135,    72,
      79,   954,   144,    88,    95,   719,   144,    86,     0,     1,
       2,     3,    91,   812,   813,    88,    95,   144,   716,   213,
      12,    -1,   639,   246,   247,   954,    -1,   135,    -1,   958,
      -1,   830,   961,   832,   963,   114,   135,    -1,   961,    -1,
     963,    -1,    -1,    -1,    -1,   256,   257,   258,   259,   260,
     135,    -1,   851,   144,    46,   278,   979,   280,    50,    79,
     859,   272,   135,   274,   275,   144,    86,    -1,    52,   868,
      54,    55,   283,    79,    58,    95,    -1,    -1,    -1,  1008,
      86,  1010,    -1,    -1,    -1,  1008,  1015,  1010,  1017,    95,
      -1,    83,    -1,    -1,  1017,    -1,    54,    55,  1027,    -1,
      58,    59,    60,    -1,  1027,   256,   257,   258,   259,   332,
     333,   334,   335,    -1,   337,   338,    -1,    -1,    79,    -1,
      79,    -1,   921,    57,   144,    86,    -1,    86,    -1,   928,
      -1,   930,   124,    67,    95,   346,    95,   936,   144,    -1,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   101,   102,   380,
     969,    -1,   106,    -1,    -1,    -1,    -1,   388,   389,    -1,
      -1,    -1,    -1,   144,    52,   144,    54,    55,   399,    57,
      58,    -1,    -1,    67,    -1,   346,    -1,    -1,    -1,    67,
     351,   412,    -1,   414,    -1,   416,   417,    -1,    52,   420,
      54,    55,    -1,    57,    58,    -1,   427,     0,     1,     2,
       3,     4,    90,    67,   435,   436,   100,   438,    -1,    12,
     104,   105,   455,   101,   102,    -1,    -1,   229,   106,    52,
      -1,    54,    55,    -1,    -1,    58,    90,    -1,    -1,    -1,
     461,   462,    -1,    -1,    -1,    99,   100,   101,   102,    -1,
      -1,    -1,   106,    46,   475,    -1,   477,    50,    -1,   420,
     910,   911,    67,    -1,    -1,   486,    52,    90,    54,    55,
      -1,    -1,    58,    -1,   435,   436,    99,   438,   132,    84,
      85,    -1,   284,   285,    40,    41,    42,    43,    44,   291,
      83,   293,    -1,    -1,    -1,   100,    -1,   102,   300,   104,
     105,    -1,   107,   108,    90,    -1,    -1,   528,   310,    -1,
      -1,    -1,    -1,    99,   475,    -1,   477,    -1,     0,     1,
       2,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,   331,
      12,   124,    -1,   554,   336,    -1,   986,   987,    -1,    -1,
      -1,    -1,   992,    -1,   994,   995,   348,   349,    -1,   351,
      -1,    67,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      -1,    57,    58,    -1,    46,    -1,    -1,   528,    50,    -1,
      -1,    67,  1022,  1023,  1024,  1025,    -1,    -1,    -1,    -1,
      -1,  1031,    -1,    -1,   100,    -1,   388,   389,   104,   105,
     623,   107,   108,   554,    90,    91,    -1,    -1,    -1,   401,
      -1,    83,    -1,    99,   100,   101,   102,    -1,   410,    52,
     106,    54,    55,    -1,    57,    58,   418,    -1,   639,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    67,   661,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,   662,   124,   664,    84,    85,    -1,    90,    91,    -1,
      -1,   672,   673,    -1,    -1,    -1,    99,   100,   101,   102,
     100,    -1,   464,   106,   104,   105,   468,   107,   108,    -1,
      -1,    -1,     0,     1,    -1,    -1,    -1,    -1,   639,    -1,
      -1,    -1,   484,    -1,    12,    -1,    -1,    -1,   490,    -1,
      -1,   284,   285,    -1,   715,    -1,    -1,    -1,   291,    -1,
     293,   662,    -1,   664,    -1,    -1,    -1,   300,    -1,    -1,
      -1,   672,   673,    -1,    -1,    -1,   737,   310,    46,    -1,
      -1,   742,   743,    -1,   745,    -1,    -1,   748,   749,    -1,
      -1,    -1,    -1,   754,   755,    -1,    -1,    -1,   331,    -1,
      -1,    -1,    -1,   336,    -1,   778,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,   715,   348,   349,    -1,    -1,   561,
     781,   782,    -1,   784,   785,    -1,    -1,   788,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   737,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    54,    55,
      -1,    57,    58,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    67,   284,   285,    -1,    -1,    -1,    -1,   401,   291,
      -1,   293,    -1,   834,    -1,    -1,    -1,   410,   300,    -1,
      -1,    -1,   624,   844,    90,   418,    -1,   788,   310,    -1,
     851,    -1,   634,    99,   100,   101,   102,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
      -1,   872,    -1,    -1,   336,    -1,    -1,    -1,   879,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   348,   349,    -1,    -1,
      -1,   464,    -1,   834,    -1,   468,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   688,    -1,    -1,    -1,
       1,   484,    -1,   695,    -1,    -1,    -1,     8,     9,    10,
      -1,   229,    -1,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   879,   401,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,   410,    40,
      41,    42,    43,    44,    -1,    -1,   418,    -1,   740,   741,
     742,    -1,    -1,    -1,    -1,    -1,   748,   749,   969,    -1,
      -1,    -1,   754,   755,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,    -1,   291,    -1,   293,    -1,    -1,   561,    -1,
      -1,    -1,   300,   775,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,   464,    -1,    -1,    -1,   468,   789,   790,   791,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
     124,    -1,   484,   331,   115,    -1,    -1,    -1,   336,    -1,
     812,   813,    -1,    -1,    -1,    -1,    84,    85,   129,    -1,
     348,   132,    -1,   351,    -1,    -1,   137,    -1,   830,    -1,
     832,   624,   100,    -1,   102,    -1,   104,   105,    -1,   107,
     108,   634,    -1,   111,    -1,   113,    -1,    -1,    -1,   851,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   859,    -1,    -1,
     388,   389,    -1,   865,    -1,    -1,   868,    -1,    -1,    -1,
      -1,    -1,    -1,   401,    67,    68,    69,    70,    71,   561,
      73,    74,   410,    -1,    77,    78,    -1,    -1,    -1,    -1,
     418,    84,    85,    -1,    -1,   688,    -1,    -1,    -1,    -1,
      -1,    -1,   695,   905,    -1,   229,    -1,   100,    -1,   102,
      -1,   104,   105,    -1,   107,   108,   109,   110,   111,   921,
     113,    -1,    -1,    -1,    -1,    -1,   928,    -1,   930,    -1,
      -1,    -1,    -1,    -1,   936,    -1,   464,    -1,    -1,    -1,
     468,    -1,   624,    -1,    -1,    -1,    -1,   740,   741,    -1,
      -1,   953,   634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     284,   285,    -1,    -1,    -1,    -1,    -1,   291,    -1,   293,
      -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,    -1,    -1,
      -1,    -1,   775,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   789,   790,   791,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   688,   331,    -1,    -1,
      -1,    -1,   336,   695,    -1,    -1,    -1,    -1,    -1,   812,
     813,    -1,    -1,    -1,   348,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,   832,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   740,   741,
      -1,    -1,    -1,    -1,   388,   389,   859,    -1,    -1,    -1,
      -1,    -1,   865,    -1,    -1,   868,    -1,   401,    -1,    -1,
      -1,    67,    68,    69,    70,    71,   410,    73,    74,    75,
      -1,    77,    78,   775,   418,    -1,   624,    -1,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,   634,   789,   790,   791,
      -1,    -1,   905,    -1,   100,    -1,   102,    -1,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,   113,   921,    -1,
     812,   813,    -1,    -1,    -1,   928,    -1,   930,    -1,    44,
     464,    -1,    -1,   936,   468,    -1,    -1,    -1,   830,    -1,
     832,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     953,    -1,    67,    68,    69,    70,    71,   695,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,   859,    -1,    84,
      85,    -1,    -1,   865,    -1,    -1,   868,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,   104,
     105,    -1,   107,   108,   109,   110,   111,    -1,   113,    -1,
      -1,    -1,    -1,   741,   742,    -1,    -1,    -1,    -1,    -1,
     748,   749,    -1,   905,    -1,    -1,   754,   755,   133,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   921,
      -1,    -1,    -1,    -1,    -1,    -1,   928,   775,   930,    -1,
      -1,    -1,    -1,    -1,   936,    -1,    -1,    -1,    -1,    -1,
      -1,   789,   790,   791,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   953,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   812,   813,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     624,    -1,   830,    -1,   832,    -1,    -1,    -1,    -1,    -1,
     634,    -1,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,     9,    10,   851,    -1,    13,    14,    15,    -1,    17,
      -1,   859,    -1,    -1,    -1,    -1,    -1,   865,    26,    27,
     868,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   695,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,   921,    -1,    -1,    -1,    -1,    86,    -1,
     928,    -1,   930,    91,    92,    -1,    -1,    -1,   936,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   741,   742,    -1,
      -1,    -1,    -1,    -1,   748,   749,   114,   115,    -1,    -1,
     754,   755,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,   129,    73,    74,   132,    -1,    77,    78,    -1,   137,
      -1,   775,    -1,    84,    85,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   789,   790,   791,    -1,   100,
      -1,   102,    -1,   104,   105,    -1,   107,   108,   109,   110,
     111,    -1,   113,    -1,    -1,    -1,    -1,    -1,   812,   813,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,   832,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   851,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   859,     0,     1,    -1,     3,
       4,     5,     6,     7,   868,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,   921,    62,    63,
      64,    65,    66,    -1,   928,    -1,   930,    -1,    -1,    -1,
      -1,    -1,   936,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,    -1,
      -1,   145,   146,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    15,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,    -1,    -1,   145,   146,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,    -1,    -1,   145,   146,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    15,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,   132,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,    -1,    -1,   145,
     146,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,    -1,    -1,   145,   146,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,    -1,
      -1,   145,   146,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,    -1,    -1,   145,   146,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    -1,    15,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,    -1,    -1,   145,   146,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,   132,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,    -1,    -1,   145,
     146,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    -1,    92,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,    -1,    -1,   145,   146,     1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    92,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,    -1,
      -1,   145,   146,     1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,    -1,    -1,   145,   146,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    11,
      12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,    -1,    -1,    -1,   137,   138,    -1,   140,   141,
     142,    -1,    -1,   145,   146,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,   129,   130,   131,   132,    -1,    -1,    -1,
      -1,   137,   138,    -1,   140,   141,   142,    -1,    -1,   145,
     146,     1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,     0,     1,   145,   146,    -1,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    88,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,    -1,   139,     0,     1,    -1,    -1,   144,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    88,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,    -1,   139,     0,     1,    -1,    -1,   144,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    88,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,    -1,   139,     0,     1,    -1,    -1,   144,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,    -1,   139,     0,     1,    -1,    -1,   144,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,    -1,   139,     0,     1,    -1,    -1,   144,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    88,    89,    -1,    -1,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,   134,   135,    -1,
     137,    -1,   139,     0,     1,    -1,    -1,   144,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    -1,    89,    -1,    91,    92,    -1,    -1,    95,    96,
      -1,    98,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,    -1,   135,    -1,
     137,     0,     1,    -1,    -1,    -1,    -1,   144,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    84,    85,    86,    -1,    -1,
      89,    -1,    -1,    92,    -1,    -1,    95,    96,    -1,    98,
      -1,   100,    -1,   102,    -1,   104,   105,    -1,   107,   108,
     109,   110,   111,    -1,   113,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,   132,   133,   134,   135,    -1,   137,    -1,
     139,     0,     1,    -1,    -1,   144,    -1,    -1,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    84,    85,    86,    -1,    -1,
      89,    -1,    91,    92,    -1,    -1,    95,    96,    -1,    98,
      -1,   100,    -1,   102,    -1,   104,   105,    -1,   107,   108,
     109,   110,   111,    -1,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,   132,   133,    -1,   135,    -1,   137,     0,
       1,    -1,    -1,    -1,    -1,   144,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    84,    85,    86,    -1,    -1,    89,    -1,
      91,    92,    -1,    -1,    95,    96,    -1,    98,    -1,   100,
      -1,   102,    -1,   104,   105,    -1,   107,   108,   109,   110,
     111,    -1,   113,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,   132,   133,    -1,   135,    -1,   137,     0,     1,    -1,
      -1,    -1,    -1,   144,    -1,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    85,    86,    -1,    88,    -1,    -1,    -1,    92,
      -1,    -1,    95,    -1,    -1,    -1,    -1,   100,    -1,   102,
      -1,   104,   105,    -1,   107,   108,   109,   110,   111,    -1,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,   132,
     133,    -1,   135,    -1,   137,     0,     1,    -1,    -1,    -1,
      -1,   144,    -1,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    84,
      85,    86,    -1,    88,    -1,    -1,    -1,    92,    -1,    -1,
      95,    -1,    -1,    -1,    -1,   100,    -1,   102,    -1,   104,
     105,    -1,   107,   108,   109,   110,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,    -1,    -1,   132,   133,    -1,
     135,    -1,   137,     0,     1,    -1,    -1,    -1,    -1,   144,
      -1,     8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,
      17,    67,    68,    69,    70,    71,    -1,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    -1,    -1,    84,    85,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,   102,    -1,   104,   105,
      -1,   107,   108,   109,   110,   111,    -1,   113,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    85,    86,
      -1,    88,    -1,    -1,    -1,    92,    -1,    -1,    95,    -1,
      -1,    -1,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   132,   133,    -1,   135,    -1,
     137,     0,     1,    -1,    -1,    -1,    -1,   144,    -1,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    84,    85,    86,    -1,    88,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,   100,    -1,   102,    -1,   104,   105,    -1,   107,   108,
     109,   110,   111,    -1,   113,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,    -1,    -1,   132,   133,    -1,   135,    -1,   137,     3,
       4,     5,     6,     7,    -1,   144,    -1,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,    -1,    -1,   137,   138,    -1,   140,   141,   142,    -1,
      -1,   145,   146,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,    -1,    -1,    -1,    -1,    -1,   137,   138,    -1,
     140,   141,   142,    -1,    -1,   145,   146,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,     3,
       4,     5,   138,     7,   140,   141,   142,    11,    12,   145,
     146,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,   132,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    99,    -1,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,   140,   141,
     142,    -1,    -1,   145,   146,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,    -1,    -1,    -1,     3,     4,     5,
     138,     7,   140,   141,   142,    11,    12,   145,   146,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    99,    -1,   101,    -1,   103,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,     3,
       4,     5,   138,     7,   140,   141,   142,    11,    12,   145,
     146,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    -1,    -1,   101,
      -1,   103,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,     3,     4,     5,   138,     7,   140,   141,
     142,    11,    12,   145,   146,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,    -1,    -1,    -1,     3,     4,     5,   138,     7,
     140,   141,   142,    11,    12,   145,   146,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,    -1,    -1,    -1,   137,
     138,    -1,   140,   141,   142,    -1,    -1,   145,   146,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
     132,    -1,    -1,     3,     4,     5,   138,     7,   140,   141,
     142,    11,    12,   145,   146,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    91,    -1,    93,    94,    -1,    -1,    97,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,    -1,    -1,    -1,     3,     4,     5,   138,     7,
     140,   141,   142,    11,    12,   145,   146,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    99,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,    -1,    -1,    -1,     3,     4,     5,
     138,     7,   140,   141,   142,    11,    12,   145,   146,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    99,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,     3,
       4,     5,   138,     7,   140,   141,   142,    11,    12,   145,
     146,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    99,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,     3,     4,     5,   138,     7,   140,   141,
     142,    11,    12,   145,   146,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,    -1,    -1,    -1,     3,     4,     5,   138,     7,
     140,   141,   142,    11,    12,   145,   146,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,    -1,    -1,    -1,     3,     4,     5,
     138,     7,   140,   141,   142,    11,    12,   145,   146,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,     3,
       4,     5,   138,     7,   140,   141,   142,    11,    12,   145,
     146,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    44,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    66,    -1,    67,    68,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    -1,    84,    84,    85,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    -1,    -1,   100,
      -1,   102,    -1,   104,   105,    -1,   107,   108,   109,   110,
     111,    -1,   113,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,   133,     3,     4,     5,   138,     7,   140,   141,
     142,    11,    12,   145,   146,    -1,    16,    -1,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    66,    -1,    67,    68,
      69,    70,    71,    -1,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    -1,    -1,    84,    85,    87,    -1,    -1,
      90,    -1,    -1,    93,    94,    -1,    -1,    97,    -1,    99,
      -1,   100,    -1,   102,    -1,   104,   105,    -1,   107,   108,
     109,   110,   111,    -1,   113,    -1,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
     130,   131,    -1,   132,   133,     3,     4,     5,   138,     7,
     140,   141,   142,    11,    12,   145,   146,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    66,    -1,
      67,    68,    69,    70,    71,    -1,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    -1,    -1,    84,    85,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    -1,    -1,   100,    -1,   102,    -1,   104,   105,    -1,
     107,   108,   109,   110,   111,    -1,   113,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,    -1,    -1,   133,   135,    -1,    -1,
     138,    -1,   140,   141,   142,    -1,    -1,   145,   146,     3,
       4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,   135,    -1,    -1,   138,    -1,   140,   141,
     142,    -1,    -1,   145,   146,     3,     4,     5,    -1,     7,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    90,    -1,    -1,    93,    94,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,   130,   131,    -1,    -1,    -1,     3,     4,     5,
     138,     7,   140,   141,   142,    11,    12,   145,   146,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    90,    -1,    -1,    93,    94,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,   130,   131,    -1,    -1,    -1,     3,
       4,     5,   138,     7,   140,   141,   142,    11,    12,   145,
     146,    -1,    16,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    90,    -1,    -1,    93,
      94,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,   130,   131,    -1,    -1,
      -1,     3,     4,     5,   138,     7,   140,   141,   142,    11,
      12,   145,   146,    -1,    16,    -1,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    94,    -1,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,   130,   131,
      -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,   140,   141,
     142,    -1,    -1,   145,   146,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    -1,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,   116,   117,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,
      69,    70,    71,    -1,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      99,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    -1,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,   116,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    -1,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    52,    53,
     116,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    -1,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      52,    53,   116,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      -1,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    52,    53,   116,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    -1,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    52,    53,   116,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    -1,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    52,    53,   116,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    -1,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    52,    53,
     116,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    -1,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      52,    53,   116,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      -1,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    52,    53,   116,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    -1,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    52,    53,   116,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    -1,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    52,    53,   116,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    -1,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    52,    53,
     116,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    -1,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      52,    53,   116,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    65,    -1,    67,    68,    69,    70,    71,
      -1,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
      82,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    52,    53,   116,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      70,    71,    -1,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,    82,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    52,    53,   116,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    70,    71,    -1,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    -1,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    52,    53,   116,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    70,    71,    -1,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    82,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    52,    53,
     116,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    70,    71,    -1,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,   116
  };

  const unsigned short
  parser::yystos_[] =
  {
       0,     1,     3,     4,     5,     6,     7,    11,    12,    16,
      18,    19,    20,    21,    22,    23,    24,    30,    31,    32,
      33,    34,    35,    36,    39,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    58,    59,    60,
      62,    63,    64,    65,    66,    87,    90,    93,    94,    97,
      99,   103,   112,   117,   118,   119,   120,   122,   123,   124,
     125,   130,   131,   138,   140,   141,   142,   145,   146,   149,
     150,   151,   152,   157,   159,   161,   163,   164,   166,   167,
     168,   170,   171,   172,   174,   175,   185,   200,   218,   241,
     242,   256,   257,   258,   259,   260,   261,   262,   265,   267,
     268,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     317,   152,    21,    22,    30,    31,    32,    39,    46,    52,
      56,    66,    84,    87,    90,   166,   176,   177,   200,   218,
     281,   282,   285,   177,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    56,    64,    65,
      67,    68,    69,    70,    71,    73,    74,    77,    78,    82,
      83,    84,    85,    91,    99,   100,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   116,   178,
     183,   184,   283,   313,    33,    34,    35,    36,    49,    50,
      51,    52,    56,   178,   179,   180,   181,   277,   278,   201,
      87,   161,   162,   175,   218,   281,   282,   284,   285,   162,
     132,   137,   162,   322,   327,   328,   205,   207,    87,   168,
     175,   218,   223,   281,   282,   285,    57,    99,   101,   106,
     112,   118,   167,   185,   186,   192,   195,   197,   315,   316,
     192,   192,    91,   193,   194,    91,   189,   193,    91,   132,
     323,    54,   180,   323,   114,   114,   185,   218,   185,   280,
      56,     1,    47,    90,   154,   155,   156,   157,   169,   170,
     202,   204,   187,   197,   315,   330,   186,   314,   315,    87,
     135,   174,   218,   281,   282,   285,   185,   163,   185,   272,
     271,   272,   273,   263,   269,   266,   270,   235,   236,     0,
     322,   328,    40,    41,    42,    43,    44,    37,    38,    26,
     114,   189,   193,   243,    28,   240,    72,   135,    90,    99,
     171,    72,    67,    68,    69,    70,    71,    73,    74,    75,
      76,    77,    78,    80,    81,    84,    85,   100,   102,   104,
     105,   107,   108,   109,   110,   111,   113,   133,    79,    86,
      95,   144,   321,    86,   320,   321,   243,   259,    88,    88,
     323,   280,   161,    52,    56,   176,   109,   286,    86,    95,
     321,   214,   161,   215,   320,   135,   153,   154,    56,    13,
     219,   327,    72,    86,    95,   321,    88,    88,   219,   322,
      17,   250,   137,   162,   162,    56,    86,    95,   321,    25,
     186,   186,   186,   186,   271,    89,   135,   196,   135,   196,
     192,   323,   324,   192,   191,   192,   197,   315,   161,   324,
     161,    54,    59,    60,   158,    91,   185,   150,   154,    86,
     321,    67,    88,   157,   114,   169,    92,   322,   328,     1,
     324,   157,   323,    96,   132,   135,   326,   135,   326,   115,
     326,    56,   171,   173,   135,    86,    95,   321,    61,   126,
     127,   128,   274,   128,   274,   128,   128,   274,   128,   264,
     274,    61,   128,   128,   264,    61,   128,    52,    54,    55,
      57,    58,    67,    90,    91,    99,   100,   101,   102,   106,
     238,   289,   291,   292,   293,   294,   295,   296,   297,   298,
     301,   302,   303,   304,   307,   308,   309,   310,   311,   152,
     162,   162,   162,   162,   157,   161,   161,   247,   248,   244,
     245,    98,   165,   247,    99,   163,   186,   197,   198,   199,
     169,   135,   174,   135,   159,   160,   163,   175,   185,   186,
     188,   199,   218,   285,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
      52,    53,    56,   183,   189,   318,   319,   191,    52,    53,
      56,   183,   189,   318,    52,    56,   318,   160,   185,   188,
     160,   188,   327,   287,   211,    52,    56,   176,   318,   191,
     318,   153,   324,    91,   288,   291,   216,   182,    10,     8,
     252,   154,    13,    52,    56,   191,    52,    56,   154,   250,
     197,    10,    27,   220,   327,   220,    52,    56,   191,    52,
      56,   209,   143,   186,    99,   186,   195,   315,   316,   324,
      92,   324,   135,   135,   324,   180,   161,   115,   115,   185,
     188,   150,   324,   156,   157,   203,    92,   315,   135,   173,
      52,    56,   191,    52,    56,   275,    54,    55,    58,   276,
     285,   121,   136,   274,   136,   136,   136,    90,    99,   224,
     225,   226,   293,   291,   237,    72,   135,   290,   186,   135,
     312,    52,   135,   312,   135,   290,    52,   135,   290,    52,
      10,   249,   115,   246,   244,    10,   186,   135,   324,   173,
     135,    44,    72,    44,    86,    95,   321,   323,    88,    88,
     189,   193,   323,   325,    88,    88,   189,   190,   193,   190,
     193,   212,   162,   153,   325,    10,   291,   153,   327,   178,
     180,   186,   199,   253,   330,    15,   222,   329,    14,   221,
     222,    88,    88,   325,    88,    88,   222,    10,   135,   219,
     206,   208,   325,   162,   186,   186,   196,   315,   324,   115,
     324,   326,   171,   325,   154,   226,   135,   293,   135,   324,
     232,   323,    29,   139,   239,   186,   289,   295,   307,   309,
     298,   303,   311,   296,   304,   309,   294,   296,    76,   111,
     230,   231,   230,   115,    99,   186,   173,   157,   185,    52,
      56,   191,    52,    56,   134,   160,   188,   160,   188,   165,
      96,    88,   160,   188,   160,   188,   165,   243,   240,   213,
     327,    10,   324,    10,   217,    89,   254,   154,     9,   255,
     162,    10,    88,    10,   186,   154,   154,   154,   220,   135,
     129,   324,   225,   135,    99,   224,    92,   137,   154,   154,
     135,   290,   135,   290,   312,   135,   290,   135,   290,   290,
     227,   229,   232,   294,   296,   297,   299,   300,   303,   305,
     306,   309,   311,   153,   153,   186,   325,   185,   160,   188,
     153,   288,    87,   175,   218,   281,   282,   285,   219,   154,
     219,   222,   250,   251,    10,    10,   210,   135,   225,   135,
     293,    52,   233,   234,   292,    10,   115,   296,   309,   296,
     296,   232,   111,    72,   135,   228,    87,   218,   135,   312,
     312,   135,   228,   135,   228,    10,   153,    56,    86,    95,
     321,   154,   154,   154,   225,   135,   135,   323,   290,   135,
     290,   290,   290,   111,   218,   227,   306,   309,    56,    86,
     299,   303,   296,   305,   309,   296,    10,    52,    56,   191,
      52,    56,   252,   221,    10,   225,   234,   296,   135,   228,
     135,   228,    52,    56,   312,   135,   228,   135,   228,   228,
     325,   290,   296,   309,   296,   296,   228,   135,   228,   228,
     228,   296,   228
  };

  const unsigned short
  parser::yyr1_[] =
  {
       0,   148,   149,   150,   151,   151,   151,   151,   152,   152,
     153,   154,   155,   155,   155,   155,   155,   156,   156,   158,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   161,   161,   161,
     161,   161,   161,   162,   163,   163,   164,   164,   165,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   169,   169,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   177,   178,   178,   178,   178,   178,   179,
     179,   180,   180,   181,   182,   181,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   186,
     187,   187,   187,   187,   188,   188,   189,   190,   190,   191,
     191,   191,   191,   191,   192,   192,   192,   192,   192,   194,
     193,   195,   196,   196,   197,   197,   197,   197,   198,   198,
     199,   199,   199,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   200,   202,   203,   200,   204,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   205,
     206,   200,   207,   208,   200,   200,   200,   209,   210,   200,
     211,   200,   212,   213,   200,   214,   200,   215,   200,   216,
     217,   200,   200,   200,   200,   200,   218,   219,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   227,   227,   227,   227,   228,   228,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   230,   230,   231,   231,   231,   232,   232,   233,
     233,   234,   234,   236,   237,   235,   238,   238,   239,   239,
     240,   241,   241,   241,   241,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   243,   243,   245,   246,   244,   248,
     249,   247,   250,   251,   251,   252,   252,   253,   253,   253,
     254,   254,   255,   255,   256,   256,   256,   257,   258,   258,
     259,   259,   259,   260,   261,   262,   263,   263,   264,   264,
     265,   266,   266,   267,   268,   269,   269,   270,   270,   271,
     271,   272,   272,   273,   273,   274,   274,   275,   274,   276,
     276,   276,   276,   277,   278,   279,   279,   280,   280,   280,
     280,   280,   280,   281,   281,   281,   281,   281,   282,   282,
     282,   282,   282,   282,   282,   283,   283,   284,   284,   285,
     285,   287,   286,   286,   288,   288,   289,   289,   289,   289,
     290,   290,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   292,   292,   292,
     293,   293,   294,   295,   295,   296,   296,   297,   298,   298,
     299,   299,   300,   300,   301,   301,   302,   302,   303,   303,
     304,   305,   306,   306,   307,   307,   308,   308,   309,   309,
     310,   310,   311,   311,   312,   312,   313,   313,   314,   314,
     315,   315,   316,   316,   316,   316,   317,   317,   317,   318,
     318,   318,   318,   319,   319,   319,   320,   320,   321,   321,
     322,   322,   323,   323,   324,   325,   326,   326,   326,   327,
     327,   328,   328,   329,   330
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     1,     2,     0,     1,     3,     2,     1,     4,
       4,     2,     0,     1,     3,     2,     2,     1,     4,     0,
       4,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       4,     1,     3,     3,     3,     1,     3,     3,     6,     5,
       5,     5,     5,     3,     1,     3,     1,     1,     3,     3,
       3,     2,     1,     1,     1,     1,     1,     4,     3,     1,
       2,     3,     4,     5,     4,     5,     2,     2,     2,     2,
       2,     1,     3,     1,     3,     1,     2,     3,     5,     2,
       4,     2,     4,     1,     3,     1,     3,     2,     3,     1,
       3,     1,     1,     4,     3,     3,     3,     3,     2,     1,
       1,     1,     4,     3,     3,     3,     3,     2,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       5,     5,     5,     5,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     3,     3,     3,     3,     3,     6,     1,     1,
       1,     2,     4,     2,     1,     3,     3,     0,     1,     0,
       1,     2,     4,     2,     1,     2,     2,     4,     1,     0,
       2,     2,     2,     0,     1,     2,     3,     4,     1,     1,
       3,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     0,     5,     0,
       4,     3,     3,     2,     3,     3,     1,     4,     3,     1,
       5,     4,     3,     2,     1,     2,     2,     6,     6,     0,
       0,     7,     0,     0,     7,     5,     4,     0,     0,     9,
       0,     6,     0,     0,     8,     0,     5,     0,     6,     0,
       0,     9,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     5,     1,     2,     1,     1,     1,     3,
       1,     3,     1,     4,     6,     3,     5,     2,     4,     1,
       3,     4,     2,     2,     1,     2,     0,     6,     8,     4,
       6,     4,     2,     6,     2,     4,     6,     2,     4,     2,
       4,     1,     0,     1,     3,     1,     4,     1,     4,     1,
       3,     1,     1,     0,     0,     4,     4,     1,     3,     3,
       3,     2,     4,     5,     5,     2,     4,     4,     3,     3,
       3,     2,     1,     4,     3,     3,     0,     0,     4,     0,
       0,     4,     5,     1,     1,     6,     0,     1,     1,     1,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       3,     1,     1,     3,     4,     3,     0,     3,     1,     2,
       3,     0,     3,     3,     3,     0,     3,     0,     3,     0,
       2,     0,     2,     0,     2,     1,     2,     0,     4,     1,
       1,     1,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     0,     3,     2,     4,     2,     2,     1,
       2,     0,     6,     8,     4,     6,     4,     6,     2,     4,
       6,     2,     4,     2,     4,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     2,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     2,     1,
       3,     3,     1,     3,     1,     3,     1,     1,     2,     1,
       1,     1,     2,     1,     2,     0,     1,     3,     0,     2,
       1,     3,     3,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     2,     2,     0,     1,     1,     1,
       1,     1,     2,     0,     0
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "kCLASS", "kMODULE", "kDEF", "kUNDEF",
  "kBEGIN", "kRESCUE", "kENSURE", "kEND", "kIF", "kUNLESS", "kTHEN",
  "kELSIF", "kELSE", "kCASE", "kWHEN", "kWHILE", "kUNTIL", "kFOR",
  "kBREAK", "kNEXT", "kREDO", "kRETRY", "kIN", "kDO", "kDO_COND",
  "kDO_BLOCK", "kDO_LAMBDA", "kRETURN", "kYIELD", "kSUPER", "kSELF",
  "kNIL", "kTRUE", "kFALSE", "kAND", "kOR", "kNOT", "kIF_MOD",
  "kUNLESS_MOD", "kWHILE_MOD", "kUNTIL_MOD", "kRESCUE_MOD", "kALIAS",
  "kDEFINED", "klBEGIN", "klEND", "k__LINE__", "k__FILE__",
  "k__ENCODING__", "tIDENTIFIER", "tFID", "tGVAR", "tIVAR", "tCONSTANT",
  "tLABEL", "tCVAR", "tNTH_REF", "tBACK_REF", "tSTRING_CONTENT",
  "tINTEGER", "tFLOAT", "tUPLUS", "tUMINUS", "tUNARY_OP", "tPOW", "tCMP",
  "tEQ", "tEQQ", "tNEQ", "tEQL", "tGEQ", "tLEQ", "tANDOP", "tOROP",
  "tMATCH", "tNMATCH", "tDOT", "tDOT2", "tDOT3", "tAREF", "tASET",
  "tLSHFT", "tRSHFT", "tCOLON2", "tCOLON3", "tOP_ASGN", "tASSOC",
  "tLPAREN", "tLPAREN2", "tRPAREN", "tLPAREN_ARG", "tLBRACK", "tLBRACK2",
  "tRBRACK", "tLBRACE", "tLBRACE_ARG", "tSTAR", "tSTAR2", "tAMPER",
  "tAMPER2", "tTILDE", "tPERCENT", "tDIVIDE", "tDSTAR", "tPLUS", "tMINUS",
  "tLT", "tGT", "tPIPE", "tBANG", "tCARET", "tLCURLY", "tRCURLY",
  "tBACK_REF2", "tSYMBEG", "tSTRING_BEG", "tXSTRING_BEG", "tREGEXP_BEG",
  "tREGEXP_OPT", "tWORDS_BEG", "tQWORDS_BEG", "tSYMBOLS_BEG",
  "tQSYMBOLS_BEG", "tSTRING_DBEG", "tSTRING_DVAR", "tSTRING_END",
  "tSTRING_DEND", "tSTRING", "tSYMBOL", "tNL", "tEH", "tCOLON", "tCOMMA",
  "tSPACE", "tSEMI", "tLAMBDA", "tLAMBEG", "tCHARACTER", "tRATIONAL",
  "tIMAGINARY", "tLABEL_END", "tANDDOT", "tRATIONAL_IMAGINARY",
  "tFLOAT_IMAGINARY", "tLOWEST", "$accept", "program", "top_compstmt",
  "top_stmts", "top_stmt", "bodystmt", "compstmt", "stmts",
  "stmt_or_begin", "stmt", "$@1", "command_asgn", "command_rhs", "expr",
  "expr_value", "command_call", "block_command", "cmd_brace_block",
  "fcall", "command", "mlhs", "mlhs_inner", "mlhs_basic", "mlhs_item",
  "mlhs_head", "mlhs_post", "mlhs_node", "lhs", "cname", "cpath", "fname",
  "fsym", "fitem", "undef_list", "$@2", "op", "reswords", "arg",
  "arg_value", "aref_args", "arg_rhs", "paren_args", "opt_paren_args",
  "opt_call_args", "call_args", "command_args", "@3", "block_arg",
  "opt_block_arg", "args", "mrhs_arg", "mrhs", "primary", "@4", "@5",
  "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "@14", "@15",
  "@16", "@17", "@18", "$@19", "@20", "primary_value", "then", "do",
  "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list", "f_margs",
  "block_args_tail", "opt_block_args_tail", "block_param",
  "opt_block_param", "block_param_def", "opt_bv_decl", "bv_decls", "bvar",
  "lambda", "$@21", "@22", "f_larglist", "lambda_body", "do_block",
  "block_call", "methodCall", "brace_block", "brace_body", "$@23", "@24",
  "do_body", "$@25", "@26", "case_body", "cases", "opt_rescue", "excList",
  "excVar", "opt_ensure", "literal", "strings", "string", "string1",
  "xstring", "regexp", "words", "word_list", "word", "symbols",
  "symbol_list", "qwords", "qsymbols", "qword_list", "qsym_list",
  "string_contents", "xstring_contents", "regexp_contents",
  "string_content", "$@27", "string_dvar", "symbol", "dsym", "numeric",
  "simple_numeric", "user_variable", "keyword_variable", "var_ref",
  "var_lhs", "backref", "superclass", "$@28", "f_arglist", "args_tail",
  "opt_args_tail", "f_args", "f_bad_arg", "f_norm_arg", "f_arg_asgn",
  "f_arg_item", "f_arg", "f_label", "f_kw", "f_block_kw", "f_block_kwarg",
  "f_kwarg", "kwrest_mark", "f_kwrest", "f_opt", "f_block_opt",
  "f_block_optarg", "f_optarg", "restarg_mark", "f_rest_arg",
  "blkarg_mark", "f_block_arg", "opt_f_block_arg", "singleton",
  "assoc_list", "assocs", "assoc", "operation", "operation2", "operation3",
  "dot_or_colon", "call_op", "opt_terms", "opt_nl", "rparen", "rbracket",
  "trailer", "term", "terms", "none", "list_none", YY_NULLPTR
  };

#if TYPEDRUBY25DEBUG
  const unsigned short
  parser::yyrline_[] =
  {
       0,   426,   426,   431,   437,   440,   444,   449,   454,   455,
     460,   478,   484,   487,   491,   496,   500,   505,   506,   514,
     513,   521,   525,   529,   534,   538,   542,   546,   550,   554,
     560,   564,   565,   569,   573,   577,   579,   583,   588,   593,
     598,   603,   609,   614,   620,   621,   627,   629,   630,   634,
     638,   642,   646,   648,   650,   651,   653,   654,   659,   667,
     669,   673,   684,   688,   699,   703,   714,   718,   723,   727,
     731,   736,   740,   745,   749,   754,   755,   761,   767,   774,
     780,   787,   791,   797,   801,   808,   809,   814,   818,   825,
     829,   836,   841,   846,   850,   854,   858,   862,   867,   872,
     878,   883,   888,   892,   896,   900,   904,   909,   914,   920,
     925,   927,   931,   935,   940,   940,   940,   941,   942,   944,
     948,   950,   951,   953,   958,   957,   968,   968,   968,   968,
     968,   968,   969,   969,   969,   969,   969,   969,   970,   970,
     970,   970,   970,   970,   971,   971,   971,   971,   971,   971,
     972,   972,   972,   972,   972,   972,   974,   974,   974,   974,
     974,   975,   975,   975,   975,   975,   976,   976,   976,   976,
     976,   977,   977,   977,   977,   977,   978,   978,   978,   978,
     978,   979,   979,   979,   979,   979,   980,   980,   980,   980,
     980,   981,   981,   981,   981,   981,   982,   984,   988,   993,
     998,  1003,  1008,  1013,  1019,  1025,  1030,  1034,  1038,  1042,
    1046,  1050,  1054,  1058,  1062,  1066,  1070,  1074,  1078,  1082,
    1086,  1090,  1094,  1098,  1102,  1106,  1110,  1114,  1118,  1123,
    1127,  1131,  1135,  1139,  1143,  1147,  1151,  1155,  1159,  1161,
    1163,  1164,  1165,  1171,  1176,  1177,  1183,  1189,  1192,  1195,
    1198,  1199,  1200,  1206,  1211,  1215,  1221,  1227,  1234,  1239,
    1239,  1249,  1254,  1259,  1263,  1267,  1271,  1277,  1284,  1288,
    1290,  1296,  1302,  1307,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1322,  1321,  1332,  1337,  1331,  1346,
    1345,  1353,  1357,  1361,  1365,  1369,  1373,  1377,  1382,  1388,
    1393,  1397,  1401,  1405,  1417,  1418,  1428,  1439,  1446,  1454,
    1458,  1453,  1466,  1470,  1465,  1477,  1486,  1496,  1500,  1495,
    1508,  1507,  1534,  1538,  1533,  1553,  1552,  1573,  1572,  1589,
    1593,  1588,  1610,  1614,  1618,  1622,  1627,  1629,  1630,  1631,
    1636,  1637,  1639,  1640,  1652,  1656,  1661,  1662,  1664,  1668,
    1673,  1677,  1684,  1685,  1691,  1698,  1704,  1711,  1715,  1721,
    1725,  1732,  1739,  1745,  1751,  1757,  1762,  1766,  1774,  1783,
    1790,  1798,  1805,  1806,  1814,  1826,  1833,  1841,  1847,  1854,
    1860,  1867,  1870,  1874,  1879,  1884,  1889,  1897,  1901,  1906,
    1910,  1917,  1923,  1929,  1933,  1929,  1948,  1955,  1961,  1965,
    1970,  1978,  1989,  1997,  2012,  2020,  2028,  2036,  2044,  2048,
    2056,  2064,  2072,  2076,  2081,  2088,  2096,  2099,  2096,  2112,
    2115,  2112,  2127,  2134,  2138,  2140,  2158,  2162,  2166,  2167,
    2169,  2174,  2178,  2183,  2187,  2188,  2189,  2191,  2196,  2200,
    2207,  2212,  2217,  2222,  2228,  2235,  2241,  2244,  2251,  2255,
    2262,  2268,  2271,  2278,  2283,  2289,  2292,  2300,  2303,  2311,
    2314,  2322,  2325,  2333,  2336,  2343,  2347,  2352,  2351,  2363,
    2367,  2371,  2375,  2378,  2384,  2390,  2394,  2399,  2404,  2409,
    2414,  2419,  2424,  2430,  2434,  2438,  2442,  2446,  2451,  2455,
    2459,  2463,  2467,  2471,  2475,  2480,  2484,  2489,  2494,  2500,
    2504,  2510,  2509,  2518,  2522,  2527,  2533,  2540,  2546,  2552,
    2557,  2562,  2566,  2574,  2583,  2590,  2598,  2605,  2613,  2619,
    2626,  2634,  2641,  2648,  2654,  2661,  2666,  2670,  2675,  2680,
    2686,  2687,  2694,  2699,  2703,  2708,  2712,  2719,  2730,  2734,
    2739,  2743,  2748,  2752,  2759,  2763,  2770,  2770,  2772,  2782,
    2789,  2794,  2799,  2803,  2810,  2814,  2821,  2821,  2823,  2833,
    2840,  2840,  2842,  2852,  2859,  2864,  2868,  2869,  2875,  2878,
    2880,  2884,  2891,  2895,  2899,  2903,  2908,  2908,  2908,  2909,
    2909,  2909,  2909,  2910,  2910,  2910,  2911,  2911,  2912,  2918,
    2924,  2924,  2925,  2925,  2926,  2930,  2934,  2934,  2934,  2936,
    2940,  2942,  2943,  2946,  2951
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // TYPEDRUBY25DEBUG

  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,     2,   147
    };
    const unsigned user_token_number_max_ = 1146;
    const token_number_type undef_token_ = 2;

    if (static_cast<int> (t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }

#line 26 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:1242
} } } // ruby_parser::bison::typedruby25
#line 9993 "typedruby.tab.cpp" // lalr1.cc:1242
#line 2955 "third_party/parser/cc/grammars/typedruby.ypp" // lalr1.cc:1243

