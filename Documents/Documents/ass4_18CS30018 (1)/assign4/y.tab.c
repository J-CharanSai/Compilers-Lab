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
#line 1 "ass4_18CS30018.y"

#include <stdio.h>
extern int yylex();
extern int yylineno;
void yyerror(char *s);

#line 77 "y.tab.c"

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
    BREAK = 258,
    CASE = 259,
    CHAR = 260,
    CONTINUE = 261,
    DEFAULT = 262,
    DO = 263,
    DOUBLE = 264,
    ELSE = 265,
    EXTERN = 266,
    FLOAT = 267,
    FOR = 268,
    GOTO = 269,
    IF = 270,
    INT = 271,
    LONG = 272,
    RETURN = 273,
    SHORT = 274,
    SIZEOF = 275,
    STATIC = 276,
    SWITCH = 277,
    VOID = 278,
    WHILE = 279,
    CONST = 280,
    RESTRICT = 281,
    VOLATILE = 282,
    INLINE = 283,
    INT_CONST = 284,
    FLOAT_CONST = 285,
    CHAR_CONST = 286,
    STR_LITERAL = 287,
    ID = 288,
    SQ_LBRACE = 289,
    SQ_RBRACE = 290,
    RO_LBRACE = 291,
    RO_RBRACE = 292,
    FL_LBRACE = 293,
    FL_RBRACE = 294,
    DOT = 295,
    MEM_OP = 296,
    INCREMENT_OP = 297,
    DECREMENT_OP = 298,
    BIT_AND = 299,
    MULT_OP = 300,
    ADD_OP = 301,
    MINUS_OP = 302,
    BIT_COMPL = 303,
    NOT_OP = 304,
    DIV_OP = 305,
    REM = 306,
    L_SHIFT = 307,
    R_SHIFT = 308,
    LT = 309,
    GT = 310,
    LT_EQ = 311,
    GT_EQ = 312,
    EQ = 313,
    NEQ = 314,
    BIT_XOR = 315,
    BIT_OR = 316,
    LOGIC_AND = 317,
    LOGIC_OR = 318,
    QUERY = 319,
    COLON = 320,
    SEMI_COLON = 321,
    VAR_ARG_LIST = 322,
    ASSIGN = 323,
    MULT_ASGN = 324,
    DIV_ASGN = 325,
    REM_ASGN = 326,
    ADD_ASGN = 327,
    MINUS_ASGN = 328,
    LS_ASGN = 329,
    RS_ASGN = 330,
    BIT_AND_ASGN = 331,
    BIT_XOR_ASGN = 332,
    BIT_OR_ASGN = 333,
    COMMA = 334,
    HASH = 335,
    THEN = 336
  };
#endif
/* Tokens.  */
#define BREAK 258
#define CASE 259
#define CHAR 260
#define CONTINUE 261
#define DEFAULT 262
#define DO 263
#define DOUBLE 264
#define ELSE 265
#define EXTERN 266
#define FLOAT 267
#define FOR 268
#define GOTO 269
#define IF 270
#define INT 271
#define LONG 272
#define RETURN 273
#define SHORT 274
#define SIZEOF 275
#define STATIC 276
#define SWITCH 277
#define VOID 278
#define WHILE 279
#define CONST 280
#define RESTRICT 281
#define VOLATILE 282
#define INLINE 283
#define INT_CONST 284
#define FLOAT_CONST 285
#define CHAR_CONST 286
#define STR_LITERAL 287
#define ID 288
#define SQ_LBRACE 289
#define SQ_RBRACE 290
#define RO_LBRACE 291
#define RO_RBRACE 292
#define FL_LBRACE 293
#define FL_RBRACE 294
#define DOT 295
#define MEM_OP 296
#define INCREMENT_OP 297
#define DECREMENT_OP 298
#define BIT_AND 299
#define MULT_OP 300
#define ADD_OP 301
#define MINUS_OP 302
#define BIT_COMPL 303
#define NOT_OP 304
#define DIV_OP 305
#define REM 306
#define L_SHIFT 307
#define R_SHIFT 308
#define LT 309
#define GT 310
#define LT_EQ 311
#define GT_EQ 312
#define EQ 313
#define NEQ 314
#define BIT_XOR 315
#define BIT_OR 316
#define LOGIC_AND 317
#define LOGIC_OR 318
#define QUERY 319
#define COLON 320
#define SEMI_COLON 321
#define VAR_ARG_LIST 322
#define ASSIGN 323
#define MULT_ASGN 324
#define DIV_ASGN 325
#define REM_ASGN 326
#define ADD_ASGN 327
#define MINUS_ASGN 328
#define LS_ASGN 329
#define RS_ASGN 330
#define BIT_AND_ASGN 331
#define BIT_XOR_ASGN 332
#define BIT_OR_ASGN 333
#define COMMA 334
#define HASH 335
#define THEN 336

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 7 "ass4_18CS30018.y"

  int intval;
  float floatval;
  char *charval;   

#line 297 "y.tab.c"

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   660

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  318

