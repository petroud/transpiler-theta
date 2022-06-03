/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myanalyzer.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "cgen.h"

    extern int yylex(void);
    extern int line_num;

#line 79 "myanalyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_VOID = 258,
    KW_INTEGER = 259,
    KW_REAL = 260,
    KW_STR = 261,
    KW_BOOLEAN = 262,
    KW_TRUE = 263,
    KW_FALSE = 264,
    KW_CONST = 265,
    KW_IF = 266,
    KW_ELSE = 267,
    KW_ENDIF = 268,
    KW_FOR = 269,
    KW_IN = 270,
    KW_ENDFOR = 271,
    KW_WHILE = 272,
    KW_ENDWHILE = 273,
    KW_BREAK = 274,
    KW_CONTINUE = 275,
    KW_DEF = 276,
    KW_ENDDEF = 277,
    KW_MAIN = 278,
    KW_RETURN = 279,
    SEMICOLON = 280,
    L_PARENTHESIS = 281,
    R_PARENTHESIS = 282,
    COMMA = 283,
    L_BRACKET = 284,
    R_BRACKET = 285,
    COLON = 286,
    OP_PLUS = 287,
    OP_MINUS = 288,
    OP_MUL = 289,
    OP_DIV = 290,
    OP_MOD = 291,
    OP_POW = 292,
    OP_EQ = 293,
    OP_NEQ = 294,
    OP_LESS = 295,
    OP_LESSEQ = 296,
    OP_GREATER = 297,
    OP_GREATEREQ = 298,
    OP_AND = 299,
    OP_OR = 300,
    OP_NOT = 301,
    OP_ASSIGN = 302,
    OP_ASSIGN_INCR = 303,
    OP_ASSIGN_DEC = 304,
    OP_ASSIGN_MUL = 305,
    OP_ASSIGN_DIV = 306,
    OP_ASSIGN_MOD = 307,
    FUNC_RSTR = 308,
    FUNC_RINT = 309,
    FUNC_RSCAL = 310,
    FUNC_WSTR = 311,
    FUNC_WINT = 312,
    FUNC_WSCAL = 313,
    FUNC_WRT = 314,
    TK_IDENTIFIER = 315,
    TK_INTEGER = 316,
    TK_REAL = 317,
    TK_STRING = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "myanalyzer.y"

    char* str;

#line 199 "myanalyzer.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

