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
#line 1 "asgn4_19CS10035.y"

#include <stdio.h>
extern int yylex();
void yyerror(const char*);

#line 76 "y.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ARW = 258,
    INCREM = 259,
    DECREM = 260,
    SHL = 261,
    SHR = 262,
    LTE = 263,
    GTE = 264,
    EQL = 265,
    NEQ = 266,
    AND = 267,
    OR = 268,
    DOTS = 269,
    STAREQ = 270,
    DIVEQ = 271,
    MODEQ = 272,
    PLUSEQ = 273,
    MINUSEQ = 274,
    SHLEQ = 275,
    SHREQ = 276,
    BINANDEQ = 277,
    BINXOREQ = 278,
    BINOREQ = 279,
    AUTO = 280,
    ENUM = 281,
    RESTRICT = 282,
    UNSIGNED = 283,
    BREAK = 284,
    EXTERN = 285,
    RETURN = 286,
    VOID = 287,
    CASE = 288,
    FLOAT = 289,
    SHORT = 290,
    VOLATILE = 291,
    CHAR = 292,
    FOR = 293,
    SIGNED = 294,
    WHILE = 295,
    CONST = 296,
    GOTO = 297,
    SIZEOF = 298,
    _BOOL = 299,
    CONTINUE = 300,
    IF = 301,
    STATIC = 302,
    _COMPLEX = 303,
    DEFAULT = 304,
    INLINE = 305,
    STRUCT = 306,
    _IMAGINARY = 307,
    DO = 308,
    INT = 309,
    SWITCH = 310,
    DOUBLE = 311,
    LONG = 312,
    TYPEDEF = 313,
    ELSE = 314,
    REGISTER = 315,
    UNION = 316,
    SLC = 317,
    MLC = 318,
    ID = 319,
    INT_CONST = 320,
    FLT_CONST = 321,
    CHAR_CONST = 322,
    STR_LIT = 323,
    ENUMERATION_CONSTANT = 324,
    PUNCTUATOR = 325,
    WS = 326
  };
#endif
/* Tokens.  */
#define ARW 258
#define INCREM 259
#define DECREM 260
#define SHL 261
#define SHR 262
#define LTE 263
#define GTE 264
#define EQL 265
#define NEQ 266
#define AND 267
#define OR 268
#define DOTS 269
#define STAREQ 270
#define DIVEQ 271
#define MODEQ 272
#define PLUSEQ 273
#define MINUSEQ 274
#define SHLEQ 275
#define SHREQ 276
#define BINANDEQ 277
#define BINXOREQ 278
#define BINOREQ 279
#define AUTO 280
#define ENUM 281
#define RESTRICT 282
#define UNSIGNED 283
#define BREAK 284
#define EXTERN 285
#define RETURN 286
#define VOID 287
#define CASE 288
#define FLOAT 289
#define SHORT 290
#define VOLATILE 291
#define CHAR 292
#define FOR 293
#define SIGNED 294
#define WHILE 295
#define CONST 296
#define GOTO 297
#define SIZEOF 298
#define _BOOL 299
#define CONTINUE 300
#define IF 301
#define STATIC 302
#define _COMPLEX 303
#define DEFAULT 304
#define INLINE 305
#define STRUCT 306
#define _IMAGINARY 307
#define DO 308
#define INT 309
#define SWITCH 310
#define DOUBLE 311
#define LONG 312
#define TYPEDEF 313
#define ELSE 314
#define REGISTER 315
#define UNION 316
#define SLC 317
#define MLC 318
#define ID 319
#define INT_CONST 320
#define FLT_CONST 321
#define CHAR_CONST 322
#define STR_LIT 323
#define ENUMERATION_CONSTANT 324
#define PUNCTUATOR 325
#define WS 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "asgn4_19CS10035.y"

  int intval;
  float floatval;
  char *charval;

#line 276 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   959

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