#define YYUNDEFTOK  2
#define YYMAXUTOK   336


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   106,   108,   110,   115,   116,   117,   121,
     122,   126,   128,   130,   132,   134,   136,   138,   140,   142,
     147,   149,   155,   157,   159,   161,   163,   165,   170,   172,
     174,   176,   178,   180,   185,   187,   192,   194,   196,   198,
     203,   205,   207,   212,   214,   216,   221,   223,   225,   227,
     229,   234,   236,   238,   243,   245,   250,   252,   257,   259,
     264,   266,   271,   273,   278,   280,   285,   287,   292,   294,
     296,   298,   300,   302,   304,   306,   308,   310,   312,   317,
     319,   324,   330,   335,   336,   340,   341,   345,   347,   349,
     351,   356,   358,   363,   365,   370,   372,   377,   379,   381,
     383,   385,   387,   389,   394,   395,   399,   401,   407,   409,
     411,   416,   421,   422,   426,   431,   432,   437,   438,   442,
     443,   447,   449,   451,   453,   455,   457,   459,   461,   466,
     468,   473,   475,   480,   482,   487,   489,   494,   496,   501,
     503,   508,   513,   515,   517,   522,   523,   527,   529,   534,
     539,   541,   546,   548,   554,   556,   558,   560,   562,   564,
     569,   571,   573,   578,   579,   583,   588,   590,   595,   597,
     602,   603,   607,   612,   614,   616,   621,   623,   625,   627,
     632,   634,   636,   638,   645,   647,   652,   654,   659,   660,
     664,   669,   671
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTERN", "FLOAT", "FOR", "GOTO",
  "IF", "INT", "LONG", "RETURN", "SHORT", "SIZEOF", "STATIC", "SWITCH",
  "VOID", "WHILE", "CONST", "RESTRICT", "VOLATILE", "INLINE", "INT_CONST",
  "FLOAT_CONST", "CHAR_CONST", "STR_LITERAL", "ID", "SQ_LBRACE",
  "SQ_RBRACE", "RO_LBRACE", "RO_RBRACE", "FL_LBRACE", "FL_RBRACE", "DOT",
  "MEM_OP", "INCREMENT_OP", "DECREMENT_OP", "BIT_AND", "MULT_OP", "ADD_OP",
  "MINUS_OP", "BIT_COMPL", "NOT_OP", "DIV_OP", "REM", "L_SHIFT", "R_SHIFT",
  "LT", "GT", "LT_EQ", "GT_EQ", "EQ", "NEQ", "BIT_XOR", "BIT_OR",
  "LOGIC_AND", "LOGIC_OR", "QUERY", "COLON", "SEMI_COLON", "VAR_ARG_LIST",
  "ASSIGN", "MULT_ASGN", "DIV_ASGN", "REM_ASGN", "ADD_ASGN", "MINUS_ASGN",
  "LS_ASGN", "RS_ASGN", "BIT_AND_ASGN", "BIT_XOR_ASGN", "BIT_OR_ASGN",
  "COMMA", "HASH", "THEN", "$accept", "primary_expression", "constant",
  "argument_expression_list_opt", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers_opt",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list_opt", "specifier_qualifier_list",
  "type_qualifier", "function_specifier", "pointer_opt", "declarator",
  "assignment_expression_opt", "type_qualifier_list_opt",
  "identifier_list_opt", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "designation_opt", "initializer_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "block_item_list_opt",
  "compound_statement", "block_item_list", "block_item", "expression_opt",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "declaration_list_opt", "function_definition", "declaration_list", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336
};
# endif

