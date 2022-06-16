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
#line 1 "ass6_18CS10013_18CS10024.y"

    #include "ass6_18CS10013_18CS10024_translator.h"
    void yyerror(const char*);
    extern int yylex(void);
    using namespace std;

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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    POINTER = 295,
    INCREMENT = 296,
    DECREMENT = 297,
    LEFT_SHIFT = 298,
    RIGHT_SHIFT = 299,
    LESS_EQUALS = 300,
    GREATER_EQUALS = 301,
    EQUALS = 302,
    NOT_EQUALS = 303,
    AND = 304,
    OR = 305,
    ELLIPSIS = 306,
    MULTIPLY_ASSIGN = 307,
    DIVIDE_ASSIGN = 308,
    MODULO_ASSIGN = 309,
    ADD_ASSIGN = 310,
    SUBTRACT_ASSIGN = 311,
    LEFT_SHIFT_ASSIGN = 312,
    RIGHT_SHIFT_ASSIGN = 313,
    AND_ASSIGN = 314,
    XOR_ASSIGN = 315,
    OR_ASSIGN = 316,
    SINGLE_LINE_COMMENT = 317,
    MULTI_LINE_COMMENT = 318,
    IDENTIFIER = 319,
    INTEGER_CONSTANT = 320,
    FLOATING_CONSTANT = 321,
    ENUMERATION_CONSTANT = 322,
    CHAR_CONST = 323,
    STRING_LITERAL = 324,
    UNARY = 325,
    IF_CONFLICT = 326
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define POINTER 295
#define INCREMENT 296
#define DECREMENT 297
#define LEFT_SHIFT 298
#define RIGHT_SHIFT 299
#define LESS_EQUALS 300
#define GREATER_EQUALS 301
#define EQUALS 302
#define NOT_EQUALS 303
#define AND 304
#define OR 305
#define ELLIPSIS 306
#define MULTIPLY_ASSIGN 307
#define DIVIDE_ASSIGN 308
#define MODULO_ASSIGN 309
#define ADD_ASSIGN 310
#define SUBTRACT_ASSIGN 311
#define LEFT_SHIFT_ASSIGN 312
#define RIGHT_SHIFT_ASSIGN 313
#define AND_ASSIGN 314
#define XOR_ASSIGN 315
#define OR_ASSIGN 316
#define SINGLE_LINE_COMMENT 317
#define MULTI_LINE_COMMENT 318
#define IDENTIFIER 319
#define INTEGER_CONSTANT 320
#define FLOATING_CONSTANT 321
#define ENUMERATION_CONSTANT 322
#define CHAR_CONST 323
#define STRING_LITERAL 324
#define UNARY 325
#define IF_CONFLICT 326

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "ass6_18CS10013_18CS10024.y"

    int intval;   //to hold the value of integer constant
    char charval; //to hold the value of character constant
    idStr idl;    // to define the type for Identifier
    float floatval; //to hold the value of floating constant
    string *strval; // to hold the value of enumberation scnstant
    decStr decl;   //to define the declarators
    arglistStr argsl; //to define the argumnets list
    int instr;  // to defin the type used by M->(epsilon)
    expresn expon;   // to define the structure of expression
    list *nextlist;  //to define the nextlist type for N->(epsilon)