#define YYUNDEFTOK  2
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   148,   148,   162,   163,   164,   165,   169,   170,   175,
     176,   180,   181,   185,   186,   194,   199,   200,   209,   213,
     214,   217,   218,   222,   223,   224,   225,   226,   233,   236,
     242,   243,   244,   249,   250,   258,   259,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   277,   281,   285,   286,
     287,   292,   294,   298,   303,   305,   310,   311,   316,   317,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   356,   357,   358,   359,   360,   361,   362,   367,   368,
     369
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_VOID", "KW_INTEGER", "KW_REAL",
  "KW_STR", "KW_BOOLEAN", "KW_TRUE", "KW_FALSE", "KW_CONST", "KW_IF",
  "KW_ELSE", "KW_ENDIF", "KW_FOR", "KW_IN", "KW_ENDFOR", "KW_WHILE",
  "KW_ENDWHILE", "KW_BREAK", "KW_CONTINUE", "KW_DEF", "KW_ENDDEF",
  "KW_MAIN", "KW_RETURN", "SEMICOLON", "L_PARENTHESIS", "R_PARENTHESIS",
  "COMMA", "L_BRACKET", "R_BRACKET", "COLON", "OP_PLUS", "OP_MINUS",
  "OP_MUL", "OP_DIV", "OP_MOD", "OP_POW", "OP_EQ", "OP_NEQ", "OP_LESS",
  "OP_LESSEQ", "OP_GREATER", "OP_GREATEREQ", "OP_AND", "OP_OR", "OP_NOT",
  "OP_ASSIGN", "OP_ASSIGN_INCR", "OP_ASSIGN_DEC", "OP_ASSIGN_MUL",
  "OP_ASSIGN_DIV", "OP_ASSIGN_MOD", "FUNC_RSTR", "FUNC_RINT", "FUNC_RSCAL",
  "FUNC_WSTR", "FUNC_WINT", "FUNC_WSCAL", "FUNC_WRT", "TK_IDENTIFIER",
  "TK_INTEGER", "TK_REAL", "TK_STRING", "$accept", "input",
  "program_start", "program_main", "function_body", "var_const_decl",
  "local_declarations", "const_declaration", "const_assign", "var_decl",
  "var_chain", "var_strings", "data_type", "fun_definition",
  "fun_parameters", "fun_parameter_member", "statements", "statement",
  "assign_object", "function_call", "function_call_chain", "for_loop",
  "while_loop", "if_block", "return_statement", "array_expression",
  "expression", "syscall", "syscall_write_content", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318
};
# endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-23)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,   -19,   -21,    15,    49,  -139,  -139,    -9,    -9,     5,
    -139,    -9,     6,    46,    61,    63,   336,  -139,  -139,  -139,
      34,   324,  -139,   238,   324,    66,    38,  -139,  -139,   336,
     336,   336,   336,    74,    77,    79,    85,    -5,  -139,  -139,
      95,  -139,  -139,   672,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,   100,  -139,   784,   110,   122,    16,   127,   130,   574,
     804,   823,   335,   -25,   -25,   -25,   -25,   336,   278,   -49,
    -139,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
    -139,  -139,   389,   131,   324,    19,    38,  -139,   134,  -139,
    -139,   137,   138,   140,   148,    29,   784,  -139,   695,   153,
     156,   164,   804,   823,   841,    78,   857,   857,   871,   162,
     231,   309,    88,    99,   -23,   335,   335,   181,    33,   -37,
     141,   168,   135,   171,   175,   184,   192,   317,    14,   199,
    -139,   404,  -139,  -139,   193,   540,  -139,   203,   220,  -139,
    -139,  -139,  -139,  -139,   217,  -139,   404,   207,  -139,   278,
     232,   233,   235,   236,  -139,   336,   215,   239,   242,   250,
     336,   263,   336,  -139,  -139,  -139,  -139,   533,   264,  -139,
     540,   259,   193,  -139,  -139,  -139,   324,   266,   324,   718,
    -139,  -139,  -139,  -139,   784,   265,   268,   277,   600,   274,
     626,  -139,  -139,   784,  -139,   281,   276,  -139,  -139,  -139,
    -139,   291,   336,   292,  -139,   404,   540,   763,   540,   287,
     418,   336,   167,   307,   302,   316,   649,   321,  -139,   540,
    -139,   325,   336,  -139,   468,   540,   741,   322,   479,   333,
    -139,   323,   540,  -139,   490,   330,  -139
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    21,     0,     2,     3,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     1,     4,     5,
       0,     0,     6,     0,     0,     0,    32,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
       0,    90,    83,     0,    89,    20,    27,    23,    25,    24,
      26,     0,    17,    16,     0,     0,     0,     0,    31,     0,
      61,    60,    77,     0,     0,     0,     0,    48,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    15,     0,     0,     0,     0,    32,    62,    98,    99,
     100,     0,     0,     0,     0,     0,    50,    59,     0,     0,
       0,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,    21,     0,
      14,     0,    12,    11,    19,    10,    35,     0,     0,    41,
      42,    43,    44,    45,     0,    33,     0,     0,    30,     0,
       0,     0,     0,     0,    47,     0,    58,     0,     0,     0,
       0,     0,     0,    40,    39,     7,    56,     0,     0,    13,
       9,     0,     0,    36,    37,    38,     0,     0,     0,     0,
      94,    96,    95,    97,    49,     0,     0,     0,     0,     0,
       0,    57,     8,    46,    34,     0,     0,    58,    91,    93,
      92,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
      54,     0,     0,    53,     0,     0,     0,     0,     0,     0,
      55,     0,     0,    51,     0,     0,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,    23,  -139,  -133,   224,  -139,   -60,  -139,   -55,
    -139,     0,   -15,  -139,   270,  -139,  -138,  -132,  -139,   -46,
    -139,  -139,  -139,  -139,  -139,   188,   -13,    21,    43
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,   139,   140,   141,     7,    13,     8,
       9,    40,    51,    11,    57,    58,   145,   146,   147,    41,
     105,   149,   150,   151,   152,    42,    43,    44,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     1,    14,   180,   109,   110,   111,    10,    10,    54,
      53,    10,     2,   183,    88,    89,    59,    60,    61,    62,
      45,    67,    84,   187,    68,    85,    86,    87,    88,    89,
      18,    19,   142,    20,    22,    98,    21,   143,    99,    15,
      67,    12,   -21,    16,    16,    93,   148,    94,   183,    17,
     156,     3,   157,    23,   106,   108,   164,   165,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    24,   220,   155,
     222,   142,   219,    87,    88,    89,   143,    25,   183,    26,
     183,   234,   144,    55,     3,   148,   142,   238,    56,   148,
      63,   143,   183,    64,   244,    65,   183,   102,   103,   104,
     148,    66,   183,   153,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   177,    90,    85,    86,    87,    88,
      89,    82,    83,    84,   148,    91,    85,    86,    87,    88,
      89,   144,    69,    83,    84,   182,   189,    85,    86,    87,
      88,    89,   194,    92,    95,   142,   144,   198,    96,   200,
     143,   154,   153,   159,   160,   161,   153,   162,   203,   148,
     148,   204,   148,   206,   148,   163,   148,   153,   131,   167,
     182,   132,   168,   148,   133,   227,   134,   135,   148,   148,
     169,   137,   148,    89,   170,   171,   148,   172,   148,   217,
     173,   153,    79,    80,    81,    82,    83,    84,   226,   174,
      85,    86,    87,    88,    89,   144,   182,   175,   182,   236,
     182,   178,   182,    33,    34,    35,    36,   138,   184,   182,
      86,    87,    88,    89,   182,   182,   153,   153,   182,   153,
     181,   153,   182,   153,   182,   185,    27,    28,   186,   188,
     153,   100,   100,   100,   100,   153,   153,   190,   191,   153,
     192,   193,   -22,   153,    29,   153,   195,    27,    28,   196,
      30,    31,    80,    81,    82,    83,    84,   197,   199,    85,
      86,    87,    88,    89,    32,    29,    27,    28,   205,   202,
     208,    30,    31,   209,    33,    34,    35,    36,    37,    38,
      39,    52,   210,   212,    29,    32,   214,   215,   107,   223,
      30,    31,   109,   110,   111,    33,    34,    35,    36,    37,
      38,    39,   216,   218,    32,    27,    28,    46,    47,    48,
      49,    50,   228,   229,    33,    34,    35,    36,    37,    38,
      39,   230,   176,    29,    27,    28,   233,   240,   243,    30,
      31,    81,    82,    83,    84,   246,   235,    85,    86,    87,
      88,    89,    29,    32,   242,   179,   158,     0,    30,    31,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,    32,    85,    86,    87,    88,    89,     0,     0,
       0,     0,    33,    34,    35,    36,    37,    38,    39,     1,
     131,     0,     0,   132,     0,     0,   133,     0,   134,   135,
       0,   136,     0,   137,     1,   131,     0,     0,   132,     0,
       0,   133,     0,   134,   135,     0,     0,     0,   137,   131,
     224,   225,   132,     0,     0,   133,     0,   134,   135,     0,
       0,     0,   137,     0,     0,    33,    34,    35,    36,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    35,    36,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,   138,   131,
       0,   237,   132,     0,     0,   133,     0,   134,   135,     0,
     131,     0,   137,   132,     0,   241,   133,     0,   134,   135,
       0,   131,     0,   137,   132,     0,   245,   133,     0,   134,
     135,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,    36,   138,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,   138,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
     138,   131,     0,     0,   132,     0,     0,   133,   201,   134,
     135,     0,     0,     0,   137,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,    34,    35,    36,
     138,    97,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,   211,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,   213,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,     0,    85,    86,    87,    88,    89,   231,
     232,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,     0,    85,    86,    87,
      88,    89,    70,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,     0,
      85,    86,    87,    88,    89,   166,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,     0,    85,    86,    87,    88,    89,   207,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,     0,    85,    86,    87,    88,
      89,   239,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,     0,    85,
      86,    87,    88,    89,   221,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,    89,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,    89,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,     0,    85,
      86,    87,    88,    89,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,     0,    85,    86,    87,    88,    89,
      78,    79,    80,    81,    82,    83,    84,     0,     0,    85,
      86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       0,    10,    23,   141,    53,    54,    55,     7,     8,    24,
      23,    11,    21,   145,    51,    52,    29,    30,    31,    32,
      20,    26,    45,   156,    29,    48,    49,    50,    51,    52,
       7,     8,    92,    28,    11,    60,    31,    92,    63,    60,
      26,    60,    47,    29,    29,    29,    92,    31,   180,     0,
      31,    60,    33,    47,    67,    68,    27,    28,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    31,   216,    94,
     218,   141,   215,    50,    51,    52,   141,    26,   220,    26,
     222,   229,    92,    27,    60,   141,   156,   235,    60,   145,
      26,   156,   234,    26,   242,    26,   238,    64,    65,    66,
     156,    26,   244,    92,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,   137,    25,    48,    49,    50,    51,
      52,    43,    44,    45,   180,    25,    48,    49,    50,    51,
      52,   141,    47,    44,    45,   145,   159,    48,    49,    50,
      51,    52,   165,    31,    27,   215,   156,   170,    28,   172,
     215,    30,   141,    29,    27,    27,   145,    27,   181,   215,
     216,   186,   218,   188,   220,    27,   222,   156,    11,    26,
     180,    14,    26,   229,    17,    18,    19,    20,   234,   235,
      26,    24,   238,    52,    26,    60,   242,    26,   244,   212,
      25,   180,    40,    41,    42,    43,    44,    45,   221,    25,
      48,    49,    50,    51,    52,   215,   216,    25,   218,   232,
     220,    22,   222,    56,    57,    58,    59,    60,    25,   229,
      49,    50,    51,    52,   234,   235,   215,   216,   238,   218,
      47,   220,   242,   222,   244,    25,     8,     9,    31,    42,
     229,    63,    64,    65,    66,   234,   235,    25,    25,   238,
      25,    25,    47,   242,    26,   244,    27,     8,     9,    27,
      32,    33,    41,    42,    43,    44,    45,    27,    15,    48,
      49,    50,    51,    52,    46,    26,     8,     9,    22,    25,
      25,    32,    33,    25,    56,    57,    58,    59,    60,    61,
      62,    63,    25,    29,    26,    46,    25,    31,    30,    22,
      32,    33,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    31,    31,    46,     8,     9,     3,     4,     5,
       6,     7,    25,    31,    56,    57,    58,    59,    60,    61,
      62,    25,    25,    26,     8,     9,    25,    25,    25,    32,
      33,    42,    43,    44,    45,    25,    31,    48,    49,    50,
      51,    52,    26,    46,    31,   141,    96,    -1,    32,    33,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    46,    48,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    10,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,
      -1,    22,    -1,    24,    10,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    -1,    -1,    -1,    24,    11,
      12,    13,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      -1,    -1,    24,    -1,    -1,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    11,
      -1,    13,    14,    -1,    -1,    17,    -1,    19,    20,    -1,
      11,    -1,    24,    14,    -1,    16,    17,    -1,    19,    20,
      -1,    11,    -1,    24,    14,    -1,    16,    17,    -1,    19,
      20,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    11,    -1,    -1,    14,    -1,    -1,    17,    25,    19,
      20,    -1,    -1,    -1,    24,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    27,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    27,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    30,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    30,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    21,    60,    65,    66,    67,    71,    73,    74,
      75,    77,    60,    72,    23,    60,    29,     0,    66,    66,
      28,    31,    66,    47,    31,    26,    26,     8,     9,    26,
      32,    33,    46,    56,    57,    58,    59,    60,    61,    62,
      75,    83,    89,    90,    91,    75,     3,     4,     5,     6,
       7,    76,    63,    90,    76,    27,    60,    78,    79,    90,
      90,    90,    90,    26,    26,    26,    26,    26,    29,    47,
      30,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    48,    49,    50,    51,    52,
      25,    25,    31,    29,    31,    27,    28,    27,    60,    63,
      89,    92,    92,    92,    92,    84,    90,    30,    90,    53,
      54,    55,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    11,    14,    17,    19,    20,    22,    24,    60,    68,
      69,    70,    71,    73,    75,    80,    81,    82,    83,    85,
      86,    87,    88,    91,    30,    76,    31,    33,    78,    29,
      27,    27,    27,    27,    27,    28,    30,    26,    26,    26,
      26,    60,    26,    25,    25,    25,    25,    90,    22,    69,
      80,    47,    75,    81,    25,    25,    31,    68,    42,    90,
      25,    25,    25,    25,    90,    27,    27,    27,    90,    15,
      90,    25,    25,    90,    76,    22,    76,    30,    25,    25,
      25,    27,    29,    27,    25,    31,    31,    90,    31,    68,
      80,    31,    80,    22,    12,    13,    90,    18,    25,    31,
      25,    30,    31,    25,    80,    31,    90,    13,    80,    30,
      25,    16,    31,    25,    80,    16,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    66,    66,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    83,    84,    84,
      84,    85,    85,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     7,     8,     2,
       1,     1,     1,     2,     1,     5,     3,     3,     4,     1,
       3,     1,     4,     1,     1,     1,     1,     1,    12,     9,
       3,     1,     0,     3,     5,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     4,     0,     3,
       1,    12,    14,     8,     8,    11,     2,     3,     4,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     6,     6,     5,     5,     5,     5,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 149 "myanalyzer.y"
    {
        if(yyerror_count == 0){
            puts(c_prologue);
            printf("%s\n",(yyvsp[0].str));
        }
    }