#define YYPACT_NINF (-202)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-190)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     621,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,   -33,   621,   621,   621,   621,
     572,  -202,  -202,   200,   -48,   -65,  -202,    15,   276,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,    -6,   200,
    -202,    -6,  -202,    -6,    66,   168,  -202,   -33,     4,   621,
    -202,  -202,  -202,   -19,    28,   105,   596,   459,  -202,  -202,
    -202,  -202,  -202,   417,     6,   480,   480,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,   312,   582,   501,  -202,    35,
      23,    30,   166,    70,    43,    31,    72,    78,    88,  -202,
    -202,  -202,   230,  -202,  -202,  -202,   200,   522,   169,  -202,
       0,   112,   117,    80,  -202,    90,   417,  -202,  -202,   -29,
     156,  -202,   156,   120,   501,   134,   168,   -20,  -202,    54,
    -202,   417,  -202,  -202,   501,   501,   138,   141,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,
    -202,   501,  -202,  -202,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   110,   501,   114,   113,   327,   153,   172,
     182,   501,   204,   228,   202,   186,  -202,  -202,  -202,   231,
    -202,   230,  -202,   203,  -202,  -202,  -202,  -202,   501,   236,
    -202,   245,   501,  -202,  -202,  -202,   300,   249,   246,  -202,
     501,  -202,  -202,  -202,   438,  -202,   251,  -202,  -202,  -202,
      56,  -202,  -202,   247,   -25,   252,   211,  -202,  -202,  -202,
    -202,  -202,  -202,  -202,    35,    35,    23,    23,    30,    30,
      30,    30,   166,   166,    70,    43,    31,    72,    78,   -45,
    -202,   226,  -202,   327,   270,   372,   232,   501,   234,   501,
     501,   327,  -202,  -202,  -202,   271,  -202,  -202,   272,  -202,
    -202,  -202,   275,  -202,     6,  -202,  -202,  -202,   168,   275,
    -202,  -202,   501,   501,   327,  -202,   274,   501,   242,  -202,
     -22,  -202,   -16,   -15,  -202,  -202,  -202,    -1,  -202,  -202,
    -202,  -202,   501,   254,   501,   327,   327,   327,  -202,   103,
      -2,   501,   256,   305,  -202,  -202,  -202,   258,   281,   501,
     327,  -202,   327,   292,  -202,  -202,   327,  -202
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   103,    95,   102,   100,   101,    99,    96,    97,
     108,   109,   110,   111,   187,   113,    85,    85,    85,    85,
       0,   184,   186,   118,     0,    84,    91,     0,    93,   112,
      87,    86,    88,    89,    90,     1,   185,   131,   129,   117,
      82,   113,   121,   113,   114,     0,   191,   113,     0,   188,
     130,   132,    92,    93,     0,   118,   120,     0,     6,     7,
       8,     4,     2,     0,   146,     0,     0,    28,    29,    30,
      31,    32,    33,    11,     3,    22,    34,     0,    36,    40,
      43,    46,    51,    54,    56,    58,    60,    62,    64,    66,
     142,    94,   164,   190,   192,   122,   118,   116,   117,   139,
     113,     0,     0,   133,   135,   119,     0,    26,    79,     0,
     105,   141,   105,     0,     0,     0,     0,     0,   145,     0,
     150,     0,    23,    24,     0,    10,     0,     0,    16,    17,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,     0,    34,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,     0,     0,
       0,   171,     0,     0,     2,   170,   168,   169,   154,     0,
     155,   163,   166,     0,   156,   157,   158,   159,     0,    29,
     115,     0,     0,   137,   128,   127,     0,     0,     0,     5,
       0,   106,   104,   107,     0,    81,     0,   153,   147,   143,
     146,   149,   151,     0,     0,     0,     9,    20,    14,    15,
      67,    37,    38,    39,    41,    42,    44,    45,    47,    48,
      49,    50,    52,    53,    55,    57,    59,    61,    63,     0,
     182,     0,   181,   171,     0,   171,     0,     0,     0,     0,
       0,   171,   165,   167,   172,     0,   126,   123,     0,   134,
     136,   140,    27,    80,   146,    35,   152,   144,     0,     0,
      12,    13,     0,     0,   171,   162,     0,   171,     0,   180,
       0,   183,     0,     0,   160,   124,   125,     0,   148,    21,
      65,   161,     0,     0,   171,   171,   171,   171,    18,   146,
       0,   171,     0,   173,   175,   176,    19,     0,     0,   171,
     171,   177,   171,     0,   174,   179,   171,   178
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,  -202,  -202,  -202,  -202,   -41,  -202,   -70,    55,
      59,   185,    75,   175,   192,   184,   201,   205,  -202,  -109,
     -44,  -202,   -63,   198,   -26,  -202,   174,    11,  -202,   323,
    -202,   -50,   266,    26,    29,  -202,  -202,   -11,  -202,   -52,
    -202,  -202,   330,   324,  -202,  -202,   189,  -202,   -80,  -110,
    -201,   116,  -202,  -202,   263,  -150,  -202,  -202,   338,  -202,
     206,  -124,  -202,  -202,  -202,  -202,  -202,   370,  -202,  -202,
    -202
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   215,    75,   216,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
     108,   141,   175,   206,    14,    24,    30,    47,    25,    26,
      16,    17,   201,   111,    18,    19,    27,    53,   191,    38,
     101,    44,    29,    39,   102,   103,   104,   105,   113,    91,
     116,   117,   118,   119,   120,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    20,    21,    48,    22,
      49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,    90,    46,    97,    28,   205,   208,   143,   199,   268,
     270,    15,    23,   110,    41,   295,   107,   244,    40,   209,
     273,   296,   297,    94,   122,   123,   198,    31,    31,    31,
      31,    15,    54,   -83,   200,   307,   142,  -138,   298,    23,
     114,   213,    92,   109,   188,    23,   115,   248,    42,    45,
     200,    43,    37,   190,   200,   205,   110,   200,   109,   210,
     110,   214,   110,   200,   200,    95,   176,   100,    51,   147,
     148,   110,    90,   142,   221,   222,   223,   200,   299,  -138,
     144,   217,   149,   150,    37,   145,   146,   157,   114,   193,
     114,   158,   112,   275,   115,   267,   115,   220,   268,   239,
      55,   284,    56,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   278,   211,   142,   291,    37,    96,    51,   155,   156,
      10,    11,    12,   159,   265,   112,   202,   114,   202,   112,
     160,   112,   306,   115,   255,   303,   304,   305,   258,   194,
     112,   161,   162,   293,   195,   176,   263,   204,   288,   196,
     314,     1,   315,   142,   290,     2,   317,   207,     4,   197,
     302,   218,     5,     6,   219,     7,   240,   308,   243,     9,
     242,    10,    11,    12,   280,   313,   282,   283,    57,   245,
     192,    32,    33,    34,    10,    11,    12,    58,    59,    60,
      61,    62,   224,   225,    63,   246,    64,   100,   226,   227,
      65,    66,    67,    68,    69,    70,    71,    72,   247,   277,
     151,   152,   153,   154,    90,    10,    11,    12,   289,   300,
     232,   233,   142,   163,   164,     1,   165,   166,   167,     2,
     249,     3,     4,   168,   169,   170,     5,     6,   171,     7,
      57,     8,   172,     9,   173,    10,    11,    12,    13,    58,
      59,    60,    61,   174,   250,   200,    63,   251,    92,   254,
     252,   256,    65,    66,    67,    68,    69,    70,    71,    72,
     257,     1,   261,   262,   269,     2,   266,     3,     4,   271,
     272,   274,     5,     6,   276,     7,  -171,     8,   279,     9,
     281,    10,    11,    12,    13,     1,   285,   286,   294,     2,
     292,     3,     4,   264,  -189,   310,     5,     6,   312,     7,
     301,     8,   309,     9,   311,    10,    11,    12,    13,   316,
     163,   164,   234,   165,   166,   167,   228,   229,   230,   231,
     168,   169,   170,   236,    45,   171,   124,    57,   125,   172,
     235,   173,   126,   127,   128,   129,    58,    59,    60,    61,
     174,   237,   241,    63,    52,    92,   238,   259,    50,    65,
      66,    67,    68,    69,    70,    71,    72,     1,   203,    98,
     287,     2,   212,     3,     4,   260,    93,   253,     5,     6,
      36,     7,    57,     8,     0,     9,     0,    10,    11,    12,
      13,    58,    59,    60,    61,    62,     0,     0,    63,     0,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,     1,     0,     0,     0,     2,     0,     0,     4,
       0,     0,     0,     5,     6,     0,     7,    57,     0,     0,
       9,     0,    10,    11,    12,     0,    58,    59,    60,    61,
      62,     0,     0,    63,     0,     0,     0,     0,    57,    65,
      66,    67,    68,    69,    70,    71,    72,    58,    59,    60,
      61,    62,     0,     0,    63,     0,   264,     0,     0,    57,
      65,    66,    67,    68,    69,    70,    71,    72,    58,    59,
      60,    61,    62,     0,     0,   106,     0,     0,     0,     0,
      57,    65,    66,    67,    68,    69,    70,    71,    72,    58,
      59,    60,    61,    62,     0,     0,   121,     0,     0,     0,
       0,    57,    65,    66,    67,    68,    69,    70,    71,    72,
      58,    59,    60,    61,    62,     0,     0,    63,     0,     0,
       0,     0,    57,    65,    66,    67,    68,    69,    70,    71,
      72,    58,    59,    60,    61,    62,     0,     0,    63,     0,
       0,     0,     0,     0,    65,    66,    67,   189,    69,    70,
      71,    72,    35,     0,     0,     0,     0,     1,     0,     0,
       0,     2,     0,     3,     4,     0,     0,     0,     5,     6,
       0,     7,     0,     8,     0,     9,     0,    10,    11,    12,
      13,     1,     0,     0,     0,     2,     0,     3,     4,     0,
       0,     0,     5,     6,     0,     7,     0,     8,     0,     9,
       0,    10,    11,    12,    13,     0,     1,     0,     0,    99,
       2,     0,     3,     4,     0,     0,     0,     5,     6,     0,
       7,     0,     8,     0,     9,     0,    10,    11,    12,    13,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140
};