#line 284 "y.tab.c"

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
#define YYLAST   1055

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

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
       2,     2,     2,    87,     2,     2,     2,    74,    85,     2,
      77,    78,    72,    70,    84,    71,    81,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    95,
      88,    94,    89,    92,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    90,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    82,    91,    83,    86,     2,     2,     2,
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
      65,    66,    67,    68,    69,    75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    55,    61,   111,   126,   141,   156,   171,
     175,   177,   180,   214,   277,   278,   281,   311,   341,   344,
     348,   358,   365,   369,   374,   378,   408,   438,   507,   508,
     510,   513,   516,   519,   522,   525,   529,   558,   562,   565,
     575,   585,   596,   599,   609,   620,   623,   631,   640,   643,
     657,   671,   685,   700,   703,   717,   732,   735,   744,   747,
     756,   759,   768,   771,   787,   790,   807,   810,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   853,
     856,   886,   891,   895,   902,   911,   918,   923,   924,   925,
     926,   928,   928,   931,   936,   938,   946,   990,   991,   992,
     993,   995,   999,  1003,  1004,  1008,  1009,  1010,  1014,  1015,
    1016,  1017,  1018,  1019,  1021,  1024,  1026,  1027,  1029,  1030,
    1031,  1033,  1041,  1043,  1044,  1046,  1047,  1049,  1050,  1051,
    1053,  1055,  1100,  1104,  1109,  1127,  1131,  1164,  1165,  1166,
    1167,  1329,  1432,  1433,  1435,  1439,  1444,  1444,  1447,  1451,
    1456,  1457,  1459,  1462,  1464,  1469,  1475,  1479,  1481,  1482,
    1484,  1486,  1489,  1490,  1492,  1493,  1495,  1495,  1498,  1500,
    1501,  1503,  1504,  1507,  1508,  1512,  1516,  1520,  1524,  1529,
    1530,  1531,  1533,  1538,  1542,  1547,  1551,  1558,  1562,  1567,
    1572,  1576,  1582,  1603,  1618,  1620,  1633,  1646,  1663,  1665,
    1666,  1667,  1668,  1691,  1692,  1694,  1695,  1740,  1777,  1777,
    1780,  1781
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "POINTER", "INCREMENT", "DECREMENT",
  "LEFT_SHIFT", "RIGHT_SHIFT", "LESS_EQUALS", "GREATER_EQUALS", "EQUALS",
  "NOT_EQUALS", "AND", "OR", "ELLIPSIS", "MULTIPLY_ASSIGN",
  "DIVIDE_ASSIGN", "MODULO_ASSIGN", "ADD_ASSIGN", "SUBTRACT_ASSIGN",
  "LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", "IDENTIFIER",
  "INTEGER_CONSTANT", "FLOATING_CONSTANT", "ENUMERATION_CONSTANT",
  "CHAR_CONST", "STRING_LITERAL", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "IF_CONFLICT", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'",
  "','", "'&'", "'~'", "'!'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "$accept", "M", "N", "primary_expression",
  "enumeration_constant", "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_operator", "assignment_expression",
  "constant_expression", "expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
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
      43,    45,    42,    47,    37,   325,   326,    40,    41,    91,
      93,    46,   123,   125,    44,    38,   126,    33,    60,    62,
      94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF (-279)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-210)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     982,  -279,  -279,  -279,  -279,   -51,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,   -41,   982,   982,  -279,   982,   982,   945,
    -279,  -279,   -66,   -33,    45,   -35,   -21,  -279,   345,   -11,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,    13,  -279,
      29,    45,  -279,    29,   667,  -279,   -41,    23,   982,  -279,
      29,    36,  -279,   -12,    63,  -279,  -279,  -279,  -279,    37,
     731,   763,   763,  -279,  -279,  -279,  -279,  -279,  -279,  -279,
    -279,   601,    40,  -279,  -279,  -279,  -279,    86,    98,   795,
    -279,   128,    90,   163,    28,   164,   104,    32,    88,   142,
     -27,  -279,  -279,  -279,   268,  -279,  -279,   115,   678,    10,
     795,  -279,   -16,   601,  -279,   601,  -279,  -279,  -279,   -64,
    1016,  -279,  1016,   119,   795,   140,   138,   667,  -279,    30,
    -279,   146,  -279,  -279,   795,   795,   155,  -279,  -279,  -279,
    -279,  -279,  -279,  -279,  -279,  -279,  -279,  -279,   795,  -279,
    -279,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,  -279,  -279,   116,
     130,   795,   145,   148,  -279,   156,   175,   165,   795,   167,
     168,   153,   166,  -279,  -279,  -279,  -279,   169,   170,  -279,
    -279,   154,  -279,  -279,  -279,  -279,  -279,    61,   173,   176,
     174,  -279,   177,    45,   827,    12,  -279,  -279,  -279,  -279,
     181,   182,  -279,   795,  -279,  -279,  -279,   699,   183,  -279,
    -279,    59,  -279,  -279,  -279,  -279,   178,   186,  -279,    34,
    -279,  -279,  -279,  -279,  -279,   128,   128,    90,    90,   163,
     163,   163,   163,    28,    28,   164,   104,    32,   795,   795,
    -279,  -279,   172,  -279,   533,   533,   459,   171,   795,   185,
     795,  -279,   533,  -279,   382,  -279,  -279,  -279,  -279,   904,
     184,   795,   187,  -279,   188,   795,   215,   215,  -279,    40,
    -279,  -279,  -279,   667,   795,  -279,  -279,    88,   142,   795,
     533,  -279,   263,   795,   205,  -279,   166,  -279,    -3,   795,
    -279,  -279,  -279,  -279,  -279,   228,  -279,  -279,   231,   144,
    -279,  -279,   166,  -279,   235,   218,  -279,   236,   533,   166,
    -279,  -279,  -279,    94,   222,  -279,   795,   795,  -279,  -279,
     238,  -279,  -279,   795,   239,  -279,   533,  -279,   795,   166,
     533,   223,   307,   533,  -279,   242,  -279,  -279,   309,  -279,
     227,   795,  -279,  -279,  -279,   533,   245,  -279,  -279,   533,
    -279
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   127,   107,   122,    97,   106,   130,   104,
     105,   100,   128,   103,   108,    98,   109,   101,   129,   110,
     111,   112,   206,   133,    92,    92,   113,    92,    92,     0,
     203,   205,   120,     0,   143,     0,    85,    93,    95,     0,
     132,    91,    87,    88,    89,    90,     1,   204,     0,   150,
     148,   142,    84,   133,     0,   210,   133,     0,   208,   134,
     133,   131,    10,   125,     0,   123,   149,   151,    94,    95,
       0,     0,     0,     4,     5,     6,     7,     8,    32,    33,
      31,     0,   167,    30,    34,    35,    11,    24,    36,     0,
      38,    42,    45,    48,    53,    56,    58,    60,    62,    64,
      66,    79,   161,    96,   184,   207,   211,     0,   147,   143,
       0,   118,     0,     0,    28,     0,    25,    26,    82,     0,
     117,   160,   117,     0,     0,     0,     0,     0,   166,     0,
     169,     0,    16,    17,    23,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    68,     0,    36,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     2,     0,
       0,     0,     0,     0,     2,     0,     0,     0,   191,     0,
       0,     4,   190,   187,   188,   173,   174,     0,     2,   185,
     175,     0,   176,   177,   178,   135,   158,   133,     0,     0,
     152,   154,   146,   143,   145,   142,    81,   126,   119,   124,
       0,     0,     9,     0,   116,   114,   115,     0,     0,   172,
     162,   167,   164,   168,   170,    15,    22,     0,    20,     0,
      14,    80,    39,    40,    41,    43,    44,    46,    47,    51,
      52,    49,    50,    54,    55,    57,    59,    61,     0,     0,
       2,   201,     0,   200,   191,   191,   191,     0,     0,     0,
       0,     2,   191,   182,   191,   189,   156,   141,   140,     0,
       0,     0,    31,   144,     0,     0,    29,     0,    83,   167,
      37,   171,   163,     0,     0,    13,    12,    63,    65,     0,
     191,   181,     0,   191,     0,   199,     3,   202,     0,     0,
     179,   186,   153,   155,   159,     0,   139,   136,     0,     0,
     165,    21,     3,   180,     0,     0,     2,     0,   191,     3,
     137,   138,    18,   167,     0,     2,   191,   191,     2,   194,
       0,    19,     2,     0,     0,     3,   191,     2,     0,     3,
     191,     0,   193,   191,    67,     0,   198,     2,     0,   195,
       0,   191,     2,   196,     3,   191,     0,   192,     2,   191,
     197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -279,  -138,  -278,  -279,  -279,  -279,  -279,  -279,   -68,  -279,
     -82,    77,    78,    57,    74,   160,   161,   159,    79,    80,
    -279,  -109,  -279,   -28,  -113,   -76,   -26,  -279,     0,   141,
    -279,   275,  -279,    83,    52,   208,  -279,  -279,  -279,   219,
      21,  -279,   -14,  -279,  -279,   -99,  -279,  -279,   285,   232,
    -279,  -279,    75,  -279,    73,  -121,    64,  -213,  -279,  -279,
     213,  -211,  -279,   289,  -279,  -279,    85,  -279,  -156,  -279,
    -279,  -279,  -279,   318,  -279,  -279,  -279
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   248,   169,    86,    63,    87,   226,   227,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   148,   118,   207,   182,    22,    35,    56,    42,
      36,    37,    24,    25,   121,   215,    26,    33,    64,    65,
      27,    28,    69,    39,    61,    50,   274,   198,    40,    51,
     199,   200,   201,   202,   123,   103,   126,   127,   128,   129,
     130,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,    29,    30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   206,   114,   116,   117,   119,   222,   150,   283,    38,
     204,   218,    55,    32,   212,   206,  -121,     3,   317,     3,
     213,   149,   259,   168,    41,    41,   102,    41,    41,    23,
     249,    34,   106,    12,   324,    12,   255,   119,   203,   119,
     275,   330,   149,   291,   292,    18,   107,    18,    62,    48,
     264,   300,     3,    59,   -86,    49,   149,   341,   252,   229,
      52,   345,   206,    53,   348,    -3,    60,   208,    12,   232,
     233,   234,    67,   158,   159,   318,   356,    62,   183,   313,
      18,   213,   110,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   102,
     294,    34,   122,   149,   271,   104,   228,   329,   197,   124,
     283,   125,   289,   108,   286,   109,   160,   161,   213,   124,
     231,   125,   165,   299,   223,   342,   131,   132,   133,   346,
      49,    54,   349,    34,   122,   280,   122,   315,   124,  -157,
     125,   122,   282,   122,   357,  -157,   111,   112,   360,   149,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     154,   155,   310,   134,   120,   135,    43,   136,    44,    45,
     334,   335,   214,   124,   214,   125,   273,   331,   327,   166,
     149,   149,   296,   266,   298,   278,   210,   333,   211,   164,
     336,   167,   147,   195,   338,   354,   120,   217,   120,   343,
     151,   152,   153,   120,   219,   120,   156,   157,   250,   351,
     225,   162,   163,   312,   355,   239,   240,   241,   242,   230,
     359,   220,   221,   319,    49,   251,    67,   322,   323,   344,
     293,   235,   236,   256,   237,   238,   243,   244,   183,   257,
     253,   254,   258,   305,   260,   261,   262,   308,   304,   265,
     213,   267,   263,  -183,   268,   102,   311,   339,   269,   276,
     277,   270,   284,   281,   285,   290,   295,   306,   307,   197,
     149,     1,   170,   171,     2,     3,   172,   173,   174,     4,
     297,     5,     6,     7,   175,   176,   177,     8,     9,    10,
      11,    12,   178,    13,    14,    70,    15,   279,   179,   314,
     316,    16,    17,    18,   180,    19,    20,    21,   320,    71,
      72,   321,   325,   326,   328,   332,   337,   340,   347,    -3,
     350,   352,   353,   358,   245,   247,   246,   287,    68,   288,
     216,   209,   181,    74,    75,    66,    76,    77,    78,    79,
      80,   205,   224,   309,   303,    81,   105,    47,     1,   301,
     104,     2,     3,    83,    84,    85,     4,     0,     5,     6,
       7,     0,     0,  -191,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     1,   170,   171,     2,     3,
     172,   173,   174,     4,     0,     5,     6,     7,   175,   176,
     177,     8,     9,    10,    11,    12,   178,    13,    14,    70,
      15,     0,   179,     0,     0,    16,    17,    18,   180,    19,
      20,    21,     0,    71,    72,     0,     0,  -209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,   181,    74,    75,     0,
      76,    77,    78,    79,    80,     0,     0,     0,     0,    81,
       0,     0,     1,     0,   104,     2,     3,    83,    84,    85,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,    70,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,    74,    75,     0,    76,    77,    78,
      79,    80,     0,     0,     0,     0,    81,   170,   171,     0,
       0,   172,   173,   174,    83,    84,    85,     0,     0,   175,
     176,   177,     0,     0,     0,     0,     0,   178,     0,     0,
      70,     0,     0,   179,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,    71,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,    74,    75,
       0,    76,    77,    78,    79,    80,     0,     2,     3,     0,
      81,     0,     4,     0,     5,   104,     7,     0,    83,    84,
      85,     9,    10,     0,    12,     0,    13,    14,    70,     0,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,     0,    76,
      77,    78,    79,    80,     0,     0,     0,     0,    81,     0,
       0,     1,     0,     0,     2,     3,    83,    84,    85,     4,
       0,     5,     6,     7,    70,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,    71,    72,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,    73,    74,    75,     0,    76,    77,    78,    79,    80,
      71,    72,   196,     0,    81,     0,     0,     0,     0,    82,
       0,     0,    83,    84,    85,     0,     0,     0,    70,     0,
       0,     0,     0,    73,    74,    75,     0,    76,    77,    78,
      79,    80,    71,    72,     0,     0,    81,     0,     0,     0,
       0,   279,     0,     0,    83,    84,    85,     0,     0,     0,
      70,     0,     0,     0,     0,    73,    74,    75,     0,    76,
      77,    78,    79,    80,    71,    72,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,    83,    84,    85,     0,
       0,     0,    70,     0,     0,     0,     0,    73,    74,    75,
       0,    76,    77,    78,    79,    80,    71,    72,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,     0,     0,     0,    70,     0,     0,     0,     0,    73,
      74,    75,     0,    76,    77,    78,    79,    80,    71,    72,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,     0,    76,    77,    78,    79,   272,
       0,     0,     0,     0,    81,     0,     0,     1,     0,     0,
       2,     3,    83,    84,    85,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,     0,    46,     0,     0,     1,     0,
       0,     2,     3,     0,     0,   302,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,     0,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,   110,    70,    71,    72,    81,   127,    89,   221,    23,
     109,   124,    38,    64,    78,   124,    82,     7,   296,     7,
      84,    89,   178,    50,    24,    25,    54,    27,    28,    29,
     168,    72,    58,    23,   312,    23,   174,   113,    28,   115,
      28,   319,   110,   254,   255,    35,    60,    35,    64,    82,
     188,   262,     7,    64,    95,    34,   124,   335,   171,   135,
      95,   339,   171,    84,   342,    92,    77,    83,    23,   151,
     152,   153,    51,    45,    46,    78,   354,    64,   104,   290,
      35,    84,    94,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   127,
     256,    72,    81,   171,   203,    82,   134,   318,   108,    79,
     323,    81,   250,    77,    80,    79,    88,    89,    84,    79,
     148,    81,    90,   261,    94,   336,    40,    41,    42,   340,
     109,    94,   343,    72,   113,   217,   115,   293,    79,    78,
      81,   120,    83,   122,   355,    84,    83,    84,   359,   217,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      70,    71,   283,    77,    81,    79,    25,    81,    27,    28,
     326,   327,   120,    79,   122,    81,   204,    83,   316,    91,
     248,   249,   258,   197,   260,   213,   113,   325,   115,    85,
     328,    49,    94,    78,   332,   351,   113,    78,   115,   337,
      72,    73,    74,   120,    64,   122,    43,    44,    92,   347,
      64,    47,    48,   289,   352,   158,   159,   160,   161,    64,
     358,    83,    84,   299,   203,    95,   205,    83,    84,   338,
     256,   154,   155,    77,   156,   157,   162,   163,   264,    64,
      95,    93,    77,   271,    77,    77,    93,   275,    64,    95,
      84,    78,    83,    83,    78,   283,   284,   333,    84,    78,
      78,    84,    84,    80,    78,    93,    95,    80,    80,   269,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      95,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    82,    30,    36,
      95,    33,    34,    35,    36,    37,    38,    39,    80,    41,
      42,    80,    77,    95,    78,    93,    78,    78,    95,    12,
      78,    12,    95,    78,   164,   166,   165,   248,    53,   249,
     122,   112,    64,    65,    66,    50,    68,    69,    70,    71,
      72,   109,   129,   279,   269,    77,    57,    29,     3,   264,
      82,     6,     7,    85,    86,    87,    11,    -1,    13,    14,
      15,    -1,    -1,    95,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,
      -1,    -1,     3,    -1,    82,     6,     7,    85,    86,    87,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    37,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    77,     4,     5,    -1,
      -1,     8,     9,    10,    85,    86,    87,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      27,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    -1,     6,     7,    -1,
      77,    -1,    11,    -1,    13,    82,    15,    -1,    85,    86,
      87,    20,    21,    -1,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    77,    -1,
      -1,     3,    -1,    -1,     6,     7,    85,    86,    87,    11,
      -1,    13,    14,    15,    27,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    25,    26,    -1,    28,    -1,    41,    42,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      41,    42,    64,    -1,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    85,    86,    87,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    68,    69,    70,
      71,    72,    41,    42,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    85,    86,    87,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    64,    65,    66,    -1,    68,
      69,    70,    71,    72,    41,    42,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    64,    65,    66,
      -1,    68,    69,    70,    71,    72,    41,    42,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    64,
      65,    66,    -1,    68,    69,    70,    71,    72,    41,    42,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    77,    -1,    -1,     3,    -1,    -1,
       6,     7,    85,    86,    87,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39,    -1,     0,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    51,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   122,   124,   128,   129,   132,   136,   137,   168,
     169,   170,    64,   133,    72,   123,   126,   127,   138,   139,
     144,   124,   125,   125,   125,   125,     0,   169,    82,   136,
     141,   145,    95,    84,    94,   122,   124,   171,   172,    64,
      77,   140,    64,   100,   134,   135,   144,   136,   127,   138,
      27,    41,    42,    64,    65,    66,    68,    69,    70,    71,
      72,    77,    82,    85,    86,    87,    99,   101,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   119,   151,    82,   159,   122,   138,    77,    79,
      94,    83,    84,    77,   104,    77,   104,   104,   119,   121,
     129,   130,   136,   150,    79,    81,   152,   153,   154,   155,
     156,    40,    41,    42,    77,    79,    81,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    94,   118,   104,
     106,    72,    73,    74,    70,    71,    43,    44,    45,    46,
      88,    89,    47,    48,    85,    90,    91,    49,    50,    98,
       4,     5,     8,     9,    10,    16,    17,    18,    24,    30,
      36,    64,   121,   122,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,    78,    64,   124,   143,   146,
     147,   148,   149,    28,   141,   145,   117,   120,    83,   135,
     150,   150,    78,    84,   130,   131,   131,    78,   120,    64,
      83,    84,   151,    94,   156,    64,   102,   103,   119,   121,
      64,   119,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   111,   112,   113,    97,    97,
      92,    95,   120,    95,    93,    97,    77,    64,    77,   164,
      77,    77,    93,    83,    97,    95,   138,    78,    78,    84,
      84,   141,    72,   119,   142,    28,    78,    78,   119,    82,
     106,    80,    83,   153,    84,    78,    80,   114,   115,    97,
      93,   157,   157,   122,   164,    95,   121,    95,   121,    97,
     157,   162,    51,   148,    64,   119,    80,    80,   119,   152,
     151,   119,   121,   157,    36,   164,    95,    98,    78,   121,
      80,    80,    83,    84,    98,    77,    95,    97,    78,   157,
      98,    83,    93,    97,   164,   164,    97,    78,    97,   121,
      78,    98,   157,    97,   117,    98,   157,    95,    98,   157,
      78,    97,    12,    95,   164,    97,    98,   157,    78,    97,
     157
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    99,    99,    99,    99,    99,    99,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   105,   105,   105,   106,   106,   107,   107,
     107,   107,   108,   108,   108,   109,   109,   109,   110,   110,
     110,   110,   110,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   120,   121,   121,   122,   123,   123,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     137,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   142,   142,   143,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   151,   151,   151,   152,   152,   153,   153,   154,   155,
     155,   156,   156,   157,   157,   157,   157,   157,   157,   158,
     158,   158,   159,   160,   160,   161,   161,   162,   162,   163,
     164,   164,   165,   165,   165,   166,   166,   166,   166,   167,
     167,   167,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     9,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     5,     6,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     2,     1,     0,     1,     3,     5,     6,     6,     5,
       4,     4,     1,     0,     1,     0,     1,     0,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     1,     0,     1,     3,     1,     1,     2,
       1,     0,    11,     7,     5,     8,    10,    14,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     4,     1,     0,
       1,     2
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
#line 50 "ass6_18CS10013_18CS10024.y"
{
    (yyval.instr) = next_instr;
}
#line 1898 "y.tab.c"
    break;

  case 3:
#line 55 "ass6_18CS10013_18CS10024.y"
{
    (yyval.nextlist) = makelist(next_instr);
    glob_quad.emit(Q_GOTO, -1);
}
#line 1907 "y.tab.c"
    break;

  case 4:
#line 61 "ass6_18CS10013_18CS10024.y"
                                           {
                                                //Check whether its a function
                                                symdata * check_func = glob_st->search(*(yyvsp[0].idl).name);
                                                update_nextinstr();
                                                if(check_func == NULL)
                                                {
                                                    (yyval.expon).loc  =  curr_st->lookup_2(*(yyvsp[0].idl).name);
                                                    update_nextinstr();
                                                    if((yyval.expon).loc->tp_n != NULL && (yyval.expon).loc->tp_n->basetp == tp_arr)
                                                    {
                                                        //If array
                                                        (yyval.expon).arr = (yyval.expon).loc;
                                                        update_nextinstr();
                                                        (yyval.expon).loc = curr_st->gentemp(new type_n(tp_int));
                                                        update_nextinstr();
                                                        (yyval.expon).loc->i_val.int_val = 0;
                                                        update_nextinstr();
                                                        (yyval.expon).loc->isInitialized = true;
                                                        update_nextinstr();
                                                        glob_quad.emit(Q_ASSIGN,0,(yyval.expon).loc->name);
                                                        update_nextinstr();
                                                        (yyval.expon).type = (yyval.expon).arr->tp_n;
                                                        update_nextinstr();
                                                        (yyval.expon).poss_array = (yyval.expon).arr;
                                                        update_nextinstr();
                                                    }
                                                    else
                                                    {
                                                        // If not an array
                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                        update_nextinstr();
                                                        (yyval.expon).arr = NULL;
                                                        update_nextinstr();
                                                        (yyval.expon).isPointer = false;
                                                        update_nextinstr();
                                                    }
                                                }
                                                else
                                                {
                                                    // It is a function
                                                    (yyval.expon).loc = check_func;
                                                    update_nextinstr();
                                                    (yyval.expon).type = check_func->tp_n;
                                                    update_nextinstr();
                                                    (yyval.expon).arr = NULL;
                                                    update_nextinstr();
                                                    (yyval.expon).isPointer = false;
                                                    update_nextinstr();
                                                }
                                            }