#line 1685 "myanalyzer.tab.c"
    break;

  case 3:
#line 162 "myanalyzer.y"
                     { (yyval.str) = template("%s\n", (yyvsp[0].str)); }
#line 1691 "myanalyzer.tab.c"
    break;

  case 4:
#line 163 "myanalyzer.y"
                                        { (yyval.str) = template("%s\n\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1697 "myanalyzer.tab.c"
    break;

  case 5:
#line 164 "myanalyzer.y"
                               { (yyval.str) = template("%s\n\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1703 "myanalyzer.tab.c"
    break;

  case 6:
#line 165 "myanalyzer.y"
                                     { (yyval.str) = template("%s\n\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1709 "myanalyzer.tab.c"
    break;

  case 7:
#line 169 "myanalyzer.y"
                                                                            { (yyval.str) = template("void main(){}"); }
#line 1715 "myanalyzer.tab.c"
    break;

  case 8:
#line 170 "myanalyzer.y"
                                                                                            { (yyval.str) = template("void main(){\n%s\n}",(yyvsp[-2].str)); }
#line 1721 "myanalyzer.tab.c"
    break;

  case 9:
#line 175 "myanalyzer.y"
                                        { (yyval.str) = template("\t%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1727 "myanalyzer.tab.c"
    break;

  case 10:
#line 176 "myanalyzer.y"
                                        { (yyval.str) = template("%s\n", (yyvsp[0].str)); }
#line 1733 "myanalyzer.tab.c"
    break;

  case 11:
#line 180 "myanalyzer.y"
                            { (yyval.str) = (yyvsp[0].str); }
#line 1739 "myanalyzer.tab.c"
    break;

  case 12:
#line 181 "myanalyzer.y"
                            { (yyval.str) = (yyvsp[0].str); }
#line 1745 "myanalyzer.tab.c"
    break;

  case 13:
#line 185 "myanalyzer.y"
                                                { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1751 "myanalyzer.tab.c"
    break;

  case 14:
#line 186 "myanalyzer.y"
                                                { (yyval.str) = (yyvsp[0].str); }
#line 1757 "myanalyzer.tab.c"
    break;

  case 15:
#line 194 "myanalyzer.y"
                                                     { (yyval.str) = template("const %s %s;\n", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1763 "myanalyzer.tab.c"
    break;

  case 16:
#line 199 "myanalyzer.y"
                                                { (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1769 "myanalyzer.tab.c"
    break;

  case 17:
#line 200 "myanalyzer.y"
                                                { (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1775 "myanalyzer.tab.c"
    break;

  case 18:
#line 209 "myanalyzer.y"
                                              { (yyval.str) = template("%s %s;\n", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1781 "myanalyzer.tab.c"
    break;

  case 19:
#line 213 "myanalyzer.y"
                                            { (yyval.str) = (yyvsp[0].str); }
#line 1787 "myanalyzer.tab.c"
    break;

  case 20:
#line 214 "myanalyzer.y"
                                            { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1793 "myanalyzer.tab.c"
    break;

  case 21:
#line 217 "myanalyzer.y"
                                                                    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1799 "myanalyzer.tab.c"
    break;

  case 22:
#line 218 "myanalyzer.y"
                                                                    { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1805 "myanalyzer.tab.c"
    break;

  case 23:
#line 222 "myanalyzer.y"
                    { (yyval.str) = template("int"); }
#line 1811 "myanalyzer.tab.c"
    break;

  case 24:
#line 223 "myanalyzer.y"
                    { (yyval.str) = template("str"); }
#line 1817 "myanalyzer.tab.c"
    break;

  case 25:
#line 224 "myanalyzer.y"
                    { (yyval.str) = template("double"); }
#line 1823 "myanalyzer.tab.c"
    break;

  case 26:
#line 225 "myanalyzer.y"
                    { (yyval.str) = template("bool"); }
#line 1829 "myanalyzer.tab.c"
    break;

  case 27:
#line 226 "myanalyzer.y"
                    { (yyval.str) = template("void"); }
#line 1835 "myanalyzer.tab.c"
    break;

  case 28:
#line 234 "myanalyzer.y"
        { (yyval.str) = template("%s %s(%s) {\n%s\n}\n", (yyvsp[-4].str), (yyvsp[-10].str), (yyvsp[-8].str), (yyvsp[-2].str));}
#line 1841 "myanalyzer.tab.c"
    break;

  case 29:
#line 237 "myanalyzer.y"
        { (yyval.str) = template("void %s(%s) {\n%s\n}\n", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1847 "myanalyzer.tab.c"
    break;

  case 30:
#line 242 "myanalyzer.y"
                                                    { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1853 "myanalyzer.tab.c"
    break;

  case 31:
#line 243 "myanalyzer.y"
                                                    { (yyval.str) = (yyvsp[0].str); }
#line 1859 "myanalyzer.tab.c"
    break;

  case 32:
#line 244 "myanalyzer.y"
                                                    { (yyval.str) = ""; }
#line 1865 "myanalyzer.tab.c"
    break;

  case 33:
#line 249 "myanalyzer.y"
                                                            { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-2].str)); }
#line 1871 "myanalyzer.tab.c"
    break;

  case 34:
#line 250 "myanalyzer.y"
                                                            { (yyval.str) = template("%s %s[]", (yyvsp[0].str), (yyvsp[-4].str)); }
#line 1877 "myanalyzer.tab.c"
    break;

  case 36:
#line 259 "myanalyzer.y"
                                { (yyval.str) = template("\n\t%s\n\t%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1883 "myanalyzer.tab.c"
    break;

  case 37:
#line 263 "myanalyzer.y"
                                        { (yyval.str) = template("%s;", (yyvsp[-1].str)); }
#line 1889 "myanalyzer.tab.c"
    break;

  case 38:
#line 264 "myanalyzer.y"
                                        { (yyval.str) = template("%s;", (yyvsp[-1].str)); }
#line 1895 "myanalyzer.tab.c"
    break;

  case 39:
#line 265 "myanalyzer.y"
                                        { (yyval.str) = template("\tcontinue;\n"); }
#line 1901 "myanalyzer.tab.c"
    break;

  case 40:
#line 266 "myanalyzer.y"
                                        { (yyval.str) = template("\tbreak;\n"); }
#line 1907 "myanalyzer.tab.c"
    break;

  case 41:
#line 267 "myanalyzer.y"
                                        { (yyval.str) = template("\t%s\n", (yyvsp[0].str)); }
#line 1913 "myanalyzer.tab.c"
    break;

  case 42:
#line 268 "myanalyzer.y"
                                        { (yyval.str) = template("\t%s\n", (yyvsp[0].str)); }
#line 1919 "myanalyzer.tab.c"
    break;

  case 43:
#line 269 "myanalyzer.y"
                                        { (yyval.str) = template("\t%s\n", (yyvsp[0].str)); }
#line 1925 "myanalyzer.tab.c"
    break;

  case 44:
#line 270 "myanalyzer.y"
                                        { (yyval.str) = template("\t%s\n", (yyvsp[0].str)); }
#line 1931 "myanalyzer.tab.c"
    break;

  case 45:
#line 271 "myanalyzer.y"
                                        { (yyval.str) = template("%s\n", (yyvsp[0].str)); }
#line 1937 "myanalyzer.tab.c"
    break;

  case 46:
#line 277 "myanalyzer.y"
                                       { (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1943 "myanalyzer.tab.c"
    break;

  case 47:
#line 281 "myanalyzer.y"
                                                                     { (yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1949 "myanalyzer.tab.c"
    break;

  case 48:
#line 285 "myanalyzer.y"
                                                { (yyval.str) = template(""); }
#line 1955 "myanalyzer.tab.c"
    break;

  case 49:
#line 286 "myanalyzer.y"
                                                { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1961 "myanalyzer.tab.c"
    break;

  case 50:
#line 287 "myanalyzer.y"
                                                { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1967 "myanalyzer.tab.c"
    break;

  case 51:
#line 293 "myanalyzer.y"
        { (yyval.str) = template("\n\tfor(int %s = %s; %s<%s; %s++){\n\n\t%s\n\t}\n", (yyvsp[-10].str), (yyvsp[-7].str), (yyvsp[-10].str), (yyvsp[-5].str), (yyvsp[-10].str), (yyvsp[-2].str)); }
#line 1973 "myanalyzer.tab.c"
    break;

  case 52:
#line 295 "myanalyzer.y"
        { (yyval.str) = template("\n\tfor(int %s = %s; %s<%s; %s = %s + %s){\n\n\t%s\n\t}\n", (yyvsp[-12].str), (yyvsp[-9].str), (yyvsp[-12].str), (yyvsp[-5].str), (yyvsp[-12].str), (yyvsp[-12].str), (yyvsp[-7].str), (yyvsp[-2].str)); }
#line 1979 "myanalyzer.tab.c"
    break;

  case 53:
#line 299 "myanalyzer.y"
        { (yyval.str) = template("\n\twhile(%s){\n\t\t%s\n\t}", (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1985 "myanalyzer.tab.c"
    break;

  case 54:
#line 304 "myanalyzer.y"
        { (yyval.str) = template("\n\tif(%s){\n\t%s\n\t}\n", (yyvsp[-5].str), (yyvsp[-2].str));}
#line 1991 "myanalyzer.tab.c"
    break;

  case 55:
#line 306 "myanalyzer.y"
        { (yyval.str) = template("\n\tif(%s){\n\t%s\n\t}\nelse{\n\t%s\t\n}", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 1997 "myanalyzer.tab.c"
    break;

  case 56:
#line 310 "myanalyzer.y"
                                          { (yyval.str) = template("\n\treturn;\n"); }
#line 2003 "myanalyzer.tab.c"
    break;

  case 57:
#line 311 "myanalyzer.y"
                                          { (yyval.str) = template("\n\treturn %s;\n",(yyvsp[-1].str) ); }
#line 2009 "myanalyzer.tab.c"
    break;

  case 58:
#line 316 "myanalyzer.y"
                                                        { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2015 "myanalyzer.tab.c"
    break;

  case 59:
#line 317 "myanalyzer.y"
                                                        { (yyval.str) = template("*%s", (yyvsp[-2].str));}
#line 2021 "myanalyzer.tab.c"
    break;

  case 60:
#line 321 "myanalyzer.y"
                                                     { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 2027 "myanalyzer.tab.c"
    break;

  case 61:
#line 322 "myanalyzer.y"
                                                     { (yyval.str) = template("+%s", (yyvsp[0].str)); }
#line 2033 "myanalyzer.tab.c"
    break;

  case 62:
#line 323 "myanalyzer.y"
                                                     { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 2039 "myanalyzer.tab.c"
    break;

  case 63:
#line 324 "myanalyzer.y"
                                                     { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2045 "myanalyzer.tab.c"
    break;

  case 64:
#line 325 "myanalyzer.y"
                                                     { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2051 "myanalyzer.tab.c"
    break;

  case 65:
#line 326 "myanalyzer.y"
                                                     { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2057 "myanalyzer.tab.c"
    break;

  case 66:
#line 327 "myanalyzer.y"
                                                     { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2063 "myanalyzer.tab.c"
    break;

  case 67:
#line 328 "myanalyzer.y"
                                                     { (yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2069 "myanalyzer.tab.c"
    break;

  case 68:
#line 329 "myanalyzer.y"
                                                     { (yyval.str) = template("pow(%s,%s)", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2075 "myanalyzer.tab.c"
    break;

  case 69:
#line 330 "myanalyzer.y"
                                                     { (yyval.str) = template("%s == %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2081 "myanalyzer.tab.c"
    break;

  case 70:
#line 331 "myanalyzer.y"
                                                     { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2087 "myanalyzer.tab.c"
    break;

  case 71:
#line 332 "myanalyzer.y"
                                                     { (yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2093 "myanalyzer.tab.c"
    break;

  case 72:
#line 333 "myanalyzer.y"
                                                     { (yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2099 "myanalyzer.tab.c"
    break;

  case 73:
#line 334 "myanalyzer.y"
                                                     { (yyval.str) = template("%s > %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2105 "myanalyzer.tab.c"
    break;

  case 74:
#line 335 "myanalyzer.y"
                                                     { (yyval.str) = template("%s >= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2111 "myanalyzer.tab.c"
    break;

  case 75:
#line 336 "myanalyzer.y"
                                                     { (yyval.str) = template("%s && %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2117 "myanalyzer.tab.c"
    break;

  case 76:
#line 337 "myanalyzer.y"
                                                     { (yyval.str) = template("%s || %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2123 "myanalyzer.tab.c"
    break;

  case 77:
#line 338 "myanalyzer.y"
                                                     { (yyval.str) = template("!%s", (yyvsp[0].str)); }
#line 2129 "myanalyzer.tab.c"
    break;

  case 78:
#line 339 "myanalyzer.y"
                                                     { (yyval.str) = template("%s+=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2135 "myanalyzer.tab.c"
    break;

  case 79:
#line 340 "myanalyzer.y"
                                                     { (yyval.str) = template("%s-=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2141 "myanalyzer.tab.c"
    break;

  case 80:
#line 341 "myanalyzer.y"
                                                     { (yyval.str) = template("%s*=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2147 "myanalyzer.tab.c"
    break;

  case 81:
#line 342 "myanalyzer.y"
                                                     { (yyval.str) = template("%s/=%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2153 "myanalyzer.tab.c"
    break;

  case 82:
#line 343 "myanalyzer.y"
                                                     { (yyval.str) = template("%s = %s %% %s", (yyvsp[-2].str), (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2159 "myanalyzer.tab.c"
    break;

  case 83:
#line 344 "myanalyzer.y"
                                    { (yyval.str) = (yyvsp[0].str); }
#line 2165 "myanalyzer.tab.c"
    break;

  case 84:
#line 345 "myanalyzer.y"
                                    { (yyval.str) = (yyvsp[0].str); }
#line 2171 "myanalyzer.tab.c"
    break;

  case 85:
#line 346 "myanalyzer.y"
                                    { (yyval.str) = (yyvsp[0].str); }
#line 2177 "myanalyzer.tab.c"
    break;

  case 86:
#line 347 "myanalyzer.y"
                                    { (yyval.str) = (yyvsp[0].str); }
#line 2183 "myanalyzer.tab.c"
    break;

  case 87:
#line 348 "myanalyzer.y"
                                    { (yyval.str) = "1"; }
#line 2189 "myanalyzer.tab.c"
    break;

  case 88:
#line 349 "myanalyzer.y"
                                    { (yyval.str) = "0"; }
#line 2195 "myanalyzer.tab.c"
    break;

  case 89:
#line 350 "myanalyzer.y"
                                    { (yyval.str) = (yyvsp[0].str); }
#line 2201 "myanalyzer.tab.c"
    break;

  case 90:
#line 351 "myanalyzer.y"
                                    { (yyval.str) = (yyvsp[0].str);}
#line 2207 "myanalyzer.tab.c"
    break;

  case 91:
#line 356 "myanalyzer.y"
                                                                                  { (yyval.str) = template("%s = readStr();", (yyvsp[-5].str)); }
#line 2213 "myanalyzer.tab.c"
    break;

  case 92:
#line 357 "myanalyzer.y"
                                                                                  { (yyval.str) = template("%s = readScalar();", (yyvsp[-5].str)); }
#line 2219 "myanalyzer.tab.c"
    break;

  case 93:
#line 358 "myanalyzer.y"
                                                                                  { (yyval.str) = template("%s = readInteger();", (yyvsp[-5].str)); }
#line 2225 "myanalyzer.tab.c"
    break;

  case 94:
#line 359 "myanalyzer.y"
                                                                                  { (yyval.str) = template("writeStr(%s);", (yyvsp[-2].str)); }
#line 2231 "myanalyzer.tab.c"
    break;

  case 95:
#line 360 "myanalyzer.y"
                                                                                  { (yyval.str) = template("writeScalar(%s);", (yyvsp[-2].str)); }
#line 2237 "myanalyzer.tab.c"
    break;

  case 96:
#line 361 "myanalyzer.y"
                                                                                  { (yyval.str) = template("writeInteger(%s);", (yyvsp[-2].str)); }
#line 2243 "myanalyzer.tab.c"
    break;

  case 97:
#line 362 "myanalyzer.y"
                                                                                  { (yyval.str) = template("write(%s);", (yyvsp[-2].str)); }
#line 2249 "myanalyzer.tab.c"
    break;

  case 98:
#line 367 "myanalyzer.y"
                            { (yyval.str) = (yyvsp[0].str); }
#line 2255 "myanalyzer.tab.c"
    break;

  case 99:
#line 368 "myanalyzer.y"
                            { (yyval.str) = (yyvsp[0].str); }
#line 2261 "myanalyzer.tab.c"
    break;

  case 100:
#line 369 "myanalyzer.y"
                            { (yyval.str) = (yyvsp[0].str); }
#line 2267 "myanalyzer.tab.c"
    break;


#line 2271 "myanalyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 373 "myanalyzer.y"

int main() {
    if ( yyparse() != 0 )
        fprintf(stderr,"Rejected! Syntax errors exist, please revise the errors above ^ ! \n");
}