static const yytype_int16 yycheck[] =
{
      63,    45,    28,    55,    15,   114,   116,    77,    37,   210,
      35,     0,    45,    63,    79,    37,    57,   167,    66,    39,
      65,    37,    37,    49,    65,    66,   106,    16,    17,    18,
      19,    20,    43,    66,    79,    37,    77,    37,    39,    45,
      34,   121,    38,   106,    96,    45,    40,   171,    33,    68,
      79,    36,    23,    97,    79,   164,   106,    79,   121,    79,
     110,   124,   112,    79,    79,    37,    92,    56,    39,    46,
      47,   121,   116,   114,   144,   145,   146,    79,    79,    79,
      45,   125,    52,    53,    55,    50,    51,    44,    34,   100,
      34,    60,    63,   243,    40,    39,    40,   141,   299,   162,
      34,   251,    36,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   245,    68,   164,   274,    96,    21,    98,    58,    59,
      25,    26,    27,    61,   204,   106,   110,    34,   112,   110,
      62,   112,    39,    40,   188,   295,   296,   297,   192,    37,
     121,    63,    64,   277,    37,   181,   200,    37,   268,    79,
     310,     5,   312,   204,   273,     9,   316,    33,    12,    79,
     294,    33,    16,    17,    33,    19,    66,   301,    65,    23,
      66,    25,    26,    27,   247,   309,   249,   250,    20,    36,
      21,    17,    18,    19,    25,    26,    27,    29,    30,    31,
      32,    33,   147,   148,    36,    33,    38,   196,   149,   150,
      42,    43,    44,    45,    46,    47,    48,    49,    36,   245,
      54,    55,    56,    57,   268,    25,    26,    27,   272,   292,
     155,   156,   273,     3,     4,     5,     6,     7,     8,     9,
      36,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    36,    79,    36,    65,    38,    66,
      39,    35,    42,    43,    44,    45,    46,    47,    48,    49,
      35,     5,    33,    37,    37,     9,    35,    11,    12,    37,
      79,    65,    16,    17,    24,    19,    66,    21,    66,    23,
      66,    25,    26,    27,    28,     5,    35,    35,    66,     9,
      36,    11,    12,    38,    38,    10,    16,    17,    37,    19,
      66,    21,    66,    23,    66,    25,    26,    27,    28,    37,
       3,     4,   157,     6,     7,     8,   151,   152,   153,   154,
      13,    14,    15,   159,    68,    18,    34,    20,    36,    22,
     158,    24,    40,    41,    42,    43,    29,    30,    31,    32,
      33,   160,   164,    36,    41,    38,   161,    67,    38,    42,
      43,    44,    45,    46,    47,    48,    49,     5,   112,    55,
     264,     9,   119,    11,    12,   196,    48,   181,    16,    17,
      20,    19,    20,    21,    -1,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,     5,    -1,    -1,    -1,     9,    -1,    -1,    12,
      -1,    -1,    -1,    16,    17,    -1,    19,    20,    -1,    -1,
      23,    -1,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    20,    42,
      43,    44,    45,    46,    47,    48,    49,    29,    30,    31,
      32,    33,    -1,    -1,    36,    -1,    38,    -1,    -1,    20,
      42,    43,    44,    45,    46,    47,    48,    49,    29,    30,
      31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      20,    42,    43,    44,    45,    46,    47,    48,    49,    29,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    20,    42,    43,    44,    45,    46,    47,    48,    49,
      29,    30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    20,    42,    43,    44,    45,    46,    47,    48,
      49,    29,    30,    31,    32,    33,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,     0,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    -1,    23,    -1,    25,    26,    27,
      28,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    16,    17,    -1,    19,    -1,    21,    -1,    23,
      -1,    25,    26,    27,    28,    -1,     5,    -1,    -1,    33,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    21,    -1,    23,    -1,    25,    26,    27,    28,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    11,    12,    16,    17,    19,    21,    23,
      25,    26,    27,    28,   106,   109,   112,   113,   116,   117,
     148,   149,   151,    45,   107,   110,   111,   118,   119,   124,
     108,   109,   108,   108,   108,     0,   149,   116,   121,   125,
      66,    79,    33,    36,   123,    68,   106,   109,   150,   152,
     124,   116,   111,   119,   119,    34,    36,    20,    29,    30,
      31,    32,    33,    36,    38,    42,    43,    44,    45,    46,
      47,    48,    49,    83,    84,    86,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   131,    38,   140,   106,    37,    21,   121,   125,    33,
     109,   122,   126,   127,   128,   129,    36,    88,   102,   104,
     113,   115,   116,   130,    34,    40,   132,   133,   134,   135,
     136,    36,    88,    88,    34,    36,    40,    41,    42,    43,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,   103,    88,    90,    45,    50,    51,    46,    47,    52,
      53,    54,    55,    56,    57,    58,    59,    44,    60,    61,
      62,    63,    64,     3,     4,     6,     7,     8,    13,    14,
      15,    18,    22,    24,    33,   104,   106,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   121,    45,
     102,   120,    21,   119,    37,    37,    79,    79,   130,    37,
      79,   114,   115,   114,    37,   101,   105,    33,   131,    39,
      79,    68,   136,   130,   104,    85,    87,   102,    33,    33,
     102,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      93,    93,    94,    94,    95,    96,    97,    98,    99,   104,
      66,   105,    66,    65,   137,    36,    33,    36,   143,    36,
      36,    65,    39,   142,    66,   102,    35,    35,   102,    67,
     128,    33,    37,   102,    38,    90,    35,    39,   132,    37,
      35,    37,    79,    65,    65,   137,    24,   106,   143,    66,
     104,    66,   104,   104,   137,    35,    35,   133,   131,   102,
     101,   137,    36,   143,    66,    37,    37,    37,    39,    79,
     104,    66,   143,   137,   137,   137,    39,    37,   143,    66,
      10,    66,    37,   143,   137,   137,    37,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    83,    83,    84,    84,    84,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      89,    89,    89,    89,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      94,    95,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   104,
     104,   105,   106,   107,   107,   108,   108,   109,   109,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   131,   131,   131,   132,   132,   133,   133,   134,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   140,   141,   141,   142,   142,
     143,   143,   144,   145,   145,   145,   146,   146,   146,   146,
     147,   147,   147,   147,   148,   148,   149,   149,   150,   150,
     151,   152,   152
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       0,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     0,     1,     0,     1,     2,     2,     2,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     2,     1,     1,
       1,     1,     1,     0,     2,     1,     0,     1,     0,     1,
       0,     1,     3,     5,     6,     6,     5,     4,     4,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     1,
       3,     1,     1,     3,     4,     1,     0,     2,     4,     2,
       1,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     1,     0,     3,     1,     2,     1,     1,
       1,     0,     2,     5,     7,     5,     5,     7,     9,     8,
       3,     2,     2,     3,     1,     2,     1,     1,     1,     0,
       4,     1,     2
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
#line 105 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : primary_expression -> identifier\n", yylineno);}
#line 1805 "y.tab.c"
    break;

  case 3:
#line 107 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : primary_expression -> constant\n", yylineno);}
#line 1811 "y.tab.c"
    break;

  case 4:
#line 109 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : primary_expression -> string_literal\n", yylineno);}
#line 1817 "y.tab.c"
    break;

  case 5:
#line 111 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : primary_expression -> ( expression )\n", yylineno);}
#line 1823 "y.tab.c"
    break;

  case 11:
#line 127 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : postfix_expression -> primary_expression\n",yylineno);}
#line 1829 "y.tab.c"
    break;

  case 12:
#line 129 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression [expression]\n",yylineno);}
#line 1835 "y.tab.c"
    break;

  case 13:
#line 131 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : postfix_expression > postfix_expression (expression)\n",yylineno);}
#line 1841 "y.tab.c"
    break;

  case 14:
#line 133 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression.identifier\n",yylineno);}
#line 1847 "y.tab.c"
    break;

  case 15:
#line 135 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression->identifier\n",yylineno);}
#line 1853 "y.tab.c"
    break;

  case 16:
#line 137 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression++\n",yylineno);}
#line 1859 "y.tab.c"
    break;

  case 17:
#line 139 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression--\n",yylineno);}
#line 1865 "y.tab.c"
    break;

  case 18:
#line 141 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : postfix_expression -> (type-name){initializer-list}\n",yylineno);}
#line 1871 "y.tab.c"
    break;

  case 19:
#line 143 "ass4_18CS30018.y"
                    {printf("LINE NO = %d ; RULE : postfix_expression -> (type-name){ initializer-list , }\n",yylineno);}
#line 1877 "y.tab.c"
    break;

  case 20:
#line 148 "ass4_18CS30018.y"
                              {printf("LINE NO = %d ; RULE : argument_expression_list -> assignment_expression\n",yylineno);}
#line 1883 "y.tab.c"
    break;

  case 21:
#line 150 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : argument_expression_list -> argument-expression-list , assignment expression\n",yylineno);}
#line 1889 "y.tab.c"
    break;

  case 22:
#line 156 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : unary_expression -> postfix_expression\n",yylineno);}
#line 1895 "y.tab.c"
    break;

  case 23:
#line 158 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : unary_expression -> ++unaryexpression\n",yylineno);}
#line 1901 "y.tab.c"
    break;

  case 24:
#line 160 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : unary_expression -> --unary_expression\n",yylineno);}
#line 1907 "y.tab.c"
    break;

  case 25:
#line 162 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : unary_expression -> unary_operator cast_expression\n",yylineno);}
#line 1913 "y.tab.c"
    break;

  case 26:
#line 164 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : unary_expression -> sizeof unary_expression\n",yylineno);}
#line 1919 "y.tab.c"
    break;

  case 27:
#line 166 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_expression -> sizeof(type_name)\n",yylineno);}
#line 1925 "y.tab.c"
    break;

  case 28:
#line 171 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_operator -> & \n",yylineno);}
#line 1931 "y.tab.c"
    break;

  case 29:
#line 173 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_operator -> * \n",yylineno);}
#line 1937 "y.tab.c"
    break;

  case 30:
#line 175 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_operator -> + \n",yylineno);}
#line 1943 "y.tab.c"
    break;

  case 31:
#line 177 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_operator -> - \n",yylineno);}
#line 1949 "y.tab.c"
    break;

  case 32:
#line 179 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_operator -> ~ \n",yylineno);}
#line 1955 "y.tab.c"
    break;

  case 33:
#line 181 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : unary_operator -> ! \n",yylineno);}
#line 1961 "y.tab.c"
    break;

  case 34:
#line 186 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : cast_expression -> unary_expression\n",yylineno);}
#line 1967 "y.tab.c"
    break;

  case 35:
#line 188 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : cast_expression -> (type_name) cast_expression\n",yylineno);}
#line 1973 "y.tab.c"
    break;

  case 36:
#line 193 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> cast_expression\n",yylineno);}
#line 1979 "y.tab.c"
    break;

  case 37:
#line 195 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> multiplicative_expression * cast_expression\n",yylineno);}
#line 1985 "y.tab.c"
    break;

  case 38:
#line 197 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> multiplicative_expression / cast_expression\n",yylineno);}
#line 1991 "y.tab.c"
    break;

  case 39:
#line 199 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> multiplicative_expression REM  cast_expression\n",yylineno);}
#line 1997 "y.tab.c"
    break;

  case 40:
#line 204 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : additive_expression -> additive_expression\n",yylineno);}
#line 2003 "y.tab.c"
    break;

  case 41:
#line 206 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : additive_expression -> additive_expression + multiplicative_expression\n",yylineno);}
#line 2009 "y.tab.c"
    break;

  case 42:
#line 208 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : additive_expression -> additive_expression - mutliplicative_expression\n",yylineno);}
#line 2015 "y.tab.c"
    break;

  case 43:
#line 213 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : shift_expression -> additive_expression\n",yylineno);}
#line 2021 "y.tab.c"
    break;

  case 44:
#line 215 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : shift_expression -> shift_expression << additive_expression\n",yylineno);}
#line 2027 "y.tab.c"
    break;

  case 45:
#line 217 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : shift_expression -> shift_expression >> additive_expression\n",yylineno);}
#line 2033 "y.tab.c"
    break;

  case 46:
#line 222 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : relational_expression -> shift_expression\n",yylineno);}
#line 2039 "y.tab.c"
    break;

  case 47:
#line 224 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : relational_expression -> relational_expression < shift_expression\n",yylineno);}
#line 2045 "y.tab.c"
    break;

  case 48:
#line 226 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : relational_expression -> relational_Expresssion > shift_expression\n",yylineno);}
#line 2051 "y.tab.c"
    break;

  case 49:
#line 228 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : relational_expression -> relational_expression <= shift_expression\n",yylineno);}
#line 2057 "y.tab.c"
    break;

  case 50:
#line 230 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : relational_expression -> relational_expression >= shift-expression\n",yylineno);}
#line 2063 "y.tab.c"
    break;

  case 51:
#line 235 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : equality_expression -> relational_expression\n",yylineno);}
#line 2069 "y.tab.c"
    break;

  case 52:
#line 237 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : equality_expression -> equality_expression == relational_expression\n",yylineno);}
#line 2075 "y.tab.c"
    break;

  case 53:
#line 239 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : equality_expression -> equality_expression != relational_expression\n",yylineno);}
#line 2081 "y.tab.c"
    break;

  case 54:
#line 244 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : AND_expression -> equality_expression\n",yylineno);}
#line 2087 "y.tab.c"
    break;

  case 55:
#line 246 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : AND_expression -> AND_expression & equality_expression\n",yylineno);}
#line 2093 "y.tab.c"
    break;

  case 56:
#line 251 "ass4_18CS30018.y"
           {printf("LINE NO = %d ; RULE : exclusive_OR_expression -> AND_expression\n",yylineno);}
#line 2099 "y.tab.c"
    break;

  case 57:
#line 253 "ass4_18CS30018.y"
           {printf("LINE NO = %d ; RULE : exclusive_OR_expression -> exclusive_OR_expression ^ AND_expression\n",yylineno);}
#line 2105 "y.tab.c"
    break;

  case 58:
#line 258 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : inclusive_OR_expression -> exclusive_OR_expression\n",yylineno);}
#line 2111 "y.tab.c"
    break;

  case 59:
#line 260 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n",yylineno);}
#line 2117 "y.tab.c"
    break;

  case 60:
#line 265 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : logical_AND_expression -> inclusive_OR_expression\n",yylineno);}
#line 2123 "y.tab.c"
    break;

  case 61:
#line 267 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n",yylineno);}
#line 2129 "y.tab.c"
    break;

  case 62:
#line 272 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : logical_OR_expression -> logical_AND_expression\n",yylineno);}
#line 2135 "y.tab.c"
    break;

  case 63:
#line 274 "ass4_18CS30018.y"
         {printf("LINE NO = %d ; RULE : logical_OR_expression -> logical_OR_expression || logical_AND_expression\n",yylineno);}
#line 2141 "y.tab.c"
    break;

  case 64:
#line 279 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : conditional_expression -> logical_OR_expression\n",yylineno);}
#line 2147 "y.tab.c"
    break;

  case 65:
#line 281 "ass4_18CS30018.y"
  {printf("LINE NO = %d ; RULE: conditional_expression -> logical_OR_expression?expression:conditional_expression\n",yylineno);}
#line 2153 "y.tab.c"
    break;

  case 66:
#line 286 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : assignment_expression -> conditional_expression\n",yylineno);}
#line 2159 "y.tab.c"
    break;

  case 67:
#line 288 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : assignment_expression -> unary_expression assignment_operator assignment_expression\n",yylineno);}
#line 2165 "y.tab.c"
    break;

  case 68:
#line 293 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> = \n",yylineno);}
#line 2171 "y.tab.c"
    break;

  case 69:
#line 295 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> *= \n",yylineno);}
#line 2177 "y.tab.c"
    break;

  case 70:
#line 297 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> /= \n",yylineno);}
#line 2183 "y.tab.c"
    break;

  case 71:
#line 299 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> MODULO \n",yylineno);}
#line 2189 "y.tab.c"
    break;

  case 72:
#line 301 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> += \n",yylineno);}
#line 2195 "y.tab.c"
    break;

  case 73:
#line 303 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> -= \n",yylineno);}
#line 2201 "y.tab.c"
    break;

  case 74:
#line 305 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> <<= \n",yylineno);}
#line 2207 "y.tab.c"
    break;

  case 75:
#line 307 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> >>= \n",yylineno);}
#line 2213 "y.tab.c"
    break;

  case 76:
#line 309 "ass4_18CS30018.y"
                          {printf("LINE NO = %d ; RULE : assignment_operator -> &= \n",yylineno);}
#line 2219 "y.tab.c"
    break;

  case 77:
#line 311 "ass4_18CS30018.y"
                           {printf("LINE NO = %d ; RULE : assignment_operator -> ^= \n",yylineno);}
#line 2225 "y.tab.c"
    break;

  case 78:
#line 313 "ass4_18CS30018.y"
                           {printf("LINE NO = %d ; RULE : assignment_operator -> |= \n",yylineno);}
#line 2231 "y.tab.c"
    break;

  case 79:
#line 318 "ass4_18CS30018.y"
              {printf("LINE NO = %d ; RULE : expression -> assignment_expression\n",yylineno);}
#line 2237 "y.tab.c"
    break;

  case 80:
#line 320 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : expression -> expression,assignment_expression\n",yylineno);}
#line 2243 "y.tab.c"
    break;

  case 81:
#line 325 "ass4_18CS30018.y"
                    {printf("LINE NO = %d ; RULE : constant_expression -> conditional_expression\n",yylineno);}
#line 2249 "y.tab.c"
    break;

  case 82:
#line 331 "ass4_18CS30018.y"
              {printf("LINE NO = %d ; RULE : declaration -> declaration_specifiers init_declarator_list_opt ;\n",yylineno);}
#line 2255 "y.tab.c"
    break;

  case 87:
#line 346 "ass4_18CS30018.y"
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n",yylineno);}
#line 2261 "y.tab.c"
    break;

  case 88:
#line 348 "ass4_18CS30018.y"
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> type_specifier declaration_specifiers_opt\n",yylineno);}
#line 2267 "y.tab.c"
    break;

  case 89:
#line 350 "ass4_18CS30018.y"
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> type_qualifier declaration_specifiers_opt\n",yylineno);}
#line 2273 "y.tab.c"
    break;

  case 90:
#line 352 "ass4_18CS30018.y"
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> function_specifier declaration_specifiers_opt\n",yylineno);}
#line 2279 "y.tab.c"
    break;

  case 91:
#line 357 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : init_declarator_list -> init_declarator\n",yylineno);}
#line 2285 "y.tab.c"
    break;

  case 92:
#line 359 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : init_declarator_list -> init_declarator_list , init_declarator\n",yylineno);}
#line 2291 "y.tab.c"
    break;

  case 93:
#line 364 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : init_declarator -> declarator\n",yylineno);}
#line 2297 "y.tab.c"
    break;

  case 94:
#line 366 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : init_declarator -> declarator = initializer\n",yylineno);}
#line 2303 "y.tab.c"
    break;

  case 95:
#line 371 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : storage_class_specifier -> extern\n",yylineno);}
#line 2309 "y.tab.c"
    break;

  case 96:
#line 373 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : storage_class_specifier -> static\n",yylineno);}
#line 2315 "y.tab.c"
    break;

  case 97:
#line 378 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> void\n",yylineno);}
#line 2321 "y.tab.c"
    break;

  case 98:
#line 380 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> char\n",yylineno);}
#line 2327 "y.tab.c"
    break;

  case 99:
#line 382 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> short\n",yylineno);}
#line 2333 "y.tab.c"
    break;

  case 100:
#line 384 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> int\n",yylineno);}
#line 2339 "y.tab.c"
    break;

  case 101:
#line 386 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> long\n",yylineno);}
#line 2345 "y.tab.c"
    break;

  case 102:
#line 388 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> float\n",yylineno);}
#line 2351 "y.tab.c"
    break;

  case 103:
#line 390 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> double\n",yylineno);}
#line 2357 "y.tab.c"
    break;

  case 106:
#line 400 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n",yylineno);}
#line 2363 "y.tab.c"
    break;

  case 107:
#line 402 "ass4_18CS30018.y"
        {printf("LINE NO = %d ; RULE : specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n",yylineno);}
#line 2369 "y.tab.c"
    break;

  case 108:
#line 408 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_qualifier -> const\n",yylineno);}
#line 2375 "y.tab.c"
    break;

  case 109:
#line 410 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> restrict\n",yylineno);}
#line 2381 "y.tab.c"
    break;

  case 110:
#line 412 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : type_specifier -> volatile\n",yylineno);}
#line 2387 "y.tab.c"
    break;

  case 111:
#line 417 "ass4_18CS30018.y"
                     {printf("LINE NO = %d ; RULE : function_specifier -> inline\n",yylineno);}
#line 2393 "y.tab.c"
    break;

  case 114:
#line 427 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : declarator -> pointer_opt direct_declarator\n",yylineno);}
#line 2399 "y.tab.c"
    break;

  case 121:
#line 448 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> identifier\n",yylineno);}
#line 2405 "y.tab.c"
    break;

  case 122:
#line 450 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> (declarator)\n",yylineno);}
#line 2411 "y.tab.c"
    break;

  case 123:
#line 452 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [type_qualifier_list_opt assignment_expression_opt]\n",yylineno);}
#line 2417 "y.tab.c"
    break;

  case 124:
#line 454 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [static type_qualifier_list_opt assignment_expression_opt]\n",yylineno);}
#line 2423 "y.tab.c"
    break;

  case 125:
#line 456 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [type_qualifier_list static assignment_expression_opt]\n",yylineno);}
#line 2429 "y.tab.c"
    break;

  case 126:
#line 458 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [type_qualifier_list_opt *]\n",yylineno);}
#line 2435 "y.tab.c"
    break;

  case 127:
#line 460 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator (parameter_type_list)\n",yylineno);}
#line 2441 "y.tab.c"
    break;

  case 128:
#line 462 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator (identifier_list_opt)\n",yylineno);}
#line 2447 "y.tab.c"
    break;

  case 129:
#line 467 "ass4_18CS30018.y"
         {printf("LINE NO = %d ; RULE : pointer -> *type_qualifier_list_opt\n",yylineno);}
#line 2453 "y.tab.c"
    break;

  case 130:
#line 469 "ass4_18CS30018.y"
          {printf("LINE NO = %d ; RULE : pointer -> *type_qualifier_list_opt pointer\n",yylineno);}
#line 2459 "y.tab.c"
    break;

  case 131:
#line 474 "ass4_18CS30018.y"
                    {printf("LINE NO = %d ; RULE : type_qualifier_list -> type_qualifier\n",yylineno);}
#line 2465 "y.tab.c"
    break;

  case 132:
#line 476 "ass4_18CS30018.y"
                     {printf("LINE NO = %d ; RULE : type_qualifier_list -> type_qualifier_list type_qualifier\n",yylineno);}
#line 2471 "y.tab.c"
    break;

  case 133:
#line 481 "ass4_18CS30018.y"
                    {printf("LINE NO = %d ; RULE : parameter_type_list -> parameter_list\n",yylineno);}
#line 2477 "y.tab.c"
    break;

  case 134:
#line 483 "ass4_18CS30018.y"
                     {printf("LINE NO = %d ; RULE : parameter_type_list -> parameter_list , ...\n",yylineno);}
#line 2483 "y.tab.c"
    break;

  case 135:
#line 488 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : parameter_list -> parameter_declarator\n",yylineno);}
#line 2489 "y.tab.c"
    break;

  case 136:
#line 490 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : parameter_list -> parameter_list , parameter_declaration\n",yylineno);}
#line 2495 "y.tab.c"
    break;

  case 137:
#line 495 "ass4_18CS30018.y"
                        {printf("LINE NO = %d ; RULE : parameter_declaration -> declaration_specifiers declarator\n",yylineno);}
#line 2501 "y.tab.c"
    break;

  case 138:
#line 497 "ass4_18CS30018.y"
                         {printf("LINE NO = %d ; RULE : parameter_declaration -> declaration_specifiers\n",yylineno);}
#line 2507 "y.tab.c"
    break;

  case 139:
#line 502 "ass4_18CS30018.y"
                {printf("LINE NO = %d ; RULE : identifier_list -> identifier\n",yylineno);}
#line 2513 "y.tab.c"
    break;

  case 140:
#line 504 "ass4_18CS30018.y"
                   {printf("LINE NO = %d ; RULE : identifier_list -> identifier_list , identifier\n",yylineno);}
#line 2519 "y.tab.c"
    break;

  case 141:
#line 509 "ass4_18CS30018.y"
              {printf("LINE NO = %d ; RULE : type_name -> specifier_qualifier_list\n",yylineno);}
#line 2525 "y.tab.c"
    break;

  case 142:
#line 514 "ass4_18CS30018.y"
            {printf("LINE NO = %d ; RULE : initializer -> assignment_expression\n",yylineno);}
#line 2531 "y.tab.c"
    break;

  case 143:
#line 516 "ass4_18CS30018.y"
            {printf("LINE NO = %d ; RULE : initializer -> {initializer_list}\n",yylineno);}
#line 2537 "y.tab.c"
    break;

  case 144:
#line 518 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : initializer -> {initializer_list,}\n",yylineno);}
#line 2543 "y.tab.c"
    break;

  case 147:
#line 528 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : initializer_list -> designation_opt initializer\n",yylineno);}
#line 2549 "y.tab.c"
    break;

  case 148:
#line 530 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : initializer_list -> initializer_list , designation_opt initializer\n",yylineno);}
#line 2555 "y.tab.c"
    break;

  case 149:
#line 535 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : designation -> designator_list == \n",yylineno);}
#line 2561 "y.tab.c"
    break;

  case 150:
#line 540 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : designator_list -> designator\n",yylineno);}
#line 2567 "y.tab.c"
    break;

  case 151:
#line 542 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : designator_list -> designator_list designator\n",yylineno);}
#line 2573 "y.tab.c"
    break;

  case 152:
#line 547 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : designator -> [constant_expression]\n",yylineno);}
#line 2579 "y.tab.c"
    break;

  case 153:
#line 549 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : designator -> .identifier\n",yylineno);}
#line 2585 "y.tab.c"
    break;

  case 154:
#line 555 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : statement -> labeled_statement\n",yylineno);}
#line 2591 "y.tab.c"
    break;

  case 155:
#line 557 "ass4_18CS30018.y"
              {printf("LINE NO = %d ; RULE : statement -> compound_statement\n",yylineno);}
#line 2597 "y.tab.c"
    break;

  case 156:
#line 559 "ass4_18CS30018.y"
              {printf("LINE NO = %d ; RULE : statement -> expression_statement\n",yylineno);}
#line 2603 "y.tab.c"
    break;

  case 157:
#line 561 "ass4_18CS30018.y"
               {printf("LINE NO = %d ; RULE : statement -> selection_statement\n",yylineno);}
#line 2609 "y.tab.c"
    break;

  case 158:
#line 563 "ass4_18CS30018.y"
               {printf("LINE NO = %d ; RULE : statement -> iteration_statement\n",yylineno);}
#line 2615 "y.tab.c"
    break;

  case 159:
#line 565 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : statement -> jump_statement\n",yylineno);}
#line 2621 "y.tab.c"
    break;

  case 160:
#line 570 "ass4_18CS30018.y"
                   {printf("LINE NO = %d ; RULE : labeled_statement -> identifier : statement\n",yylineno);}
#line 2627 "y.tab.c"
    break;

  case 161:
#line 572 "ass4_18CS30018.y"
                    {printf("LINE NO = %d ; RULE : labeled_statement -> case constant_expression : statement\n",yylineno);}
#line 2633 "y.tab.c"
    break;

  case 162:
#line 574 "ass4_18CS30018.y"
                    {printf("LINE NO = %d ; RULE : labeled_statement -> default : statement\n",yylineno);}
#line 2639 "y.tab.c"
    break;

  case 165:
#line 584 "ass4_18CS30018.y"
                     {printf("LINE NO = %d ; RULE : compound_statement -> {block_item_list_opt}\n",yylineno);}
#line 2645 "y.tab.c"
    break;

  case 166:
#line 589 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : block_item_list -> block_item\n",yylineno);}
#line 2651 "y.tab.c"
    break;

  case 167:
#line 591 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : block_item_list -> block_item_list block_item\n",yylineno);}
#line 2657 "y.tab.c"
    break;

  case 168:
#line 596 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : block_item -> declarator\n",yylineno);}
#line 2663 "y.tab.c"
    break;

  case 169:
#line 598 "ass4_18CS30018.y"
             {printf("LINE NO = %d ; RULE : block_item -> statement\n",yylineno);}
#line 2669 "y.tab.c"
    break;

  case 172:
#line 608 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : expression_statement -> expression_opt ;\n",yylineno);}
#line 2675 "y.tab.c"
    break;

  case 173:
#line 613 "ass4_18CS30018.y"
                     {printf("LINE NO = %d ; RULE : selection_statement -> if (expresion) statement\n",yylineno);}
#line 2681 "y.tab.c"
    break;

  case 174:
#line 615 "ass4_18CS30018.y"
                     {printf("LINE NO = %d ; RULE : selection_statement -> if (expresion) statement else statement\n",yylineno);}
#line 2687 "y.tab.c"
    break;

  case 175:
#line 617 "ass4_18CS30018.y"
                      {printf("LINE NO = %d ; RULE : selection_statement -> switch (expresion) statement\n",yylineno);}
#line 2693 "y.tab.c"
    break;

  case 176:
#line 622 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : iteration_statement -> while (expression) statement\n",yylineno);}
#line 2699 "y.tab.c"
    break;

  case 177:
#line 624 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : iteration_statement -> do statement while (expression);\n",yylineno);}
#line 2705 "y.tab.c"
    break;

  case 178:
#line 626 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : iteration_statement -> for (expression_opt;expression_opt;expression_opt) statement\n",yylineno);}
#line 2711 "y.tab.c"
    break;

  case 179:
#line 628 "ass4_18CS30018.y"
      {printf("LINE NO = %d ; RULE : iteration_statement ->for (declaration expression_opt;expression_opt) statement\n",yylineno);}
#line 2717 "y.tab.c"
    break;

  case 180:
#line 633 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : jump_statement -> goto identifier;\n",yylineno);}
#line 2723 "y.tab.c"
    break;

  case 181:
#line 635 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : jump_statement -> continue;\n",yylineno);}
#line 2729 "y.tab.c"
    break;

  case 182:
#line 637 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : jump_statement -> break;\n",yylineno);}
#line 2735 "y.tab.c"
    break;

  case 183:
#line 639 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : jump_statement -> return expression_opt;\n",yylineno);}
#line 2741 "y.tab.c"
    break;

  case 184:
#line 646 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : translation_list -> external_declaration\n",yylineno);}
#line 2747 "y.tab.c"
    break;

  case 185:
#line 648 "ass4_18CS30018.y"
                  {printf("LINE NO = %d ; RULE : translation_list -> translation_unit external_declaration\n",yylineno);}
#line 2753 "y.tab.c"
    break;

  case 186:
#line 653 "ass4_18CS30018.y"
                       {printf("LINE NO = %d ; RULE : external_declaration -> function_definition\n",yylineno);}
#line 2759 "y.tab.c"
    break;

  case 187:
#line 655 "ass4_18CS30018.y"
                       {printf("LINE NO = %d ; RULE : external_declaration -> declaration\n",yylineno);}
#line 2765 "y.tab.c"
    break;

  case 190:
#line 665 "ass4_18CS30018.y"
       {printf("LINE NO = %d ; RULE : function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n",yylineno);}
#line 2771 "y.tab.c"
    break;

  case 191:
#line 670 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : declaration_list -> declaration\n",yylineno);}
#line 2777 "y.tab.c"
    break;

  case 192:
#line 672 "ass4_18CS30018.y"
                 {printf("LINE NO = %d ; RULE : declaration_list -> declaration_list declaration\n",yylineno);}
#line 2783 "y.tab.c"
    break;


#line 2787 "y.tab.c"

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
#line 675 "ass4_18CS30018.y"
     
		     		     
void yyerror(char *s) {
    printf("%s\n",s);
}