#line 1962 "y.tab.c"
    break;

  case 5:
#line 111 "ass6_18CS10013_18CS10024.y"
                                                 {
                                                    // Declare and initialize the value of the temporary variable with the integer
                                                    (yyval.expon).loc  = curr_st->gentemp(new type_n(tp_int));
                                                    update_nextinstr();
                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                    update_nextinstr();
                                                    (yyval.expon).loc->i_val.int_val = (yyvsp[0].intval);
                                                    update_nextinstr();
                                                    (yyval.expon).loc->isInitialized = true;
                                                    update_nextinstr();
                                                    (yyval.expon).arr = NULL;
                                                    update_nextinstr();
                                                    glob_quad.emit(Q_ASSIGN, (yyvsp[0].intval), (yyval.expon).loc->name);
                                                    update_nextinstr();
                                                }
#line 1982 "y.tab.c"
    break;

  case 6:
#line 126 "ass6_18CS10013_18CS10024.y"
                                                  {
                                                    // Declare and initialize the value of the temporary variable with the floatval
                                                    (yyval.expon).loc  = curr_st->gentemp(new type_n(tp_double));
                                                    update_nextinstr();
                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                    update_nextinstr();
                                                    (yyval.expon).loc->i_val.double_val = (yyvsp[0].floatval);
                                                    update_nextinstr();
                                                    (yyval.expon).loc->isInitialized = true;
                                                    update_nextinstr();
                                                    (yyval.expon).arr = NULL;
                                                    update_nextinstr();
                                                    glob_quad.emit(Q_ASSIGN, (yyvsp[0].floatval), (yyval.expon).loc->name);
                                                    update_nextinstr();
                                                  }
#line 2002 "y.tab.c"
    break;

  case 7:
#line 141 "ass6_18CS10013_18CS10024.y"
                                           {
                                                // Declare and initialize the value of the temporary variable with the character
                                                (yyval.expon).loc  = curr_st->gentemp(new type_n(tp_char));
                                                update_nextinstr();
                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                update_nextinstr();
                                                (yyval.expon).loc->i_val.char_val = (yyvsp[0].charval);
                                                update_nextinstr();
                                                (yyval.expon).loc->isInitialized = true;
                                                update_nextinstr();
                                                (yyval.expon).arr = NULL;
                                                update_nextinstr();
                                                glob_quad.emit(Q_ASSIGN, (yyvsp[0].charval), (yyval.expon).loc->name);
                                                update_nextinstr();
                                            }
#line 2022 "y.tab.c"
    break;

  case 8:
#line 156 "ass6_18CS10013_18CS10024.y"
                                               {
                                                    
                                                    strings_label.push_back(*(yyvsp[0].strval));
                                                    update_nextinstr();
                                                    (yyval.expon).loc = NULL;
                                                    update_nextinstr();
                                                    (yyval.expon).isString = true;
                                                    update_nextinstr();
                                                    (yyval.expon).ind_str = strings_label.size()-1;
                                                    update_nextinstr();
                                                    (yyval.expon).arr = NULL;
                                                    update_nextinstr();
                                                    (yyval.expon).isPointer = false;
                                                    update_nextinstr();
                                                }
#line 2042 "y.tab.c"
    break;

  case 9:
#line 171 "ass6_18CS10013_18CS10024.y"
                                                   {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                   }
#line 2050 "y.tab.c"
    break;

  case 10:
#line 175 "ass6_18CS10013_18CS10024.y"
                                           {}
#line 2056 "y.tab.c"
    break;

  case 11:
#line 177 "ass6_18CS10013_18CS10024.y"
                                                   {
                                                         (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2064 "y.tab.c"
    break;

  case 12:
#line 180 "ass6_18CS10013_18CS10024.y"
                                                                      {
                                                                        //Explanation of Array handling
                                        
                                                                        (yyval.expon).loc = curr_st->gentemp(new type_n(tp_int));
                                                                        update_nextinstr();
                                                                        
                                                                        symdata* temporary = curr_st->gentemp(new type_n(tp_int));
                                                                        update_nextinstr();
                                                                        
                                                                        char temp[10];
                                                                        update_nextinstr();
                                                                        //printf("hoooooooooooooooooooooooooooooooooo %s\n",$1.loc->name.c_str());
                                                                        sprintf(temp,"%d",(yyvsp[-3].expon).type->next->getSize());
                                                                        update_nextinstr();
                                                                        
                                                                        glob_quad.emit(Q_MULT,(yyvsp[-1].expon).loc->name,temp,temporary->name);
                                                                        update_nextinstr();
                                                                        glob_quad.emit(Q_PLUS,(yyvsp[-3].expon).loc->name,temporary->name,(yyval.expon).loc->name);
                                                                        update_nextinstr();
                                                                        
                                                                        // the new size will be calculated and the temporary variable storing the size will be passed on a $$.loc
                                                                        
                                                                        //$$.arr <= base pointer
                                                                        (yyval.expon).arr = (yyvsp[-3].expon).arr;
                                                                        update_nextinstr();
                                                                        
                                                                        //$$.type <= basetp(arr)
                                                                        (yyval.expon).type = (yyvsp[-3].expon).type->next;
                                                                        update_nextinstr();
                                                                        (yyval.expon).poss_array = NULL;
                                                                        update_nextinstr();

                                                                        //$$.arr->tp_n has the full type of the arr which will be used for size calculations
                                                                     }
#line 2103 "y.tab.c"
    break;

  case 13:
#line 214 "ass6_18CS10013_18CS10024.y"
                                                                                        {
                                                                                            //Explanation of Function Handling
                                                                                            if(!(yyvsp[-3].expon).isPointer && !(yyvsp[-3].expon).isString && ((yyvsp[-3].expon).type) && ((yyvsp[-3].expon).type->basetp==tp_void))
                                                                                            {
                                                                                                update_nextinstr();     
                                                                                            }
                                                                                            else
                                                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-3].expon).type));
                                                                                            //temporary is created 
                                                                                            char str[10];
                                                                                            update_nextinstr();
                                                                                            if((yyvsp[-1].argsl).arguments == NULL)
                                                                                            {
                                                                                                //No function Parameters
                                                                                                sprintf(str,"0");
                                                                                                update_nextinstr();
                                                                                                if((yyvsp[-3].expon).type->basetp!=tp_void)
                                                                                                    glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
                                                                                                else
                                                                                                    glob_quad.emit2(Q_CALL,(yyvsp[-3].expon).loc->name,str);
                                                                                                update_nextinstr();
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                if((*(yyvsp[-1].argsl).arguments)[0]->isString)
                                                                                                {
                                                                                                    str[0] = '_';
                                                                                                    update_nextinstr();
                                                                                                    sprintf(str+1,"%d",(*(yyvsp[-1].argsl).arguments)[0]->ind_str);
                                                                                                    update_nextinstr();
                                                                                                    glob_quad.emit(Q_PARAM,str);
                                                                                                    update_nextinstr();
                                                                                                    glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,"1",(yyval.expon).loc->name);
                                                                                                    update_nextinstr();
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    for(int i=0;i<(yyvsp[-1].argsl).arguments->size();i++)
                                                                                                    {
                                                                                                        // To print the parameters 
                                                                                                        if((*(yyvsp[-1].argsl).arguments)[i]->poss_array != NULL && (yyvsp[-3].expon).loc->name != "printInt")
                                                                                                            glob_quad.emit(Q_PARAM,(*(yyvsp[-1].argsl).arguments)[i]->poss_array->name);
                                                                                                        else
                                                                                                            glob_quad.emit(Q_PARAM,(*(yyvsp[-1].argsl).arguments)[i]->loc->name);
                                                                        
                                                                                                    }
                                                                                                    update_nextinstr();
                                                                                                    sprintf(str,"%ld",(yyvsp[-1].argsl).arguments->size());
                                                                                                    update_nextinstr();
                                                                                                    //printf("function %s-->%d\n",$1.loc->name.c_str(),$1.type->basetp);
                                                                                                    if((yyvsp[-3].expon).type->basetp!=tp_void)
                                                                                                        glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
                                                                                                    else
                                                                                                        glob_quad.emit2(Q_CALL,(yyvsp[-3].expon).loc->name,str);
                                                                                                    update_nextinstr();
                                                                                                }
                                                                                            }

                                                                                            (yyval.expon).arr = NULL;
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                            update_nextinstr();
                                                                                         }
#line 2171 "y.tab.c"
    break;

  case 14:
#line 277 "ass6_18CS10013_18CS10024.y"
                                                                  {/*Struct Logic to be Skipped*/}
#line 2177 "y.tab.c"
    break;

  case 15:
#line 278 "ass6_18CS10013_18CS10024.y"
                                                                      {
                                                                            /*----*/
                                                                      }
#line 2185 "y.tab.c"
    break;

  case 16:
#line 281 "ass6_18CS10013_18CS10024.y"
                                                             {
                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                update_nextinstr();
                                                                if((yyvsp[-1].expon).arr != NULL)
                                                                {
                                                                    // Post increment of an array element
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).loc->name,temp_elem->name,(yyvsp[-1].expon).arr->name);
                                                                    update_nextinstr();
                                                                    (yyval.expon).arr = NULL;
                                                                    update_nextinstr();
                                                                }
                                                                else
                                                                {
                                                                    //post increment of an simple element
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_PLUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name); 
                                                                    update_nextinstr();   
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;                  
                                                                update_nextinstr();               
                                                             }
#line 2220 "y.tab.c"
    break;

  case 17:
#line 311 "ass6_18CS10013_18CS10024.y"
                                                             {
                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                update_nextinstr();
                                                                if((yyvsp[-1].expon).arr != NULL)
                                                                {
                                                                    // Post decrement of an array element
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).loc->name,temp_elem->name,(yyvsp[-1].expon).arr->name);
                                                                    update_nextinstr();
                                                                    (yyval.expon).arr = NULL;
                                                                    update_nextinstr();
                                                                }
                                                                else
                                                                {
                                                                    //post decrement of an simple element
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_MINUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);
                                                                    update_nextinstr();
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                update_nextinstr();
                                                              }
#line 2255 "y.tab.c"
    break;

  case 18:
#line 341 "ass6_18CS10013_18CS10024.y"
                                                                           {
                                                                                /*------*/
                                                                           }
#line 2263 "y.tab.c"
    break;

  case 19:
#line 344 "ass6_18CS10013_18CS10024.y"
                                                                               {
                                                                                    /*------*/
                                                                               }
#line 2271 "y.tab.c"
    break;

  case 20:
#line 348 "ass6_18CS10013_18CS10024.y"
                                                      {
                                                        (yyval.argsl).arguments = new vector<expresn*>;
                                                        update_nextinstr();
                                                        expresn * tex = new expresn((yyvsp[0].expon));
                                                        update_nextinstr();
                                                        (yyval.argsl).arguments->push_back(tex);
                                                        update_nextinstr();
                                                        //printf("name2-->%s\n",tex->loc->name.c_str());
                                                        update_nextinstr();
                                                     }
#line 2286 "y.tab.c"
    break;

  case 21:
#line 358 "ass6_18CS10013_18CS10024.y"
                                                                                   {
                                                                                        expresn * tex = new expresn((yyvsp[0].expon));
                                                                                        update_nextinstr();
                                                                                        (yyval.argsl).arguments->push_back(tex);
                                                                                        update_nextinstr();
                                                                                    }
#line 2297 "y.tab.c"
    break;

  case 22:
#line 365 "ass6_18CS10013_18CS10024.y"
                                                         {
                                                            (yyval.argsl) = (yyvsp[0].argsl);
                                                            update_nextinstr();
                                                          }
#line 2306 "y.tab.c"
    break;

  case 23:
#line 369 "ass6_18CS10013_18CS10024.y"
                                            {
                                                (yyval.argsl).arguments = NULL;
                                                update_nextinstr();
                                            }
#line 2315 "y.tab.c"
    break;

  case 24:
#line 374 "ass6_18CS10013_18CS10024.y"
                                                   {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                        update_nextinstr();
                                                   }
#line 2324 "y.tab.c"
    break;

  case 25:
#line 378 "ass6_18CS10013_18CS10024.y"
                                                           {
                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).type);
                                                                update_nextinstr();
                                                                if((yyvsp[0].expon).arr != NULL)
                                                                {
                                                                    // pre increment of an Array element 
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).loc->name,temp_elem->name,(yyvsp[0].expon).arr->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                    (yyval.expon).arr = NULL;
                                                                    update_nextinstr();
                                                                }
                                                                else
                                                                {
                                                                    // pre increment
                                                                    glob_quad.emit(Q_PLUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                update_nextinstr();
                                                            }
#line 2359 "y.tab.c"
    break;

  case 26:
#line 408 "ass6_18CS10013_18CS10024.y"
                                                           {
                                                                (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                update_nextinstr();
                                                                if((yyvsp[0].expon).arr != NULL)
                                                                {
                                                                    //pre decrement of  Array Element 
                                                                    symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).loc->name,temp_elem->name,(yyvsp[0].expon).arr->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                    (yyval.expon).arr = NULL;
                                                                    update_nextinstr();
                                                                }
                                                                else
                                                                {
                                                                    // pre decrement
                                                                    glob_quad.emit(Q_MINUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                    update_nextinstr();
                                                                }
                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                update_nextinstr();
                                                            }
#line 2394 "y.tab.c"
    break;

  case 27:
#line 439 "ass6_18CS10013_18CS10024.y"
                                                                {
                                                                    type_n * temp_type;
                                                                    update_nextinstr();
                                                                    switch((yyvsp[-1].charval))
                                                                    {
                                                                        case '&':
                                                                            //create a temporary type store the type
                                                                            temp_type = new type_n(tp_ptr,1,(yyvsp[0].expon).type);
                                                                            update_nextinstr();
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType(temp_type));
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            update_nextinstr();
                                                                            glob_quad.emit(Q_ADDR,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            update_nextinstr();
                                                                            (yyval.expon).arr = NULL;
                                                                            update_nextinstr();
                                                                            break;
                                                                        case '*':
                                                                            (yyval.expon).isPointer = true;
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyvsp[0].expon).loc->tp_n->next;
                                                                            update_nextinstr();
                                                                            (yyval.expon).loc = (yyvsp[0].expon).loc;
                                                                            update_nextinstr();
                                                                            (yyval.expon).arr = NULL;
                                                                            update_nextinstr();
                                                                            break;
                                                                        case '+':
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            update_nextinstr();
                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            update_nextinstr();
                                                                            break;
                                                                        case '-':
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            update_nextinstr();
                                                                            glob_quad.emit(Q_UNARY_MINUS,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            update_nextinstr();
                                                                            break;
                                                                        case '~':
                                                                            /*Bitwise Not to be implemented Later on*/
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            update_nextinstr();
                                                                            glob_quad.emit(Q_NOT,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            update_nextinstr();
                                                                            break;
                                                                        case '!':
                                                                            (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            update_nextinstr();
                                                                            (yyval.expon).truelist = (yyvsp[0].expon).falselist;
                                                                            update_nextinstr();
                                                                            (yyval.expon).falselist = (yyvsp[0].expon).truelist;
                                                                            update_nextinstr();
                                                                            break;
                                                                        default:
                                                                            update_nextinstr();
                                                                            break;
                                                                    }
                                                                }
#line 2467 "y.tab.c"
    break;

  case 28:
#line 507 "ass6_18CS10013_18CS10024.y"
                                                        {}
#line 2473 "y.tab.c"
    break;

  case 29:
#line 508 "ass6_18CS10013_18CS10024.y"
                                                         {}
#line 2479 "y.tab.c"
    break;

  case 30:
#line 510 "ass6_18CS10013_18CS10024.y"
                                    {
                                        (yyval.charval) = '&';
                                    }
#line 2487 "y.tab.c"
    break;

  case 31:
#line 513 "ass6_18CS10013_18CS10024.y"
                                    {
                                        (yyval.charval) = '*';
                                    }
#line 2495 "y.tab.c"
    break;

  case 32:
#line 516 "ass6_18CS10013_18CS10024.y"
                                    {
                                        (yyval.charval) = '+';
                                    }
#line 2503 "y.tab.c"
    break;

  case 33:
#line 519 "ass6_18CS10013_18CS10024.y"
                                    {
                                        (yyval.charval) = '-';
                                    }
#line 2511 "y.tab.c"
    break;

  case 34:
#line 522 "ass6_18CS10013_18CS10024.y"
                                    {
                                        (yyval.charval) = '~';
                                    }
#line 2519 "y.tab.c"
    break;

  case 35:
#line 525 "ass6_18CS10013_18CS10024.y"
                                    {
                                        (yyval.charval) = '!';
                                    }
#line 2527 "y.tab.c"
    break;

  case 36:
#line 529 "ass6_18CS10013_18CS10024.y"
                                                 {
                                                    if((yyvsp[0].expon).arr != NULL && (yyvsp[0].expon).arr->tp_n != NULL&& (yyvsp[0].expon).poss_array==NULL)
                                                    {
                                                        //Right Indexing of an array element as unary expression is converted into cast expression
                                                        (yyval.expon).loc = curr_st->gentemp(new type_n((yyvsp[0].expon).type->basetp));
                                                        update_nextinstr();
                                                        glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                        update_nextinstr();
                                                        (yyval.expon).arr = NULL;
                                                        update_nextinstr();
                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                        update_nextinstr();
                                                        //$$.poss_array=$1.arr;
                                                        update_nextinstr();
                                                        //printf("name --> %s\n",$$.loc->name.c_str());
                                                    }
                                                    else if((yyvsp[0].expon).isPointer == true)
                                                    {
                                                        //RDereferencing as its a pointer
                                                        (yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
                                                        update_nextinstr();
                                                        (yyval.expon).isPointer = false;
                                                        update_nextinstr();
                                                        glob_quad.emit(Q_RDEREF,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                        update_nextinstr();
                                                    }
                                                    else
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2561 "y.tab.c"
    break;

  case 37:
#line 558 "ass6_18CS10013_18CS10024.y"
                                                                 {
                                                                    /*--------*/
                                                                 }
#line 2569 "y.tab.c"
    break;

  case 38:
#line 562 "ass6_18CS10013_18CS10024.y"
                                                {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                }
#line 2577 "y.tab.c"
    break;

  case 39:
#line 565 "ass6_18CS10013_18CS10024.y"
                                                                              {
                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    update_nextinstr();
                                                                                    glob_quad.emit(Q_MULT,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    update_nextinstr();
                                                                              }
#line 2592 "y.tab.c"
    break;

  case 40:
#line 575 "ass6_18CS10013_18CS10024.y"
                                                                              {
                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    update_nextinstr();
                                                                                    glob_quad.emit(Q_DIVIDE,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    update_nextinstr();
                                                                              }
#line 2607 "y.tab.c"
    break;

  case 41:
#line 585 "ass6_18CS10013_18CS10024.y"
                                                                             {
                                                                                    typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    update_nextinstr();
                                                                                    glob_quad.emit(Q_MODULO,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    update_nextinstr();
                                                                             }
#line 2622 "y.tab.c"
    break;

  case 42:
#line 596 "ass6_18CS10013_18CS10024.y"
                                                          {
                                                                (yyval.expon) = (yyvsp[0].expon);
                                                          }
#line 2630 "y.tab.c"
    break;

  case 43:
#line 599 "ass6_18CS10013_18CS10024.y"
                                                                                  {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_PLUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                        update_nextinstr();
                                                                                  }
#line 2645 "y.tab.c"
    break;

  case 44:
#line 609 "ass6_18CS10013_18CS10024.y"
                                                                                  {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_MINUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                        update_nextinstr();
                                                                                  }
#line 2660 "y.tab.c"
    break;

  case 45:
#line 620 "ass6_18CS10013_18CS10024.y"
                                                    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2668 "y.tab.c"
    break;

  case 46:
#line 623 "ass6_18CS10013_18CS10024.y"
                                                                                {
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    update_nextinstr();
                                                                                    glob_quad.emit(Q_LEFT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    update_nextinstr();
                                                                                }
#line 2681 "y.tab.c"
    break;

  case 47:
#line 631 "ass6_18CS10013_18CS10024.y"
                                                                                {
                                                                                    (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                    update_nextinstr();
                                                                                    glob_quad.emit(Q_RIGHT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                    update_nextinstr();
                                                                                }
#line 2694 "y.tab.c"
    break;

  case 48:
#line 640 "ass6_18CS10013_18CS10024.y"
                                                 {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                 }
#line 2702 "y.tab.c"
    break;

  case 49:
#line 643 "ass6_18CS10013_18CS10024.y"
                                                                           {
                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                update_nextinstr();
                                                                                (yyval.expon).type = new type_n(tp_bool);
                                                                                update_nextinstr();
                                                                                (yyval.expon).truelist = makelist(next_instr);
                                                                                update_nextinstr();
                                                                                (yyval.expon).falselist = makelist(next_instr+1);
                                                                                update_nextinstr();
                                                                                glob_quad.emit(Q_IF_LESS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                update_nextinstr();
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                                update_nextinstr();
                                                                           }
#line 2721 "y.tab.c"
    break;

  case 50:
#line 657 "ass6_18CS10013_18CS10024.y"
                                                                           {
                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                update_nextinstr();
                                                                                (yyval.expon).type = new type_n(tp_bool);
                                                                                update_nextinstr();
                                                                                (yyval.expon).truelist = makelist(next_instr);
                                                                                update_nextinstr();
                                                                                (yyval.expon).falselist = makelist(next_instr+1);
                                                                                update_nextinstr();
                                                                                glob_quad.emit(Q_IF_GREATER,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                update_nextinstr();
                                                                                glob_quad.emit(Q_GOTO,"-1");
                                                                                update_nextinstr();
                                                                           }
#line 2740 "y.tab.c"
    break;

  case 51:
#line 671 "ass6_18CS10013_18CS10024.y"
                                                                                   {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).truelist = makelist(next_instr);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).falselist = makelist(next_instr+1);
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_IF_LESS_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                        update_nextinstr();
                                                                                    }
#line 2759 "y.tab.c"
    break;

  case 52:
#line 685 "ass6_18CS10013_18CS10024.y"
                                                                                      {
                                                                                            typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).type = new type_n(tp_bool);
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).truelist = makelist(next_instr);
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).falselist = makelist(next_instr+1);
                                                                                            update_nextinstr();
                                                                                            glob_quad.emit(Q_IF_GREATER_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                            update_nextinstr();
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                            update_nextinstr();
                                                                                      }
#line 2778 "y.tab.c"
    break;

  case 53:
#line 700 "ass6_18CS10013_18CS10024.y"
                                                      {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2786 "y.tab.c"
    break;

  case 54:
#line 703 "ass6_18CS10013_18CS10024.y"
                                                                                 {
                                                                                        typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).truelist = makelist(next_instr);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).falselist = makelist(next_instr+1);
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_IF_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                                        update_nextinstr();
                                                                                 }
#line 2805 "y.tab.c"
    break;

  case 55:
#line 717 "ass6_18CS10013_18CS10024.y"
                                                                                     {
                                                                                            typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).type = new type_n(tp_bool);
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).truelist = makelist(next_instr);
                                                                                            update_nextinstr();
                                                                                            (yyval.expon).falselist = makelist(next_instr+1);
                                                                                            update_nextinstr();
                                                                                            glob_quad.emit(Q_IF_NOT_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
                                                                                            update_nextinstr();
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                            update_nextinstr();
                                                                                     }
#line 2824 "y.tab.c"
    break;

  case 56:
#line 732 "ass6_18CS10013_18CS10024.y"
                                                    {
                                                        (yyval.expon) = (yyvsp[0].expon);
                                                    }
#line 2832 "y.tab.c"
    break;

  case 57:
#line 735 "ass6_18CS10013_18CS10024.y"
                                                                       {
                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                            update_nextinstr();
                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                            update_nextinstr();
                                                                            glob_quad.emit(Q_LOG_AND,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                            update_nextinstr();
                                                                        }
#line 2845 "y.tab.c"
    break;

  case 58:
#line 744 "ass6_18CS10013_18CS10024.y"
                                               {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                               }
#line 2853 "y.tab.c"
    break;

  case 59:
#line 747 "ass6_18CS10013_18CS10024.y"
                                                                           {
                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                update_nextinstr();
                                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                update_nextinstr();
                                                                                glob_quad.emit(Q_XOR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                update_nextinstr();
                                                                           }
#line 2866 "y.tab.c"
    break;

  case 60:
#line 756 "ass6_18CS10013_18CS10024.y"
                                                        {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2874 "y.tab.c"
    break;

  case 61:
#line 759 "ass6_18CS10013_18CS10024.y"
                                                                                    {
                                                                                        (yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                        update_nextinstr();
                                                                                        glob_quad.emit(Q_LOG_OR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                        update_nextinstr();
                                                                                    }
#line 2887 "y.tab.c"
    break;

  case 62:
#line 768 "ass6_18CS10013_18CS10024.y"
                                                        {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2895 "y.tab.c"
    break;

  case 63:
#line 771 "ass6_18CS10013_18CS10024.y"
                                                                                     {
                                                                                        if((yyvsp[-3].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[-3].expon));
                                                                                        if((yyvsp[0].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[0].expon));
                                                                                        update_nextinstr();
                                                                                        backpatch((yyvsp[-3].expon).truelist,(yyvsp[-1].instr));
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).falselist = merge((yyvsp[-3].expon).falselist,(yyvsp[0].expon).falselist);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).truelist = (yyvsp[0].expon).truelist;
                                                                                        update_nextinstr();
                                                                                    }
#line 2915 "y.tab.c"
    break;

  case 64:
#line 787 "ass6_18CS10013_18CS10024.y"
                                                       {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                       }
#line 2923 "y.tab.c"
    break;

  case 65:
#line 790 "ass6_18CS10013_18CS10024.y"
                                                                                    {
                                                                                        if((yyvsp[-3].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[-3].expon));
                                                                                        if((yyvsp[0].expon).type->basetp != tp_bool)
                                                                                            conv2Bool(&(yyvsp[0].expon)); 
                                                                                        update_nextinstr();
                                                                                        backpatch((yyvsp[-3].expon).falselist,(yyvsp[-1].instr));
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).type = new type_n(tp_bool);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).truelist = merge((yyvsp[-3].expon).truelist,(yyvsp[0].expon).truelist);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).falselist = (yyvsp[0].expon).falselist;
                                                                                        update_nextinstr();
                                                                                    }
#line 2943 "y.tab.c"
    break;

  case 66:
#line 807 "ass6_18CS10013_18CS10024.y"
                                                      {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                      }
#line 2951 "y.tab.c"
    break;

  case 67:
#line 810 "ass6_18CS10013_18CS10024.y"
                                                                                                        {
                                                                                                            (yyval.expon).loc = curr_st->gentemp((yyvsp[-4].expon).type);
                                                                                                            update_nextinstr();
                                                                                                            (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                                            update_nextinstr();
                                                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                                            update_nextinstr();
                                                                                                            list* TEMP_LIST = makelist(next_instr);
                                                                                                            update_nextinstr();
                                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                                            update_nextinstr();
                                                                                                            backpatch((yyvsp[-3].nextlist),next_instr);
                                                                                                            update_nextinstr();
                                                                                                            glob_quad.emit(Q_ASSIGN,(yyvsp[-4].expon).loc->name,(yyval.expon).loc->name);
                                                                                                            update_nextinstr();
                                                                                                            TEMP_LIST = merge(TEMP_LIST,makelist(next_instr));
                                                                                                            update_nextinstr();
                                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                                            update_nextinstr();
                                                                                                            backpatch((yyvsp[-7].nextlist),next_instr);
                                                                                                            update_nextinstr();
                                                                                                            conv2Bool(&(yyvsp[-8].expon));
                                                                                                            update_nextinstr();
                                                                                                            backpatch((yyvsp[-8].expon).truelist,(yyvsp[-5].instr));
                                                                                                            update_nextinstr();
                                                                                                            backpatch((yyvsp[-8].expon).falselist,(yyvsp[-1].instr));
                                                                                                            update_nextinstr();
                                                                                                            backpatch(TEMP_LIST,next_instr);
                                                                                                            update_nextinstr();
                                                                                                        }
#line 2986 "y.tab.c"
    break;

  case 79:
#line 853 "ass6_18CS10013_18CS10024.y"
                                                       {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                        }
#line 2994 "y.tab.c"
    break;

  case 80:
#line 856 "ass6_18CS10013_18CS10024.y"
                                                                                           {
                                                                                                //LDereferencing
                                                                                                //printf("hoboo --> %s\n",$1.loc->name.c_str());
                                                                                                if((yyvsp[-2].expon).isPointer)
                                                                                                {
                                                                                                    //printf("Hookah bar\n");
                                                                                                    glob_quad.emit(Q_LDEREF,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                                                    update_nextinstr();
                                                                                                }
                                                                                                typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon),true);
                                                                                                update_nextinstr();
                                                                                                if((yyvsp[-2].expon).arr != NULL)
                                                                                                {
                                                                                                    glob_quad.emit(Q_LINDEX,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).arr->name);
                                                                                                    update_nextinstr();
                                                                                                }
                                                                                                else if(!(yyvsp[-2].expon).isPointer)
                                                                                                    glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                                                update_nextinstr();
                                                                                                (yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).type);
                                                                                                update_nextinstr();
                                                                                                (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                                                update_nextinstr();
                                                                                                //printf("assgi hobobob %s == %s\n",)
                                                                                                glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
                                                                                                update_nextinstr();
                                                                                                //printf("assign %s = %s\n",$3.loc->name.c_str(),$$.loc->name.c_str());
                                                                                            }
#line 3027 "y.tab.c"
    break;

  case 81:
#line 886 "ass6_18CS10013_18CS10024.y"
                                                       {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                            update_nextinstr();
                                                       }
#line 3036 "y.tab.c"
    break;

  case 82:
#line 891 "ass6_18CS10013_18CS10024.y"
                                                      {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                            update_nextinstr();
                                                      }
#line 3045 "y.tab.c"
    break;

  case 83:
#line 895 "ass6_18CS10013_18CS10024.y"
                                                                     {
                                                                        (yyval.expon) = (yyvsp[0].expon);
                                                                        update_nextinstr();
                                                                     }
#line 3054 "y.tab.c"
    break;

  case 84:
#line 902 "ass6_18CS10013_18CS10024.y"
                                                                                    {
                                                                                        if((yyvsp[-1].expon).loc != NULL && (yyvsp[-1].expon).type != NULL && (yyvsp[-1].expon).type->basetp == tp_func)
                                                                                        {
                                                                                            /*Delete curr_st*/
                                                                                            curr_st = new symtab();
                                                                                            update_nextinstr();
                                                                                        }
                                                                                    }
#line 3067 "y.tab.c"
    break;

  case 85:
#line 911 "ass6_18CS10013_18CS10024.y"
                                                     {
                                                        if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
                                                        {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                            update_nextinstr();
                                                        }
                                                     }
#line 3079 "y.tab.c"
    break;

  case 86:
#line 918 "ass6_18CS10013_18CS10024.y"
                                            {
                                                (yyval.expon).loc = NULL;
                                                update_nextinstr();
                                            }
#line 3088 "y.tab.c"
    break;

  case 87:
#line 923 "ass6_18CS10013_18CS10024.y"
                                                                                   {}
#line 3094 "y.tab.c"
    break;

  case 89:
#line 925 "ass6_18CS10013_18CS10024.y"
                                                                          {}
#line 3100 "y.tab.c"
    break;

  case 90:
#line 926 "ass6_18CS10013_18CS10024.y"
                                                                              {}
#line 3106 "y.tab.c"
    break;

  case 93:
#line 931 "ass6_18CS10013_18CS10024.y"
                                                {
                                                    /*Expecting only function declaration*/
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                    update_nextinstr();
                                                }
#line 3116 "y.tab.c"
    break;

  case 95:
#line 938 "ass6_18CS10013_18CS10024.y"
                                           {
                                                /*Nothing to be done here*/
                                                if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
                                                {
                                                    (yyval.expon) = (yyvsp[0].expon);
                                                    update_nextinstr();
                                                }
                                            }
#line 3129 "y.tab.c"
    break;

  case 96:
#line 946 "ass6_18CS10013_18CS10024.y"
                                                           {
                                                                //initializations of declarators
                                                                if((yyvsp[0].expon).type!=NULL)
                                                                {
                                                                    if((yyvsp[0].expon).type->basetp==tp_int)
                                                                    {
                                                                        (yyvsp[-2].expon).loc->i_val.int_val= (yyvsp[0].expon).loc->i_val.int_val;
                                                                        update_nextinstr();
                                                                        (yyvsp[-2].expon).loc->isInitialized = true;
                                                                        update_nextinstr();
                                                                        symdata *temp_ver=curr_st->search((yyvsp[-2].expon).loc->name);
                                                                        update_nextinstr();
                                                                        if(temp_ver!=NULL)
                                                                        {
                                                                            //printf("po %s = %s\n",$1.loc->name.c_str(),$3.loc->name.c_str());
                                                                            temp_ver->i_val.int_val= (yyvsp[0].expon).loc->i_val.int_val;
                                                                            update_nextinstr();
                                                                            temp_ver->isInitialized = true;
                                                                            update_nextinstr();
                                                                        }
                                                                    }
                                                                    else if((yyvsp[0].expon).type->basetp==tp_char)
                                                                    {
                                                                        (yyvsp[-2].expon).loc->i_val.char_val= (yyvsp[0].expon).loc->i_val.char_val;
                                                                        update_nextinstr();
                                                                        (yyvsp[-2].expon).loc->isInitialized = true;
                                                                        update_nextinstr();
                                                                        symdata *temp_ver=curr_st->search((yyvsp[-2].expon).loc->name);
                                                                        update_nextinstr();
                                                                        if(temp_ver!=NULL)
                                                                        {
                                                                            temp_ver->i_val.char_val= (yyvsp[0].expon).loc->i_val.char_val;
                                                                            update_nextinstr();
                                                                            temp_ver->isInitialized = true;
                                                                            update_nextinstr();
                                                                        }
                                                                    }
                                                                }
                                                                //printf("%s = %s\n",$1.loc->name.c_str(),$3.loc->name.c_str());
                                                                //typecheck(&$1,&$3,true);
                                                                glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
                                                                update_nextinstr();
                                                            }
#line 3177 "y.tab.c"
    break;

  case 97:
#line 990 "ass6_18CS10013_18CS10024.y"
                                       {}
#line 3183 "y.tab.c"
    break;

  case 98:
#line 991 "ass6_18CS10013_18CS10024.y"
                                       {}
#line 3189 "y.tab.c"
    break;

  case 99:
#line 992 "ass6_18CS10013_18CS10024.y"
                                     {}
#line 3195 "y.tab.c"
    break;

  case 100:
#line 993 "ass6_18CS10013_18CS10024.y"
                                         {}
#line 3201 "y.tab.c"
    break;

  case 101:
#line 995 "ass6_18CS10013_18CS10024.y"
                                     {
                                        glob_type = new type_n(tp_void);
                                        update_nextinstr();
                                    }
#line 3210 "y.tab.c"
    break;

  case 102:
#line 999 "ass6_18CS10013_18CS10024.y"
                                     {
                                        glob_type = new type_n(tp_char);
                                        update_nextinstr();
                                    }
#line 3219 "y.tab.c"
    break;

  case 103:
#line 1003 "ass6_18CS10013_18CS10024.y"
                                      {}
#line 3225 "y.tab.c"
    break;

  case 104:
#line 1004 "ass6_18CS10013_18CS10024.y"
                                    {
                                        glob_type = new type_n(tp_int);
                                        update_nextinstr();
                                    }
#line 3234 "y.tab.c"
    break;

  case 105:
#line 1008 "ass6_18CS10013_18CS10024.y"
                                     {}
#line 3240 "y.tab.c"
    break;

  case 106:
#line 1009 "ass6_18CS10013_18CS10024.y"
                                      {}
#line 3246 "y.tab.c"
    break;

  case 107:
#line 1010 "ass6_18CS10013_18CS10024.y"
                                       {
                                            glob_type = new type_n(tp_double);
                                            update_nextinstr();
                                        }
#line 3255 "y.tab.c"
    break;

  case 108:
#line 1014 "ass6_18CS10013_18CS10024.y"
                                       {}
#line 3261 "y.tab.c"
    break;

  case 109:
#line 1015 "ass6_18CS10013_18CS10024.y"
                                         {}
#line 3267 "y.tab.c"
    break;

  case 110:
#line 1016 "ass6_18CS10013_18CS10024.y"
                                      {}
#line 3273 "y.tab.c"
    break;

  case 111:
#line 1017 "ass6_18CS10013_18CS10024.y"
                                         {}
#line 3279 "y.tab.c"
    break;

  case 112:
#line 1018 "ass6_18CS10013_18CS10024.y"
                                           {}
#line 3285 "y.tab.c"
    break;

  case 113:
#line 1019 "ass6_18CS10013_18CS10024.y"
                                               {}
#line 3291 "y.tab.c"
    break;

  case 114:
#line 1021 "ass6_18CS10013_18CS10024.y"
                                                                            {
                                                                                /*----------*/
                                                                            }
#line 3299 "y.tab.c"
    break;

  case 115:
#line 1024 "ass6_18CS10013_18CS10024.y"
                                                                            {}
#line 3305 "y.tab.c"
    break;

  case 116:
#line 1026 "ass6_18CS10013_18CS10024.y"
                                                         {}
#line 3311 "y.tab.c"
    break;

  case 117:
#line 1027 "ass6_18CS10013_18CS10024.y"
                                            {}
#line 3317 "y.tab.c"
    break;

  case 118:
#line 1029 "ass6_18CS10013_18CS10024.y"
                                                                            {}
#line 3323 "y.tab.c"
    break;

  case 119:
#line 1030 "ass6_18CS10013_18CS10024.y"
                                                                                {}
#line 3329 "y.tab.c"
    break;

  case 120:
#line 1031 "ass6_18CS10013_18CS10024.y"
                                                {}
#line 3335 "y.tab.c"
    break;

  case 121:
#line 1033 "ass6_18CS10013_18CS10024.y"
                                           {
                                                (yyval.expon).loc  = curr_st->lookup(*(yyvsp[0].idl).name);
                                                update_nextinstr();
                                                //printf("%s\n",(*$1.name).c_str());
                                                update_nextinstr();
                                                (yyval.expon).type = new type_n(glob_type->basetp);
                                                update_nextinstr();
                                            }
#line 3348 "y.tab.c"
    break;

  case 122:
#line 1041 "ass6_18CS10013_18CS10024.y"
                                            {}
#line 3354 "y.tab.c"
    break;

  case 123:
#line 1043 "ass6_18CS10013_18CS10024.y"
                                           {}
#line 3360 "y.tab.c"
    break;

  case 124:
#line 1044 "ass6_18CS10013_18CS10024.y"
                                                               {}
#line 3366 "y.tab.c"
    break;

  case 125:
#line 1046 "ass6_18CS10013_18CS10024.y"
                                                     {}
#line 3372 "y.tab.c"
    break;

  case 126:
#line 1047 "ass6_18CS10013_18CS10024.y"
                                                                             {}
#line 3378 "y.tab.c"
    break;

  case 127:
#line 1049 "ass6_18CS10013_18CS10024.y"
                                      {}
#line 3384 "y.tab.c"
    break;

  case 128:
#line 1050 "ass6_18CS10013_18CS10024.y"
                                         {}
#line 3390 "y.tab.c"
    break;

  case 129:
#line 1051 "ass6_18CS10013_18CS10024.y"
                                         {}
#line 3396 "y.tab.c"
    break;

  case 130:
#line 1053 "ass6_18CS10013_18CS10024.y"
                                       {}
#line 3402 "y.tab.c"
    break;

  case 131:
#line 1055 "ass6_18CS10013_18CS10024.y"
                                                              {
                                                                if((yyvsp[-1].decl).type == NULL)
                                                                {
                                                                    /*--------------*/
                                                                    update_nextinstr();
                                                                }
                                                                else
                                                                {
                                                                    if((yyvsp[0].expon).loc->tp_n->basetp != tp_ptr)
                                                                    {
                                                                        type_n * test = (yyvsp[-1].decl).type;
                                                                        update_nextinstr();
                                                                        while(test->next != NULL)
                                                                        {
                                                                            test = test->next;
                                                                            update_nextinstr();
                                                                        }
                                                                        test->next = (yyvsp[0].expon).loc->tp_n;
                                                                        update_nextinstr();
                                                                        (yyvsp[0].expon).loc->tp_n = (yyvsp[-1].decl).type;
                                                                        update_nextinstr();
                                                                    }
                                                                }

                                                                if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
                                                                {
                                                                    (yyval.expon) = (yyvsp[0].expon);
                                                                    update_nextinstr();
                                                                }
                                                                else
                                                                {
                                                                    //its not a function
                                                                    (yyvsp[0].expon).loc->size = (yyvsp[0].expon).loc->tp_n->getSize();
                                                                    update_nextinstr();
                                                                    (yyvsp[0].expon).loc->offset = curr_st->offset;
                                                                    update_nextinstr();
                                                                    curr_st->offset += (yyvsp[0].expon).loc->size;
                                                                    update_nextinstr();
                                                                    (yyval.expon) = (yyvsp[0].expon);
                                                                    update_nextinstr();
                                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                                    update_nextinstr();
                                                                }
                                                            }
#line 3451 "y.tab.c"
    break;

  case 132:
#line 1100 "ass6_18CS10013_18CS10024.y"
                                        {
                                            (yyval.decl) = (yyvsp[0].decl);
                                            update_nextinstr();
                                        }
#line 3460 "y.tab.c"
    break;

  case 133:
#line 1104 "ass6_18CS10013_18CS10024.y"
                                            {
                                                (yyval.decl).type = NULL;
                                                update_nextinstr();
                                            }
#line 3469 "y.tab.c"
    break;

  case 134:
#line 1109 "ass6_18CS10013_18CS10024.y"
                                           {
                                                    (yyval.expon).loc = curr_st->lookup(*(yyvsp[0].idl).name);
                                                    update_nextinstr();
                                                    //printf("name: %s\n",curr_st->name.c_str());
                                                    //printf("2nd %s\n",(*$1.name).c_str());
                                                    //printf("Hello5\n");
                                                    if((yyval.expon).loc->var_type == "")
                                                    {
                                                        //Type initialization
                                                        (yyval.expon).loc->var_type = "local";
                                                        update_nextinstr();
                                                        (yyval.expon).loc->tp_n = new type_n(glob_type->basetp);
                                                        update_nextinstr();
                                                        //$$.loc->tp_n->print();
                                                    }
                                                    (yyval.expon).type = (yyval.expon).loc->tp_n;
                                                    update_nextinstr();
                                            }
#line 3492 "y.tab.c"
    break;

  case 135:
#line 1127 "ass6_18CS10013_18CS10024.y"
                                                   {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                        update_nextinstr();
                                                    }
#line 3501 "y.tab.c"
    break;

  case 136:
#line 1131 "ass6_18CS10013_18CS10024.y"
                                                                                                            {
                                                                                                                //printf("Hello\n");
                                                                                                                if((yyvsp[-4].expon).type->basetp == tp_arr)
                                                                                                                {
                                                                                                                    /*if type is already an arr*/
                                                                                                                    type_n * typ1 = (yyvsp[-4].expon).type,*typ = (yyvsp[-4].expon).type;
                                                                                                                    update_nextinstr();
                                                                                                                    typ1 = typ1->next;
                                                                                                                    update_nextinstr();
                                                                                                                    while(typ1->next != NULL)
                                                                                                                    {
                                                                                                                        typ1 = typ1->next;
                                                                                                                        update_nextinstr();
                                                                                                                        typ = typ->next;
                                                                                                                        update_nextinstr();
                                                                                                                    }
                                                                                                                    typ->next = new type_n(tp_arr,(yyvsp[-1].expon).loc->i_val.int_val,typ1);
                                                                                                                    update_nextinstr();
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    //add the type of array to list
                                                                                                                    if((yyvsp[-1].expon).loc == NULL)
                                                                                                                        (yyvsp[-4].expon).type = new type_n(tp_arr,-1,(yyvsp[-4].expon).type);
                                                                                                                    else
                                                                                                                        (yyvsp[-4].expon).type = new type_n(tp_arr,(yyvsp[-1].expon).loc->i_val.int_val,(yyvsp[-4].expon).type);
                                                                                                                    update_nextinstr();
                                                                                                                }
                                                                                                                (yyval.expon) = (yyvsp[-4].expon);
                                                                                                                update_nextinstr();
                                                                                                                (yyval.expon).loc->tp_n = (yyval.expon).type;
                                                                                                                update_nextinstr();
                                                                                                            }
#line 3539 "y.tab.c"
    break;

  case 137:
#line 1164 "ass6_18CS10013_18CS10024.y"
                                                                                                               {}
#line 3545 "y.tab.c"
    break;

  case 138:
#line 1165 "ass6_18CS10013_18CS10024.y"
                                                                                                           {}
#line 3551 "y.tab.c"
    break;

  case 139:
#line 1166 "ass6_18CS10013_18CS10024.y"
                                                                                      {/*Not sure but mostly we don't have to implement this*/}
#line 3557 "y.tab.c"
    break;

  case 140:
#line 1167 "ass6_18CS10013_18CS10024.y"
                                                                              {
                                                                                   int params_no=curr_st->no_params;
                                                                                    update_nextinstr();
                                                                                   //printf("no.ofparameters-->%d\n",params_no);
                                                                                    update_nextinstr();
                                                                                   curr_st->no_params=0;
                                                                                    update_nextinstr();
                                                                                   int dec_params=0;
                                                                                    update_nextinstr();
                                                                                   int over_params=params_no;
                                                                                    update_nextinstr();
                                                                                   for(int i=curr_st->symbol_tab.size()-1;i>=0;i--)
                                                                                   {
                                                                                        //printf("what-->%s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                        update_nextinstr();
                                                                                    }
                                                                                   for(int i=curr_st->symbol_tab.size()-1;i>=0;i--)
                                                                                   {
                                                                                        //printf("mazaknaminST-->%s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                        string detect=curr_st->symbol_tab[i]->name;
                                                                                        update_nextinstr();
                                                                                        if(over_params==0)
                                                                                        {
                                                                                            break;
                                                                                            update_nextinstr();
                                                                                        }
                                                                                        if(detect.size()==4)
                                                                                        {
                                                                                            if(detect[0]=='t')
                                                                                            {
                                                                                                if('0'<=detect[1]&&detect[1]<='9')
                                                                                                {
                                                                                                    if('0'<=detect[2]&&detect[2]<='9')
                                                                                                    {
                                                                                                        if('0'<=detect[3]&&detect[3]<='9')
                                                                                                            dec_params++;
                                                                                                        update_nextinstr();
                                                                                                    }
                                                                                                    update_nextinstr();
                                                                                                }
                                                                                                update_nextinstr();
                                                                                            }
                                                                                            update_nextinstr();
                                                                                        }
                                                                                        else
                                                                                            over_params--;
                                                                                        update_nextinstr();

                                                                                   }
                                                                                   params_no+=dec_params;
                                                                                    update_nextinstr();
                                                                                   //printf("no.ofparameters-->%d\n",params_no);
                                                                                   int temp_i=curr_st->symbol_tab.size()-params_no;
                                                                                    update_nextinstr();
                                                                                   symdata * new_func = glob_st->search(curr_st->symbol_tab[temp_i-1]->name);
                                                                                    update_nextinstr();
                                                                                    //printf("Hello1\n");
                                                                                    //printf("%s\n",curr_st->symbol_tab[0]->name.c_str());
                                                                                    //printf("no. of params-> %d\n",curr_st->no_params);
                                                                                    if(new_func == NULL)
                                                                                    {
                                                                                        new_func = glob_st->lookup(curr_st->symbol_tab[temp_i-1]->name);
                                                                                        update_nextinstr();
                                                                                        (yyval.expon).loc = curr_st->symbol_tab[temp_i-1];
                                                                                        update_nextinstr();
                                                                                        for(int i=0;i<(temp_i-1);i++)
                                                                                        {
                                                                                            curr_st->symbol_tab[i]->ispresent=false;
                                                                                            update_nextinstr();
                                                                                            if(curr_st->symbol_tab[i]->var_type=="local"||curr_st->symbol_tab[i]->var_type=="temp")
                                                                                            {
                                                                                                symdata *glob_var=glob_st->search(curr_st->symbol_tab[i]->name);
                                                                                                update_nextinstr();
                                                                                                if(glob_var==NULL)
                                                                                                {
                                                                                                    //printf("glob_var-->%s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                                    update_nextinstr();
                                                                                                    glob_var=glob_st->lookup(curr_st->symbol_tab[i]->name);
                                                                                                    update_nextinstr();
                                                                                                    int t_size=curr_st->symbol_tab[i]->tp_n->getSize();
                                                                                                    update_nextinstr();
                                                                                                    glob_var->offset=glob_st->offset;
                                                                                                    update_nextinstr();
                                                                                                    glob_var->size=t_size;
                                                                                                    update_nextinstr();
                                                                                                    glob_st->offset+=t_size;
                                                                                                    update_nextinstr();
                                                                                                    glob_var->nest_tab=glob_st;
                                                                                                    update_nextinstr();
                                                                                                    glob_var->var_type=curr_st->symbol_tab[i]->var_type;
                                                                                                    update_nextinstr();
                                                                                                    glob_var->tp_n=curr_st->symbol_tab[i]->tp_n;
                                                                                                    update_nextinstr();
                                                                                                    if(curr_st->symbol_tab[i]->isInitialized)
                                                                                                    {
                                                                                                        glob_var->isInitialized=curr_st->symbol_tab[i]->isInitialized;
                                                                                                        update_nextinstr();
                                                                                                        glob_var->i_val=curr_st->symbol_tab[i]->i_val;
                                                                                                        update_nextinstr();
                                                                                                    }

                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        if(new_func->var_type == "")
                                                                                        {
                                                                                            // Declaration of the function for the first time
                                                                                            new_func->tp_n = CopyType(curr_st->symbol_tab[temp_i-1]->tp_n);
                                                                                            update_nextinstr();
                                                                                            new_func->var_type = "func";
                                                                                            update_nextinstr();
                                                                                            new_func->isInitialized = false;
                                                                                            update_nextinstr();
                                                                                            new_func->nest_tab = curr_st;
                                                                                            update_nextinstr();
                                                                                            curr_st->name = curr_st->symbol_tab[temp_i-1]->name;
                                                                                            update_nextinstr();
                                                                                            //printf("naminST-->%s\n",curr_st->symbol_tab[temp_i-1]->name.c_str());
                                                                                            update_nextinstr();
                                                                                            //printf("oye\n");
                                                                                            /*for(int i=0;i<curr_st->symbol_tab.size();i++)
                                                                                            {
                                                                                                printf("naminST-->%s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                                update_nextinstr();
                                                                                            }*/
                                                                                            curr_st->symbol_tab[temp_i-1]->name = "retVal";
                                                                                            update_nextinstr();
                                                                                            curr_st->symbol_tab[temp_i-1]->var_type = "return";
                                                                                            update_nextinstr();
                                                                                            curr_st->symbol_tab[temp_i-1]->size = curr_st->symbol_tab[temp_i-1]->tp_n->getSize();
                                                                                            update_nextinstr();
                                                                                            curr_st->symbol_tab[temp_i-1]->offset = 0;
                                                                                            update_nextinstr();
                                                                                            curr_st->offset = 16;
                                                                                            update_nextinstr();
                                                                                            int count=0;
                                                                                            update_nextinstr();
                                                                                            for(int i=(curr_st->symbol_tab.size())-params_no;i<curr_st->symbol_tab.size();i++)
                                                                                            {
                                                                                                //printf("%s -> %s\n",curr_st->symbol_tab[i]->name.c_str(),curr_st->symbol_tab[i]->var_type.c_str());
                                                                                                update_nextinstr();
                                                                                                curr_st->symbol_tab[i]->var_type = "param";
                                                                                                update_nextinstr();
                                                                                                curr_st->symbol_tab[i]->offset = count- curr_st->symbol_tab[i]->size;
                                                                                                update_nextinstr();
                                                                                                count=count-curr_st->symbol_tab[i]->size;
                                                                                                update_nextinstr();
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        curr_st = new_func->nest_tab;
                                                                                        update_nextinstr();
                                                                                    }
                                                                                    curr_st->start_quad = next_instr;
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).loc = new_func;
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).type = new type_n(tp_func);
                                                                                    update_nextinstr();
                                                                                }
#line 3724 "y.tab.c"
    break;

  case 141:
#line 1329 "ass6_18CS10013_18CS10024.y"
                                                                              {
                                                                                int temp_i=curr_st->symbol_tab.size();
                                                                                update_nextinstr();
                                                                                symdata * new_func = glob_st->search(curr_st->symbol_tab[temp_i-1]->name);
                                                                                update_nextinstr();
                                                                                //printf("Hello3\n");
                                                                                //printf("glob_st %s\n",curr_st->symbol_tab[temp_i-1]->name.c_str());
                                                                                //printf("symbol_tabsize %d\n",curr_st->symbol_tab.size());
                                                                                /*if(curr_st->symbol_tab.size()>2)
                                                                                {
                                                                                    //printf("Namestarted\n");
                                                                                    update_nextinstr();
                                                                                    printf("%s\n",curr_st->symbol_tab[0]->name.c_str());
                                                                                    update_nextinstr();
                                                                                    printf("%s\n",curr_st->symbol_tab[1]->name.c_str());
                                                                                    update_nextinstr();
                                                                                    printf("%s\n",curr_st->symbol_tab[2]->name.c_str());
                                                                                    update_nextinstr();
                                                                                }*/
                                                                                if(new_func == NULL)
                                                                                {
                                                                                    new_func = glob_st->lookup(curr_st->symbol_tab[temp_i-1]->name);
                                                                                    update_nextinstr();
                                                                                    (yyval.expon).loc = curr_st->symbol_tab[temp_i-1];
                                                                                    update_nextinstr();
                                                                                    for(int i=0;i<temp_i-1;i++)
                                                                                    {
                                                                                        curr_st->symbol_tab[i]->ispresent=false;
                                                                                        update_nextinstr();
                                                                                        if(curr_st->symbol_tab[i]->var_type=="local"||curr_st->symbol_tab[i]->var_type=="temp")
                                                                                        {
                                                                                            symdata *glob_var=glob_st->search(curr_st->symbol_tab[i]->name);
                                                                                            update_nextinstr();
                                                                                            if(glob_var==NULL)
                                                                                            {
                                                                                                //printf("glob_var-->%s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                                update_nextinstr();
                                                                                                glob_var=glob_st->lookup(curr_st->symbol_tab[i]->name);
                                                                                                update_nextinstr();
                                                                                                int t_size=curr_st->symbol_tab[i]->tp_n->getSize();
                                                                                                update_nextinstr();
                                                                                                glob_var->offset=glob_st->offset;
                                                                                                update_nextinstr();
                                                                                                glob_var->size=t_size;
                                                                                                update_nextinstr();
                                                                                                glob_st->offset+=t_size;
                                                                                                update_nextinstr();
                                                                                                glob_var->nest_tab=glob_st;
                                                                                                update_nextinstr();
                                                                                                glob_var->var_type=curr_st->symbol_tab[i]->var_type;
                                                                                                update_nextinstr();
                                                                                                glob_var->tp_n=curr_st->symbol_tab[i]->tp_n;
                                                                                                update_nextinstr();
                                                                                                if(curr_st->symbol_tab[i]->isInitialized)
                                                                                                {
                                                                                                    glob_var->isInitialized=curr_st->symbol_tab[i]->isInitialized;
                                                                                                    update_nextinstr();
                                                                                                    glob_var->i_val=curr_st->symbol_tab[i]->i_val;
                                                                                                    update_nextinstr();
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    if(new_func->var_type == "")
                                                                                    {
                                                                                        /*Function is being declared here for the first time*/
                                                                                        new_func->tp_n = CopyType(curr_st->symbol_tab[temp_i-1]->tp_n);
                                                                                        update_nextinstr();
                                                                                        new_func->var_type = "func";
                                                                                        update_nextinstr();
                                                                                        new_func->isInitialized = false;
                                                                                        update_nextinstr();
                                                                                        new_func->nest_tab = curr_st;
                                                                                        update_nextinstr();
                                                                                        /*Change the first element to retval and change the rest to param*/
                                                                                        curr_st->name = curr_st->symbol_tab[temp_i-1]->name;
                                                                                        update_nextinstr();
                                                                                        curr_st->symbol_tab[temp_i-1]->name = "retVal";
                                                                                        update_nextinstr();
                                                                                        curr_st->symbol_tab[temp_i-1]->var_type = "return";
                                                                                        update_nextinstr();
                                                                                        curr_st->symbol_tab[temp_i-1]->size = curr_st->symbol_tab[0]->tp_n->getSize();
                                                                                        update_nextinstr();
                                                                                        curr_st->symbol_tab[temp_i-1]->offset = 0;
                                                                                        update_nextinstr();
                                                                                        curr_st->offset = 16;
                                                                                        update_nextinstr();
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    // Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
                                                                                    curr_st = new_func->nest_tab;
                                                                                    update_nextinstr();
                                                                                }
                                                                                curr_st->start_quad = next_instr;
                                                                                update_nextinstr();
                                                                                (yyval.expon).loc = new_func;
                                                                                update_nextinstr();
                                                                                (yyval.expon).type = new type_n(tp_func);
                                                                                update_nextinstr();
                                                                            }
#line 3831 "y.tab.c"
    break;

  case 142:
#line 1432 "ass6_18CS10013_18CS10024.y"
                                                    {}
#line 3837 "y.tab.c"
    break;

  case 143:
#line 1433 "ass6_18CS10013_18CS10024.y"
                                            {}
#line 3843 "y.tab.c"
    break;

  case 144:
#line 1435 "ass6_18CS10013_18CS10024.y"
                                                      {
                                                            (yyval.expon) = (yyvsp[0].expon);
                                                            update_nextinstr();
                                                        }
#line 3852 "y.tab.c"
    break;

  case 145:
#line 1439 "ass6_18CS10013_18CS10024.y"
                                            {
                                                (yyval.expon).loc = NULL;
                                                update_nextinstr();
                                            }
#line 3861 "y.tab.c"
    break;

  case 148:
#line 1447 "ass6_18CS10013_18CS10024.y"
                                                            {
                                                                (yyval.decl).type = new type_n(tp_ptr);
                                                                update_nextinstr();
                                                            }
#line 3870 "y.tab.c"
    break;

  case 149:
#line 1451 "ass6_18CS10013_18CS10024.y"
                                                                    {
                                                                        (yyval.decl).type = new type_n(tp_ptr,1,(yyvsp[0].decl).type);
                                                                        update_nextinstr();
                                                                    }
#line 3879 "y.tab.c"
    break;

  case 150:
#line 1456 "ass6_18CS10013_18CS10024.y"
                                               {}
#line 3885 "y.tab.c"
    break;

  case 151:
#line 1457 "ass6_18CS10013_18CS10024.y"
                                                                   {}
#line 3891 "y.tab.c"
    break;

  case 152:
#line 1459 "ass6_18CS10013_18CS10024.y"
                                               {
                                                    /*-------*/
                                                }
#line 3899 "y.tab.c"
    break;

  case 153:
#line 1462 "ass6_18CS10013_18CS10024.y"
                                                            {}
#line 3905 "y.tab.c"
    break;

  case 154:
#line 1464 "ass6_18CS10013_18CS10024.y"
                                                      {
                                                            /*---------*/
                                                            (curr_st->no_params)++;
                                                            update_nextinstr();
                                                        }
#line 3915 "y.tab.c"
    break;

  case 155:
#line 1469 "ass6_18CS10013_18CS10024.y"
                                                                         {
                                                                            /*------------*/
                                                                            (curr_st->no_params)++;
                                                                            update_nextinstr();
                                                                        }
#line 3925 "y.tab.c"
    break;

  case 156:
#line 1475 "ass6_18CS10013_18CS10024.y"
                                                                  {
                                                                        /*The parameter is already added to the current Symbol Table*/
                                                                        update_nextinstr();
                                                                  }
#line 3934 "y.tab.c"
    break;

  case 157:
#line 1479 "ass6_18CS10013_18CS10024.y"
                                                       {}
#line 3940 "y.tab.c"
    break;

  case 161:
#line 1486 "ass6_18CS10013_18CS10024.y"
                                                      {
                                    (yyval.expon) = (yyvsp[0].expon);
                                }
#line 3948 "y.tab.c"
    break;

  case 162:
#line 1489 "ass6_18CS10013_18CS10024.y"
                                                         {}
#line 3954 "y.tab.c"
    break;

  case 163:
#line 1490 "ass6_18CS10013_18CS10024.y"
                                                             {}
#line 3960 "y.tab.c"
    break;

  case 172:
#line 1504 "ass6_18CS10013_18CS10024.y"
                                               {}
#line 3966 "y.tab.c"
    break;

  case 173:
#line 1507 "ass6_18CS10013_18CS10024.y"
                                                  {/*Switch Case*/}
#line 3972 "y.tab.c"
    break;

  case 174:
#line 1508 "ass6_18CS10013_18CS10024.y"
                                                   {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                        update_nextinstr();
                                                    }
#line 3981 "y.tab.c"
    break;

  case 175:
#line 1512 "ass6_18CS10013_18CS10024.y"
                                                     {
                                                        (yyval.nextlist) = NULL;
                                                        update_nextinstr();
                                                    }
#line 3990 "y.tab.c"
    break;

  case 176:
#line 1516 "ass6_18CS10013_18CS10024.y"
                                                    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                        update_nextinstr();
                                                    }
#line 3999 "y.tab.c"
    break;

  case 177:
#line 1520 "ass6_18CS10013_18CS10024.y"
                                                    {
                                                        (yyval.nextlist) = (yyvsp[0].nextlist);
                                                        update_nextinstr();
                                                    }
#line 4008 "y.tab.c"
    break;

  case 178:
#line 1524 "ass6_18CS10013_18CS10024.y"
                                               {
                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    update_nextinstr();
                                                }
#line 4017 "y.tab.c"
    break;

  case 179:
#line 1529 "ass6_18CS10013_18CS10024.y"
                                                         {}
#line 4023 "y.tab.c"
    break;

  case 180:
#line 1530 "ass6_18CS10013_18CS10024.y"
                                                                       {}
#line 4029 "y.tab.c"
    break;

  case 181:
#line 1531 "ass6_18CS10013_18CS10024.y"
                                                      {}
#line 4035 "y.tab.c"
    break;

  case 182:
#line 1533 "ass6_18CS10013_18CS10024.y"
                                                            {
                                                                (yyval.nextlist) = (yyvsp[-1].nextlist);
                                                                update_nextinstr();
                                                            }
#line 4044 "y.tab.c"
    break;

  case 183:
#line 1538 "ass6_18CS10013_18CS10024.y"
                                                {
                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                    update_nextinstr();
                                                }
#line 4053 "y.tab.c"
    break;

  case 184:
#line 1542 "ass6_18CS10013_18CS10024.y"
                                            {
                                                (yyval.nextlist) = NULL;
                                                update_nextinstr();
                                            }
#line 4062 "y.tab.c"
    break;

  case 185:
#line 1547 "ass6_18CS10013_18CS10024.y"
                                           {
                                                (yyval.nextlist) = (yyvsp[0].nextlist);
                                                update_nextinstr();
                                            }
#line 4071 "y.tab.c"
    break;

  case 186:
#line 1551 "ass6_18CS10013_18CS10024.y"
                                                             {
                                                                    backpatch((yyvsp[-2].nextlist),(yyvsp[-1].instr));
                                                                    update_nextinstr();
                                                                    (yyval.nextlist) = (yyvsp[0].nextlist);
                                                                    update_nextinstr();
                                                             }
#line 4082 "y.tab.c"
    break;

  case 187:
#line 1558 "ass6_18CS10013_18CS10024.y"
                                            {
                                                (yyval.nextlist) = NULL;
                                                update_nextinstr();
                                            }
#line 4091 "y.tab.c"
    break;

  case 188:
#line 1562 "ass6_18CS10013_18CS10024.y"
                                          {
                                                (yyval.nextlist) = (yyvsp[0].nextlist);
                                                update_nextinstr();
                                          }
#line 4100 "y.tab.c"
    break;

  case 189:
#line 1567 "ass6_18CS10013_18CS10024.y"
                                                  {
                                                        (yyval.expon) = (yyvsp[-1].expon);
                                                        update_nextinstr();
                                                  }
#line 4109 "y.tab.c"
    break;

  case 190:
#line 1572 "ass6_18CS10013_18CS10024.y"
                                           {
                                                (yyval.expon) = (yyvsp[0].expon);
                                                update_nextinstr();
                                           }
#line 4118 "y.tab.c"
    break;

  case 191:
#line 1576 "ass6_18CS10013_18CS10024.y"
                                            {
                                                /*Initialize Expression to NULL*/
                                                (yyval.expon).loc = NULL;
                                                update_nextinstr();
                                            }
#line 4128 "y.tab.c"
    break;

  case 192:
#line 1582 "ass6_18CS10013_18CS10024.y"
                                                                                       {
                                                                                            /*N1 is used for falselist of expression, M1 is used for truelist of expression, N2 is used to prevent fall through, M2 is used for falselist of expression*/
                                                                                            (yyvsp[-4].nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[-3].nextlist));
                                                                                            update_nextinstr();
                                                                                            (yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(next_instr));
                                                                                            update_nextinstr();
                                                                                            glob_quad.emit(Q_GOTO,"-1");
                                                                                            update_nextinstr();
                                                                                            backpatch((yyvsp[-7].nextlist),next_instr);
                                                                                            update_nextinstr();

                                                                                            conv2Bool(&(yyvsp[-8].expon));
                                                                                            update_nextinstr();

                                                                                            backpatch((yyvsp[-8].expon).truelist,(yyvsp[-5].instr));
                                                                                            update_nextinstr();
                                                                                            backpatch((yyvsp[-8].expon).falselist,(yyvsp[-1].instr));
                                                                                            update_nextinstr();
                                                                                            (yyval.nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[0].nextlist));
                                                                                            update_nextinstr();
                                                                                        }
#line 4154 "y.tab.c"
    break;

  case 193:
#line 1603 "ass6_18CS10013_18CS10024.y"
                                                                                     {
                                                                        /*N is used for the falselist of expression to skip the block and M is used for truelist of expression*/
                                                                        (yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(next_instr));
                                                                        update_nextinstr();
                                                                        glob_quad.emit(Q_GOTO,"-1");
                                                                        update_nextinstr();
                                                                        backpatch((yyvsp[-3].nextlist),next_instr);
                                                                        update_nextinstr();
                                                                        conv2Bool(&(yyvsp[-4].expon));
                                                                        update_nextinstr();
                                                                        backpatch((yyvsp[-4].expon).truelist,(yyvsp[-1].instr));
                                                                        update_nextinstr();
                                                                        (yyval.nextlist) = merge((yyvsp[0].nextlist),(yyvsp[-4].expon).falselist);
                                                                        update_nextinstr();
                                                                    }
#line 4174 "y.tab.c"
    break;

  case 194:
#line 1618 "ass6_18CS10013_18CS10024.y"
                                                                    {}
#line 4180 "y.tab.c"
    break;

  case 195:
#line 1620 "ass6_18CS10013_18CS10024.y"
                                                                         {
                                                                            /*The first 'M' takes into consideration that the control will come again at the beginning of the condition checking.'N' here does the work of breaking condition i.e. it generate goto which wii be useful when we are exiting from while loop. Finally, the last 'M' is here to note the startinf statement that will be executed in every loop to populate the truelists of expression*/
                                                                            glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
                                                                            update_nextinstr();
                                                                            backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));           /*S.nextlist to M1.instr*/
                                                                            backpatch((yyvsp[-3].nextlist),next_instr);    /*N1.nextlist to next_instr*/
                                                                            conv2Bool(&(yyvsp[-4].expon));
                                                                            update_nextinstr();
                                                                            backpatch((yyvsp[-4].expon).truelist,(yyvsp[-1].instr));
                                                                            update_nextinstr();
                                                                            (yyval.nextlist) = (yyvsp[-4].expon).falselist;
                                                                            update_nextinstr();
                                                                        }
#line 4198 "y.tab.c"
    break;

  case 196:
#line 1633 "ass6_18CS10013_18CS10024.y"
                                                                                 {  
                                                                                    /*M1 is used for coming back again to the statement as it stores the instruction which will be needed by the truelist of expression. M2 is neede as we have to again to check the condition which will be used to populate the nextlist of statements. Further N is used to prevent from fall through*/
                                                                                    backpatch((yyvsp[-2].nextlist),next_instr);
                                                                                    update_nextinstr();
                                                                                    backpatch((yyvsp[-7].nextlist),(yyvsp[-4].instr));           /*S1.nextlist to M2.instr*/
                                                                                    update_nextinstr();
                                                                                    conv2Bool(&(yyvsp[-3].expon));
                                                                                    update_nextinstr();
                                                                                    backpatch((yyvsp[-3].expon).truelist,(yyvsp[-8].instr));  /*B.truelist to M1.instr*/
                                                                                    update_nextinstr();
                                                                                    (yyval.nextlist) = (yyvsp[-3].expon).falselist;
                                                                                    update_nextinstr();
                                                                                }
#line 4216 "y.tab.c"
    break;

  case 197:
#line 1646 "ass6_18CS10013_18CS10024.y"
                                                                                                                     {
                                                                                                                       /*M1 is used for coming back to check the epression at every iteration. N1 is used  for generating the goto which will be used for exit conditions. M2 is used for nextlist of statement and N2 is used for jump to check the expression and M3 is used for the truelist of expression*/
                                                                                                                        backpatch((yyvsp[-3].nextlist),(yyvsp[-9].instr));          /*N2.nextlist to M1.instr*/
                                                                                                                        update_nextinstr();
                                                                                                                        backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));          /*S.nextlist to M2.instr*/
                                                                                                                        update_nextinstr();
                                                                                                                        glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
                                                                                                                        update_nextinstr();
                                                                                                                        backpatch((yyvsp[-7].nextlist),next_instr);    /*N1.nextlist to next_instr*/
                                                                                                                        update_nextinstr();
                                                                                                                        conv2Bool(&(yyvsp[-8].expon));
                                                                                                                        update_nextinstr();
                                                                                                                        backpatch((yyvsp[-8].expon).truelist,(yyvsp[-1].instr));
                                                                                                                        update_nextinstr();
                                                                                                                        (yyval.nextlist) = (yyvsp[-8].expon).falselist;
                                                                                                                        update_nextinstr();
                                                                                                                    }
#line 4238 "y.tab.c"
    break;

  case 198:
#line 1663 "ass6_18CS10013_18CS10024.y"
                                                                                                    {}
#line 4244 "y.tab.c"
    break;

  case 199:
#line 1665 "ass6_18CS10013_18CS10024.y"
                                                    {}
#line 4250 "y.tab.c"
    break;

  case 200:
#line 1666 "ass6_18CS10013_18CS10024.y"
                                             {}
#line 4256 "y.tab.c"
    break;

  case 201:
#line 1667 "ass6_18CS10013_18CS10024.y"
                                          {}
#line 4262 "y.tab.c"
    break;

  case 202:
#line 1668 "ass6_18CS10013_18CS10024.y"
                                                          {
                                                                if((yyvsp[-1].expon).loc == NULL)
                                                                    glob_quad.emit(Q_RETURN);
                                                                else
                                                                {
                                                                    expresn * dummy = new expresn();
                                                                    update_nextinstr();
                                                                    dummy->loc = curr_st->symbol_tab[0];
                                                                    update_nextinstr();
                                                                    dummy->type = dummy->loc->tp_n;
                                                                    update_nextinstr();
                                                                    typecheck(dummy,&(yyvsp[-1].expon),true);
                                                                    update_nextinstr();
                                                                    delete dummy;
                                                                    update_nextinstr();
                                                                    glob_quad.emit(Q_RETURN,(yyvsp[-1].expon).loc->name);
                                                                    update_nextinstr();
                                                                }
                                                                (yyval.nextlist)=NULL;
                                                                update_nextinstr();
                                                          }
#line 4288 "y.tab.c"
    break;

  case 206:
#line 1695 "ass6_18CS10013_18CS10024.y"
                                                 {

                                                                                        for(int i=0;i<curr_st->symbol_tab.size();i++)
                                                                                        {
                                                                                            if(curr_st->symbol_tab[i]->nest_tab==NULL)
                                                                                                {
                                                                                                    //printf("global --> %s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                                    if(curr_st->symbol_tab[i]->var_type=="local"||curr_st->symbol_tab[i]->var_type=="temp")
                                                                                                    {
                                                                                                        symdata *glob_var=glob_st->search(curr_st->symbol_tab[i]->name);
                                                                                                        update_nextinstr();
                                                                                                        if(glob_var==NULL)
                                                                                                        {
                                                                                                            glob_var=glob_st->lookup(curr_st->symbol_tab[i]->name);
                                                                                                            update_nextinstr();
                                                                                                            //printf("glob_var-->%s\n",curr_st->symbol_tab[i]->name.c_str());
                                                                                                            update_nextinstr();
                                                                                                            int t_size=curr_st->symbol_tab[i]->tp_n->getSize();
                                                                                                            update_nextinstr();
                                                                                                            glob_var->offset=glob_st->offset;
                                                                                                            update_nextinstr();
                                                                                                            glob_var->size=t_size;
                                                                                                            update_nextinstr();
                                                                                                            glob_st->offset+=t_size;
                                                                                                            update_nextinstr();
                                                                                                            glob_var->nest_tab=glob_st;
                                                                                                            update_nextinstr();
                                                                                                            glob_var->var_type=curr_st->symbol_tab[i]->var_type;
                                                                                                            update_nextinstr();
                                                                                                            glob_var->tp_n=curr_st->symbol_tab[i]->tp_n;
                                                                                                            update_nextinstr();
                                                                                                            if(curr_st->symbol_tab[i]->isInitialized)
                                                                                                            {
                                                                                                                glob_var->isInitialized=curr_st->symbol_tab[i]->isInitialized;
                                                                                                                update_nextinstr();
                                                                                                                glob_var->i_val=curr_st->symbol_tab[i]->i_val;
                                                                                                                update_nextinstr();
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                        }
                                                                                        
                                                    }
#line 4337 "y.tab.c"
    break;

  case 207:
#line 1740 "ass6_18CS10013_18CS10024.y"
                                                                                                  {
                                                                                                    symdata * func = glob_st->lookup((yyvsp[-2].expon).loc->name);
                                                                                                    update_nextinstr();
                                                                                                    //printf("Hello2\n");
                                                                                                    func->nest_tab->symbol_tab[0]->tp_n = CopyType(func->tp_n);
                                                                                                    update_nextinstr();
                                                                                                    func->nest_tab->symbol_tab[0]->name = "retVal";
                                                                                                    update_nextinstr();
                                                                                                    func->nest_tab->symbol_tab[0]->offset = 0;
                                                                                                    update_nextinstr();
                                                                                                    //If return type is pointer then change the offset
                                                                                                    if(func->nest_tab->symbol_tab[0]->tp_n->basetp == tp_ptr)
                                                                                                    {
                                                                                                        int diff = size_pointer - func->nest_tab->symbol_tab[0]->size;
                                                                                                        update_nextinstr();
                                                                                                        func->nest_tab->symbol_tab[0]->size = size_pointer;
                                                                                                        update_nextinstr();
                                                                                                        for(int i=1;i<func->nest_tab->symbol_tab.size();i++)
                                                                                                        {
                                                                                                            func->nest_tab->symbol_tab[i]->offset += diff;
                                                                                                            update_nextinstr();
                                                                                                        }
                                                                                                    }
                                                                                                    int offset_size = 0;
                                                                                                    update_nextinstr();
                                                                                                    for(int i=0;i<func->nest_tab->symbol_tab.size();i++)
                                                                                                    {
                                                                                                        offset_size += func->nest_tab->symbol_tab[i]->size;
                                                                                                        update_nextinstr();
                                                                                                    }
                                                                                                    func->nest_tab->end_quad = next_instr-1;
                                                                                                    update_nextinstr();
                                                                                                    //Create a new Current Symbol Table
                                                                                                    curr_st = new symtab();
                                                                                                    update_nextinstr();
                                                                                                }
#line 4378 "y.tab.c"
    break;


#line 4382 "y.tab.c"

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
#line 1783 "ass6_18CS10013_18CS10024.y"

void yyerror(const char*s)
{
    printf("%s",s);
}