#define YYUNDEFTOK  2
#define YYMAXUTOK   326


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
       2,     2,     2,    85,     2,     2,     2,    87,    80,     2,
      72,    73,    81,    82,    79,    83,    76,    86,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    95,
      88,    94,    89,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    77,    91,    78,    84,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    90,    91,    92,    93,    94,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   110,   111,   115,
     116,   120,   121,   122,   123,   124,   125,   129,   130,   131,
     132,   133,   134,   138,   139,   143,   144,   145,   146,   150,
     151,   152,   156,   157,   158,   162,   163,   164,   165,   166,
     170,   171,   172,   176,   177,   181,   182,   186,   187,   191,
     192,   196,   197,   201,   202,   206,   207,   211,   212,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     230,   231,   235,   239,   240,   244,   248,   249,   250,   251,
     255,   256,   260,   261,   265,   266,   270,   271,   275,   276,
     277,   278,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   298,   299,   303,   304,   308,
     309,   310,   314,   315,   319,   320,   324,   325,   326,   330,
     334,   338,   339,   340,   341,   342,   343,   344,   348,   349,
     353,   354,   358,   359,   363,   364,   368,   369,   373,   374,
     378,   379,   383,   384,   388,   389,   393,   397,   398,   399,
     403,   404,   408,   412,   413,   417,   418,   422,   423,   427,
     428,   429,   430,   431,   432,   436,   437,   438,   442,   446,
     447,   451,   452,   456,   457,   461,   465,   466,   467,   471,
     472,   473,   474,   478,   479,   480,   481,   485,   486,   490,
     491,   496,   497,   501,   505,   506,   510,   511
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARW", "INCREM", "DECREM", "SHL", "SHR",
  "LTE", "GTE", "EQL", "NEQ", "AND", "OR", "DOTS", "STAREQ", "DIVEQ",
  "MODEQ", "PLUSEQ", "MINUSEQ", "SHLEQ", "SHREQ", "BINANDEQ", "BINXOREQ",
  "BINOREQ", "AUTO", "ENUM", "RESTRICT", "UNSIGNED", "BREAK", "EXTERN",
  "RETURN", "VOID", "CASE", "FLOAT", "SHORT", "VOLATILE", "CHAR", "FOR",
  "SIGNED", "WHILE", "CONST", "GOTO", "SIZEOF", "_BOOL", "CONTINUE", "IF",
  "STATIC", "_COMPLEX", "DEFAULT", "INLINE", "STRUCT", "_IMAGINARY", "DO",
  "INT", "SWITCH", "DOUBLE", "LONG", "TYPEDEF", "ELSE", "REGISTER",
  "UNION", "SLC", "MLC", "ID", "INT_CONST", "FLT_CONST", "CHAR_CONST",
  "STR_LIT", "ENUMERATION_CONSTANT", "PUNCTUATOR", "WS", "'('", "')'",
  "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list_optional", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression",
  "assignment_expression_optional", "assignment_operator", "expression",
  "constant_expression", "expression_optional", "declaration",
  "declaration_specifiers", "declaration_specifiers_optional",
  "init_declarator_list_optional", "init_declarator_list",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_optional",
  "enum_specifier", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator", "pointer",
  "pointer_optional", "type_qualifier_list",
  "type_qualifier_list_optional", "parameter_type_list", "parameter_list",
  "parameter_declaration", "ID_list", "ID_list_optional", "type_name",
  "initializer", "initializer_list", "designation", "designation_optional",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item_list_optional",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "declaration_list_optional",
  "function_definition", "declaration_list", "ID_optional", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,    40,    41,    91,    93,    46,   123,   125,    44,
      38,    42,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     867,  -209,   -21,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,   -58,   867,   867,  -209,   867,   867,   754,
    -209,  -209,   -16,    24,    36,    14,    54,  -209,   693,  -209,
     -28,  -209,  -209,  -209,  -209,  -209,  -209,  -209,   111,  -209,
      36,    70,  -209,    70,   176,  -209,   -58,    64,   867,  -209,
      70,     8,  -209,    88,  -209,  -209,  -209,    61,   550,   550,
     576,  -209,  -209,  -209,  -209,  -209,   437,    68,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,    71,   172,   606,  -209,   -69,
      90,     7,    11,   158,   105,   113,   121,   204,     3,  -209,
    -209,  -209,   242,  -209,  -209,   144,   827,    15,  -209,   -25,
     437,  -209,  -209,   437,  -209,  -209,   -39,   902,  -209,   902,
     147,   606,   157,    99,  -209,   176,    -7,  -209,   159,  -209,
    -209,   606,   606,   160,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   606,  -209,  -209,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606,   606,   606,   127,   606,   606,
     153,   154,   164,   135,   162,   138,   494,   163,   139,   170,
     142,  -209,  -209,  -209,  -209,   307,   161,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,    13,   165,   171,  -209,   173,   178,
      36,   632,   168,  -209,  -209,   181,   182,  -209,   606,  -209,
    -209,  -209,   524,  -209,   188,  -209,  -209,    74,  -209,  -209,
    -209,  -209,   192,   214,  -209,    10,  -209,  -209,  -209,  -209,
    -209,   -69,   -69,    90,    90,     7,     7,    50,     7,     7,
      50,   158,   105,   113,   121,   204,   -33,  -209,   205,   208,
     372,   606,   209,  -209,   606,   494,   263,   606,   494,  -209,
    -209,  -209,  -209,  -209,   791,   241,  -209,   606,   238,  -209,
     240,   606,   239,   239,  -209,    68,  -209,  -209,  -209,   176,
    -209,   606,  -209,   606,  -209,   494,   222,   606,    23,  -209,
      25,  -209,   246,    57,  -209,  -209,  -209,  -209,   253,  -209,
    -209,  -209,   130,  -209,  -209,  -209,  -209,   606,   226,   494,
     494,   606,   494,  -209,  -209,    87,   234,   606,  -209,   271,
      67,  -209,  -209,   606,   258,   494,   270,   285,   494,  -209,
    -209,   494,  -209,  -209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   207,   127,   110,    98,   102,   107,   104,   128,
     103,   109,   126,   111,    99,   112,   129,   113,   105,   108,
     106,   101,   200,   141,    91,    91,   114,    91,    91,     0,
     197,   199,   121,     0,   145,     0,    92,    94,    96,   140,
       0,    90,    86,    87,    88,    89,     1,   198,     0,   142,
     144,   138,    85,   141,     0,   204,   141,     0,   201,   131,
     141,   130,   122,     0,   143,   139,    95,    96,     0,     0,
       0,     2,     3,     4,     5,     6,     0,   164,    27,    28,
      29,    30,    31,    32,     8,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    65,
     157,    97,    84,   203,   205,     0,   155,   145,   119,     0,
       0,    22,    23,     0,    25,    80,     0,   118,   156,   118,
       0,     0,     0,     0,   163,     0,     0,   165,     0,    13,
      14,    18,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    69,     0,    33,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    84,     0,     2,    83,
       0,   183,   184,   169,   170,    84,     0,   179,   171,   172,
     173,   174,   132,   152,   141,     0,   146,   148,   154,     0,
     145,    68,   124,   120,   123,     0,     0,     7,     0,   117,
     115,   116,     0,    82,     0,   168,   158,   164,   160,   162,
     166,    12,     0,    17,    19,     0,    11,    66,    36,    37,
      38,    40,    41,    43,    44,    48,    49,    52,    46,    47,
      51,    54,    56,    58,    60,    62,     0,   195,     0,     0,
      84,     0,     0,   194,     0,    84,     0,     0,    84,   185,
     180,   178,   150,   136,     0,     0,   137,     0,    28,    67,
       0,     0,     0,    26,    81,   164,    34,   167,   159,     0,
      10,     0,     9,     0,   196,    84,     0,    84,     0,   193,
       0,   177,     0,     0,   175,   147,   149,   153,     0,   135,
     133,   125,     0,   161,    20,    64,   176,    84,     0,    84,
      84,     0,    84,   134,    15,   164,     0,    84,   189,   186,
       0,   188,    16,    84,     0,    84,     0,     0,    84,   187,
     190,    84,   192,   191
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,  -209,  -209,   -38,  -209,   -84,    59,    60,
      42,   -89,   207,   216,   203,   206,   215,  -209,  -114,   -52,
    -209,  -209,   -75,  -136,  -153,   -32,     0,   179,  -209,  -209,
     316,  -209,   -65,    41,   262,  -209,  -209,  -209,   -29,  -209,
     -19,  -209,   331,  -209,  -209,   -97,  -209,  -209,   119,  -209,
    -209,    -5,  -117,   118,  -209,  -208,  -209,   260,  -126,  -209,
     337,  -209,  -209,   210,  -209,  -209,  -209,  -209,  -209,   367,
    -209,  -209,  -209,  -209
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    84,    85,   222,   223,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   115,
     270,   145,   179,   214,   180,    22,    56,    42,    35,    36,
      37,    24,    25,   118,   210,    26,    63,   204,    27,    28,
      67,    61,    39,    40,    50,    51,   195,   196,   197,   198,
     199,   120,   101,   123,   124,   125,   126,   127,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,    29,    30,
      57,    31,    58,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   116,   100,   147,    38,    49,    55,   213,   218,   279,
     201,   117,   148,   153,   154,   248,   165,   149,   150,   155,
     156,    64,   157,    34,    41,    41,   104,    41,    41,    23,
     111,   112,   114,   249,   207,   116,    59,   -93,   116,   202,
     208,   105,     3,    32,    60,   117,   208,   119,   117,   146,
     256,     9,   117,   203,   117,   213,    12,   225,   155,   156,
     283,  -206,   200,     3,   228,   229,   230,   121,   237,   122,
     181,   240,     9,   100,   128,   129,   130,    12,    49,   224,
     106,   119,   107,   146,   119,   282,  -151,   219,   119,   208,
     119,   246,  -151,   227,    34,   166,   309,   286,   310,   158,
     159,    48,   208,   267,   208,   205,   194,   279,   206,    52,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   276,   291,
     312,   146,   294,    53,   308,   301,   208,    62,   158,   159,
     326,   102,   121,   131,   122,   132,   208,   133,   121,   269,
     122,    34,   278,   181,   316,    54,   274,   213,   209,   306,
     209,   121,   303,   122,   324,   322,   108,   109,   160,   305,
     327,    49,   151,   152,   146,   262,   288,   216,   217,   290,
      68,    69,   293,   318,   319,   161,   321,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   235,   236,   329,
     238,   239,   332,   162,    43,   333,    44,    45,   314,   315,
     231,   232,   163,   233,   234,   298,   164,   192,   287,    70,
     212,   215,   247,   221,   226,   250,   251,   100,   252,   304,
     253,   255,   258,   146,   254,   257,   320,   259,   263,   261,
      71,    72,    73,    74,    75,   146,    68,    69,    76,   208,
     264,   266,   265,    77,   272,   273,    78,    79,    80,    81,
      82,    83,   271,   277,   194,   280,   144,     1,     2,     3,
       4,   167,     5,   168,     6,   169,     7,     8,     9,    10,
     170,    11,   171,    12,   172,    70,    13,   173,   174,    14,
      15,   175,    16,   281,    17,   176,    18,   177,    19,    20,
     284,   285,    21,   292,   289,   297,   178,    72,    73,    74,
      75,    68,    69,   299,    76,   300,   275,   307,   311,   102,
    -182,   317,    78,    79,    80,    81,    82,    83,   313,   323,
     325,   328,     1,     2,     3,     4,   167,     5,   168,     6,
     169,     7,     8,     9,    10,   170,    11,   171,    12,   172,
      70,    13,   173,   174,    14,    15,   175,    16,   331,    17,
     176,    18,   177,    19,    20,   330,   243,    21,   241,    66,
     244,   178,    72,    73,    74,    75,    68,    69,   242,    76,
     245,   211,    65,   296,   102,  -181,   220,    78,    79,    80,
      81,    82,    83,   302,   103,   260,    47,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,    70,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       0,     0,    21,     0,     0,     0,    71,    72,    73,    74,
      75,    68,    69,     0,    76,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     0,     2,     3,     4,     0,     0,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
      70,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20,     0,     0,     0,    68,    69,
       0,    71,    72,    73,    74,    75,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,   167,     0,   168,     0,   169,    68,    69,
       0,     0,   170,     0,   171,     0,   172,    70,     0,   173,
     174,     0,     0,   175,     0,     0,     0,   176,     0,   177,
       0,     0,     0,     0,    68,    69,     0,     0,   178,    72,
      73,    74,    75,     0,     0,     0,    76,    70,     0,     0,
       0,   102,     0,     0,    78,    79,    80,    81,    82,    83,
      68,    69,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    70,     0,     0,    76,     0,     0,     0,
       0,   275,     0,     0,    78,    79,    80,    81,    82,    83,
      68,    69,     0,     0,    71,    72,    73,    74,    75,    70,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,    68,    69,     0,     0,
      71,    72,    73,    74,    75,     0,     0,     0,   113,    70,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    70,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,    71,    72,    73,    74,
      75,     0,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,    78,   268,    80,    81,    82,    83,     1,     2,
       3,     4,     0,     5,     0,     6,     0,     7,     8,     9,
      10,     0,    11,     0,    12,     0,     0,    13,     0,     0,
      14,    15,     0,    16,     0,    17,     0,    18,     0,    19,
      20,     0,     0,    21,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -202,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     0,     5,     0,     6,    54,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,   295,    17,     0,    18,     0,
      19,    20,     0,     0,    21,     0,     1,     2,     3,     4,
       0,     5,     0,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,     0,
       0,    21,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,     0,    21,     0,     0,
       0,   193,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,     0,    21,     2,     3,
       4,     0,     0,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,     0,
      15,     0,     0,     0,    17,     0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    76,    54,    87,    23,    34,    38,   121,   125,   217,
     107,    76,    81,     6,     7,   168,    13,    86,    87,     8,
       9,    50,    11,    81,    24,    25,    58,    27,    28,    29,
      68,    69,    70,   169,    73,   110,    64,    95,   113,    64,
      79,    60,    27,    64,    72,   110,    79,    76,   113,    87,
     176,    36,   117,    78,   119,   169,    41,   132,     8,     9,
      93,    77,    47,    27,   148,   149,   150,    74,   157,    76,
     102,   160,    36,   125,     3,     4,     5,    41,   107,   131,
      72,   110,    74,   121,   113,    75,    73,    94,   117,    79,
     119,   166,    79,   145,    81,    92,    73,   250,    73,    88,
      89,    77,    79,   200,    79,   110,   106,   315,   113,    95,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   212,   255,
      73,   169,   258,    79,   287,   271,    79,    26,    88,    89,
      73,    77,    74,    72,    76,    74,    79,    76,    74,   201,
      76,    81,    78,   185,   307,    94,   208,   271,   117,   285,
     119,    74,   279,    76,   317,    78,    78,    79,    10,   283,
     323,   200,    82,    83,   212,   194,   251,    78,    79,   254,
       4,     5,   257,   309,   310,    80,   312,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   155,   156,   325,
     158,   159,   328,    90,    25,   331,    27,    28,    78,    79,
     151,   152,    91,   153,   154,   267,    12,    73,   250,    43,
      73,    64,    95,    64,    64,    72,    72,   279,    64,   281,
      95,    93,    93,   271,    72,    72,   311,    95,    73,    78,
      64,    65,    66,    67,    68,   283,     4,     5,    72,    79,
      79,    73,    79,    77,    73,    73,    80,    81,    82,    83,
      84,    85,    94,    75,   264,    73,    94,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    79,    52,    53,    54,    55,    56,    57,
      95,    93,    60,    40,    95,    64,    64,    65,    66,    67,
      68,     4,     5,    75,    72,    75,    77,    95,    72,    77,
      78,    95,    80,    81,    82,    83,    84,    85,    75,    95,
      59,    73,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    73,    52,
      53,    54,    55,    56,    57,    95,   163,    60,   161,    53,
     164,    64,    65,    66,    67,    68,     4,     5,   162,    72,
     165,   119,    51,   264,    77,    78,   126,    80,    81,    82,
      83,    84,    85,   275,    57,   185,    29,    25,    26,    27,
      28,    -1,    30,    -1,    32,    -1,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    43,    44,    -1,    -1,    47,
      48,    -1,    50,    -1,    52,    -1,    54,    -1,    56,    57,
      -1,    -1,    60,    -1,    -1,    -1,    64,    65,    66,    67,
      68,     4,     5,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,
      -1,    54,    -1,    56,    57,    -1,    -1,    -1,     4,     5,
      -1,    64,    65,    66,    67,    68,    -1,    -1,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    29,    -1,    31,    -1,    33,     4,     5,
      -1,    -1,    38,    -1,    40,    -1,    42,    43,    -1,    45,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53,    -1,    55,
      -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    64,    65,
      66,    67,    68,    -1,    -1,    -1,    72,    43,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    43,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    80,    81,    82,    83,    84,    85,
       4,     5,    -1,    -1,    64,    65,    66,    67,    68,    43,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,     4,     5,    -1,    -1,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    72,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65,    66,    67,    68,    43,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    -1,    -1,    -1,    -1,    64,    65,    66,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    25,    26,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      37,    -1,    39,    -1,    41,    -1,    -1,    44,    -1,    -1,
      47,    48,    -1,    50,    -1,    52,    -1,    54,    -1,    56,
      57,    -1,    -1,    60,     0,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    -1,    32,    94,    34,    35,
      36,    37,    -1,    39,    -1,    41,    -1,    -1,    44,    -1,
      -1,    47,    48,    -1,    50,    14,    52,    -1,    54,    -1,
      56,    57,    -1,    -1,    60,    -1,    25,    26,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    37,    -1,
      39,    -1,    41,    -1,    -1,    44,    -1,    -1,    47,    48,
      -1,    50,    -1,    52,    -1,    54,    -1,    56,    57,    -1,
      -1,    60,    25,    26,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      -1,    44,    -1,    -1,    47,    48,    -1,    50,    -1,    52,
      -1,    54,    -1,    56,    57,    -1,    -1,    60,    -1,    -1,
      -1,    64,    25,    26,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    37,    -1,    39,    -1,    41,    -1,
      -1,    44,    -1,    -1,    47,    48,    -1,    50,    -1,    52,
      -1,    54,    -1,    56,    57,    -1,    -1,    60,    26,    27,
      28,    -1,    -1,    -1,    32,    -1,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    52,    -1,    54,    -1,    56,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    26,    27,    28,    30,    32,    34,    35,    36,
      37,    39,    41,    44,    47,    48,    50,    52,    54,    56,
      57,    60,   121,   122,   127,   128,   131,   134,   135,   164,
     165,   167,    64,   169,    81,   124,   125,   126,   136,   138,
     139,   122,   123,   123,   123,   123,     0,   165,    77,   134,
     140,   141,    95,    79,    94,   121,   122,   166,   168,    64,
      72,   137,    26,   132,   134,   138,   126,   136,     4,     5,
      43,    64,    65,    66,    67,    68,    72,    77,    80,    81,
      82,    83,    84,    85,    97,    98,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   148,    77,   156,   121,   136,    72,    74,    78,    79,
      72,   101,   101,    72,   101,   115,   118,   128,   129,   134,
     147,    74,    76,   149,   150,   151,   152,   153,     3,     4,
       5,    72,    74,    76,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    94,   117,   101,   103,    81,    86,
      87,    82,    83,     6,     7,     8,     9,    11,    88,    89,
      10,    80,    90,    91,    12,    13,    92,    29,    31,    33,
      38,    40,    42,    45,    46,    49,    53,    55,    64,   118,
     120,   121,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,    73,    64,   122,   142,   143,   144,   145,   146,
      47,   141,    64,    78,   133,   147,   147,    73,    79,   129,
     130,   130,    73,   114,   119,    64,    78,    79,   148,    94,
     153,    64,    99,   100,   115,   118,    64,   115,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   106,   106,
     107,   108,   109,   110,   111,   112,   118,    95,   120,   119,
      72,    72,    64,    95,    72,    93,   154,    72,    93,    95,
     159,    78,   136,    73,    79,    79,    73,   141,    81,   115,
     116,    94,    73,    73,   115,    77,   103,    75,    78,   151,
      73,    79,    75,    93,    95,    93,   120,   121,   118,    95,
     118,   154,    40,   118,   154,    14,   144,    64,   115,    75,
      75,   119,   149,   148,   115,   114,   154,    95,   120,    73,
      73,    72,    73,    75,    78,    79,   120,    95,   154,   154,
     118,   154,    78,    95,   120,    59,    73,   120,    73,   154,
      95,    73,   154,   154
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   104,   104,   105,
     105,   105,   106,   106,   106,   107,   107,   107,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   119,   120,   120,   121,   122,   122,   122,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   135,
     136,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   148,   148,   148,
     149,   149,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   154,   154,   154,   154,   155,   155,   155,   156,   157,
     157,   158,   158,   159,   159,   160,   161,   161,   161,   162,
     162,   162,   162,   163,   163,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   168,   168,   169,   169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     0,     3,     2,     2,     2,     2,
       1,     0,     1,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     5,
       6,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     3,     5,     6,     5,     4,     4,     2,     3,
       1,     0,     1,     2,     1,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     0,     1,     1,     3,     4,
       2,     4,     2,     1,     0,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     3,     1,
       2,     1,     0,     1,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     3,     2,     2,     3,     1,     2,     1,
       1,     1,     0,     4,     1,     2,     1,     0
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

#line 1851 "y.tab.c"

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
#line 515 "asgn4_19CS10035.y"


void yyerror(const char *s) {
    printf("Error occured : %s\n",s);
}
