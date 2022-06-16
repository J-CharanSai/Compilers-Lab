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
#line 1 "ass5_18CS10013_18CS10024.y"

	#include <iostream>              
	#include <cstdlib>
	#include <string>
	#include <stdio.h>
	#include <sstream>

	#include "ass5_18CS10013_18CS10024_translator.h"

	extern int yylex();
	void yyerror(string s);
	extern string var_type;

	using namespace std;

#line 86 "y.tab.c"

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
    STRUCT = 277,
    SWITCH = 278,
    TYPEDEF = 279,
    UNION = 280,
    VOID = 281,
    WHILE = 282,
    INLINE = 283,
    CONST = 284,
    RESTRICT = 285,
    VOLATILE = 286,
    IDENTIFIER = 287,
    INT_CONST = 288,
    FLT_CONST = 289,
    CHAR_CONST = 290,
    STR_LTRL = 291,
    SQ_BKT_OPN = 292,
    SQ_BKT_CLS = 293,
    RND_BKT_OPEN = 294,
    RND_BKT_CLOSE = 295,
    CLY_BKT_OPEN = 296,
    CLY_BKT_CLOSE = 297,
    DOT = 298,
    IMPLIES = 299,
    INC = 300,
    DEC = 301,
    BITW_AND = 302,
    BITW_NOT = 303,
    EXLM = 304,
    MUL = 305,
    ADD = 306,
    SUB = 307,
    DIV = 308,
    MOD = 309,
    SFT_LFT = 310,
    SFT_RHT = 311,
    LT = 312,
    GT = 313,
    LTE = 314,
    GTE = 315,
    EQ = 316,
    NEQ = 317,
    BITW_XOR = 318,
    BITW_OR = 319,
    AND = 320,
    OR = 321,
    QUESTION = 322,
    COLON = 323,
    SEMICOLON = 324,
    DOTS = 325,
    ASSIGN = 326,
    MUL_EQ = 327,
    DIV_EQ = 328,
    MOD_EQ = 329,
    ADD_EQ = 330,
    SUB_EQ = 331,
    LT_EQ = 332,
    GT_EQ = 333,
    BITW_AND_EQ = 334,
    BITW_XOR_EQ = 335,
    BITW_OR_EQ = 336,
    COMMA = 337,
    HASH = 338,
    THEN = 339
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
#define STRUCT 277
#define SWITCH 278
#define TYPEDEF 279
#define UNION 280
#define VOID 281
#define WHILE 282
#define INLINE 283
#define CONST 284
#define RESTRICT 285
#define VOLATILE 286
#define IDENTIFIER 287
#define INT_CONST 288
#define FLT_CONST 289
#define CHAR_CONST 290
#define STR_LTRL 291
#define SQ_BKT_OPN 292
#define SQ_BKT_CLS 293
#define RND_BKT_OPEN 294
#define RND_BKT_CLOSE 295
#define CLY_BKT_OPEN 296
#define CLY_BKT_CLOSE 297
#define DOT 298
#define IMPLIES 299
#define INC 300
#define DEC 301
#define BITW_AND 302
#define BITW_NOT 303
#define EXLM 304
#define MUL 305
#define ADD 306
#define SUB 307
#define DIV 308
#define MOD 309
#define SFT_LFT 310
#define SFT_RHT 311
#define LT 312
#define GT 313
#define LTE 314
#define GTE 315
#define EQ 316
#define NEQ 317
#define BITW_XOR 318
#define BITW_OR 319
#define AND 320
#define OR 321
#define QUESTION 322
#define COLON 323
#define SEMICOLON 324
#define DOTS 325
#define ASSIGN 326
#define MUL_EQ 327
#define DIV_EQ 328
#define MOD_EQ 329
#define ADD_EQ 330
#define SUB_EQ 331
#define LT_EQ 332
#define GT_EQ 333
#define BITW_AND_EQ 334
#define BITW_XOR_EQ 335
#define BITW_OR_EQ 336
#define COMMA 337
#define HASH 338
#define THEN 339

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "ass5_18CS10013_18CS10024.y"
           

	char unaryOp;		
	char* char_value;	

	int instr_number;		
	int intval;		
	int num_params;			

	Expression* expr;		
	Statement* stat;		

	symboltype* sym_type;	
	sym* symp;		
	Array* A;  
		

#line 324 "y.tab.c"

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   810

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  337

#define YYUNDEFTOK  2
#define YYMAXUTOK   339


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   118,   127,   138,   151,   162,   173,   184,
     189,   202,   242,   255,   256,   257,   271,   285,   286,   290,
     291,   295,   304,   316,   317,   326,   335,   390,   391,   395,
     401,   407,   413,   419,   425,   434,   435,   447,   473,   489,
     505,   524,   525,   541,   560,   561,   577,   599,   600,   626,
     652,   678,   707,   708,   739,   772,   773,   801,   802,   830,
     831,   859,   860,   884,   885,   909,   910,   952,   953,   985,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     999,  1000,  1004,  1009,  1010,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1026,  1027,  1031,  1032,  1043,  1044,  1048,
    1049,  1050,  1051,  1052,  1053,  1054,  1058,  1059,  1063,  1064,
    1068,  1069,  1070,  1074,  1078,  1091,  1095,  1105,  1106,  1107,
    1108,  1142,  1174,  1175,  1176,  1177,  1178,  1200,  1201,  1228,
    1248,  1254,  1264,  1265,  1269,  1270,  1274,  1275,  1279,  1280,
    1284,  1285,  1289,  1290,  1295,  1299,  1300,  1301,  1305,  1306,
    1310,  1314,  1315,  1319,  1320,  1324,  1325,  1329,  1330,  1331,
    1336,  1337,  1338,  1342,  1343,  1344,  1348,  1352,  1353,  1361,
    1362,  1366,  1367,  1371,  1372,  1376,  1393,  1412,  1416,  1437,
    1452,  1472,  1497,  1498,  1499,  1500,  1510,  1522,  1523,  1527,
    1528,  1532,  1546,  1547,  1551,  1552
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTERN", "FLOAT", "FOR", "GOTO",
  "IF", "INT", "LONG", "RETURN", "SHORT", "SIZEOF", "STATIC", "STRUCT",
  "SWITCH", "TYPEDEF", "UNION", "VOID", "WHILE", "INLINE", "CONST",
  "RESTRICT", "VOLATILE", "IDENTIFIER", "INT_CONST", "FLT_CONST",
  "CHAR_CONST", "STR_LTRL", "SQ_BKT_OPN", "SQ_BKT_CLS", "RND_BKT_OPEN",
  "RND_BKT_CLOSE", "CLY_BKT_OPEN", "CLY_BKT_CLOSE", "DOT", "IMPLIES",
  "INC", "DEC", "BITW_AND", "BITW_NOT", "EXLM", "MUL", "ADD", "SUB", "DIV",
  "MOD", "SFT_LFT", "SFT_RHT", "LT", "GT", "LTE", "GTE", "EQ", "NEQ",
  "BITW_XOR", "BITW_OR", "AND", "OR", "QUESTION", "COLON", "SEMICOLON",
  "DOTS", "ASSIGN", "MUL_EQ", "DIV_EQ", "MOD_EQ", "ADD_EQ", "SUB_EQ",
  "LT_EQ", "GT_EQ", "BITW_AND_EQ", "BITW_XOR_EQ", "BITW_OR_EQ", "COMMA",
  "HASH", "THEN", "$accept", "M", "N", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "changetable", "pointer",
  "type_qualifier_list", "type_qualifier_list_opt", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "designation",
  "designation_opt", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item_list_opt", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", "declaration_list_opt", YY_NULLPTR
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
     335,   336,   337,   338,   339
};
# endif

#define YYPACT_NINF (-233)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-195)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     779,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,    79,   779,   779,   779,   779,
     752,  -233,  -233,  -233,    96,   123,  -233,   -40,  -233,   378,
      94,    76,  -233,  -233,  -233,  -233,  -233,  -233,     3,  -233,
     123,   -16,  -233,    96,   613,  -233,    79,   779,  -233,   544,
      14,    94,  -233,  -233,  -233,  -233,   -22,   657,  -233,  -233,
    -233,  -233,  -233,   493,    63,   678,   678,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,   231,   111,   699,  -233,    -6,   -36,
      69,   115,    88,    15,     4,    17,    33,    98,  -233,  -233,
    -233,  -233,    61,   592,  -233,    74,    82,   568,  -233,   541,
     -23,   493,  -233,  -233,   -14,   210,  -233,   210,   122,   699,
     109,    -5,  -233,   613,    -7,  -233,   493,  -233,  -233,   699,
     699,   135,   145,  -233,  -233,  -233,  -233,  -233,  -233,  -233,
    -233,  -233,  -233,  -233,  -233,  -233,   699,  -233,  -233,   699,
     699,   699,   699,   699,   699,   699,   699,   699,   699,   699,
     699,   699,   699,   699,   699,   139,   102,   279,  -233,   142,
     592,  -233,  -233,  -233,   168,   171,  -233,    96,   174,   134,
    -233,  -233,   185,   178,  -233,   699,  -233,  -233,  -233,   635,
    -233,   182,  -233,  -233,    97,  -233,  -233,  -233,   183,   -31,
     184,   143,  -233,  -233,  -233,  -233,  -233,  -233,  -233,    -6,
      -6,   -36,   -36,    69,    69,    69,    69,   115,   115,    88,
      15,     4,  -233,  -233,  -233,   159,   699,   161,   163,  -233,
     193,   203,   198,   407,   199,  -233,   176,  -233,   -37,  -233,
    -233,  -233,  -233,   204,   205,  -233,  -233,  -233,  -233,  -233,
    -233,   207,  -233,  -233,  -233,  -233,   405,  -233,   209,  -233,
      63,  -233,  -233,  -233,   613,   209,  -233,  -233,   699,   699,
     699,   699,  -233,   180,  -233,   329,   329,   445,   187,   699,
    -233,   -29,   699,   215,   329,  -233,   279,  -233,  -233,  -233,
    -233,    -4,  -233,  -233,    17,    33,   177,   329,  -233,  -233,
    -233,  -233,   177,  -233,   -13,   699,  -233,  -233,  -233,   101,
     190,  -233,   234,   445,   222,   329,   -12,  -233,  -233,   224,
     227,  -233,  -233,  -233,   699,   699,  -233,   699,   329,   329,
    -233,    -9,   329,   177,  -233,  -233,   202,  -233,   232,   263,
    -233,  -233,  -233,   329,   329,  -233,  -233
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   100,   105,    97,   104,   102,   103,   101,    98,    99,
     113,   110,   112,   111,   190,     0,    86,    88,    90,    92,
       0,   187,   189,   116,     0,   134,    84,     0,    93,    95,
     115,     0,    85,    87,    89,    91,     1,   188,     0,   132,
     135,   130,    83,     0,     0,   192,     0,   195,   129,     0,
     129,   114,   117,   133,   131,    94,    95,     0,     4,     5,
       6,     7,     8,     0,   151,     0,     0,    29,    33,    34,
      30,    31,    32,    10,    23,    35,     0,    37,    41,    44,
      47,    52,    55,    57,    59,    61,    63,    65,    67,   145,
      96,   193,     0,     0,   121,    30,     0,     0,   142,     0,
       0,     0,    27,    80,     0,   108,   144,   108,     0,     0,
       0,     0,   152,     0,     0,   153,     0,    24,    25,     0,
      20,     0,     0,    15,    16,    75,    76,    69,    70,    71,
      72,    73,    74,    77,    78,    79,     0,    35,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   191,     0,
       0,   125,   120,   119,    30,     0,   128,   141,     0,   136,
     138,   127,     0,     0,     9,     0,   109,   106,   107,     0,
      82,     0,   156,   146,   151,   148,   150,   154,     0,     0,
       0,    19,    21,    13,    14,    68,    38,    39,    40,    42,
      43,    45,    46,    48,    49,    50,    51,    53,    54,    56,
      58,    60,     2,     2,     2,     0,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     2,     4,   174,     0,   171,
     172,   157,   158,     2,     0,   167,   159,   160,   161,   162,
     123,     0,   124,   118,   140,   126,     0,   143,    28,    81,
     151,    36,   155,   147,     0,     0,    11,    12,     0,     0,
       0,     0,   184,     0,   183,     0,     0,     0,     0,     0,
     186,     0,     0,     0,     0,   173,     0,   166,   122,   137,
     139,     0,   149,    22,    62,    64,     3,     0,   165,     2,
       2,   182,     3,   185,     0,     0,   163,   168,    17,   151,
       0,   164,     0,     0,     0,     0,     0,    18,     2,     0,
       2,     2,   177,     2,     0,     0,     2,     0,     0,     0,
      66,     0,     0,     3,     3,   178,     0,   180,     0,   175,
     179,     2,     2,     0,     0,   181,   176
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -233,  -153,   -81,  -233,  -233,  -233,  -233,   -57,  -233,   -65,
      46,    53,    47,    50,   126,   136,   125,    42,    43,  -233,
    -106,     6,  -233,   -62,   100,   -27,     5,  -233,   261,  -233,
       0,    40,   212,    16,  -233,   -11,   286,   271,   281,   -35,
    -233,  -233,  -233,    77,  -233,   -83,  -103,    84,  -233,  -172,
    -233,   225,   -53,  -233,   246,  -233,  -233,    64,  -232,  -233,
    -233,  -233,  -233,   321,  -233,  -233,  -233
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   259,   155,    73,    74,   190,   191,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,   103,   136,   228,   181,    14,    46,    27,    28,    16,
      17,   106,   177,    18,    19,    56,    30,    92,    31,    40,
      41,   168,   169,   170,   100,   108,    90,   111,   112,   113,
     114,   115,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,    20,    21,    22,    47,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     102,   104,    45,   180,    29,    15,   156,   256,   117,   118,
     185,   138,   254,    38,    97,   142,   143,   171,   173,   137,
      91,    32,    33,    34,    35,    15,   174,   305,   313,    42,
     109,   326,   275,   188,    25,   290,   110,   183,   298,   104,
     293,    39,    43,    52,   139,   175,    98,   140,   141,    44,
      89,   175,   137,   175,   104,    96,    53,   189,   160,   172,
     260,   261,   152,   105,   186,    39,   266,   153,   175,   175,
     175,   310,   273,   175,   196,   197,   198,   184,   299,   107,
     276,   154,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,    -3,   159,
     109,   105,   157,   165,   167,   105,   110,   105,    23,    39,
     180,    23,   161,    53,   251,    24,   105,   107,    24,    89,
     162,   107,   137,   107,   144,   145,   192,   254,    23,    25,
     229,    49,   107,    50,   109,    24,   302,   303,   109,   253,
     110,   182,   195,   307,   110,   176,    25,   176,    26,   150,
     151,   282,    11,    12,    13,   314,   244,   317,   318,   137,
     319,   271,   179,   322,    -3,    -3,   241,   193,   213,   214,
     125,   126,   146,   147,   148,   149,    53,   194,   333,   334,
     240,   249,   127,   128,   129,   130,   131,   132,   199,   200,
     133,   134,   135,   203,   204,   205,   206,   201,   202,   286,
     207,   208,   137,   137,   212,   300,   242,   292,   320,   243,
     294,   304,   288,   289,   245,     1,   246,   247,   248,     2,
     252,   296,     4,   255,   257,   258,     5,     6,   262,     7,
     264,   265,   267,   306,   301,   268,     9,   269,   272,    11,
      12,    13,   328,   329,   274,   278,  -170,   277,   287,   229,
     250,   167,   312,   321,   295,   323,   291,   137,   308,   175,
      89,   309,   311,   315,   283,   324,   325,   316,   119,   327,
     120,   330,   331,   332,   121,   122,   123,   124,   209,   211,
     335,   336,   215,   216,     1,   217,   218,   219,     2,   210,
       3,     4,   220,   221,   222,     5,     6,   223,     7,    57,
       8,   284,   224,   285,    55,     9,   225,    10,    11,    12,
      13,   226,    59,    60,    61,    62,   263,    51,    63,   178,
     157,    99,    54,   280,    65,    66,    67,    68,    69,    70,
      71,    72,   215,   216,   281,   217,   218,   219,   158,   187,
     297,    37,   220,   221,   222,     0,     0,   223,   227,    57,
       0,     0,   224,     0,     0,     0,   225,     0,     0,     0,
       0,   226,    59,    60,    61,    62,     0,     0,    63,     0,
     157,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     1,     0,     0,     0,     2,     0,     3,
       4,     0,     0,     0,     5,     6,     0,     7,   227,     8,
       0,     0,     0,     0,     9,     0,    10,    11,    12,    13,
       1,     0,     0,     0,     2,     0,     3,     4,     0,  -194,
       0,     5,     6,     0,     7,     0,     8,    57,     0,     0,
       0,     9,     0,    10,    11,    12,    13,     0,     0,    58,
      59,    60,    61,    62,     0,     0,    63,     0,     0,    44,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,     0,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   279,   270,    58,    59,    60,
      61,    62,     0,     0,    63,     0,     0,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,     1,     0,
       0,     0,     2,     0,     0,     4,     0,     0,     0,     5,
       6,     0,     7,    57,   227,     0,     0,     0,     0,     9,
       0,     0,    11,    12,    13,    58,    59,    60,    61,    62,
       0,     0,    63,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     1,     0,     0,     0,
       2,     0,     3,     4,     0,     0,     0,     5,     6,     0,
       7,     0,     8,     0,    57,    93,     0,     9,     0,    10,
      11,    12,    13,    11,    12,    13,    58,    59,    60,    61,
      62,   166,    94,    63,     0,     0,     0,     0,    57,    65,
      66,    67,    68,    69,    95,    71,    72,    11,    12,    13,
      58,    59,    60,    61,    62,     0,   163,    63,     0,     0,
       0,     0,    57,    65,    66,    67,    68,    69,   164,    71,
      72,    11,    12,    13,    58,    59,    60,    61,    62,     0,
       0,    63,     0,    57,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    58,    59,    60,    61,    62,
       0,     0,    63,     0,    64,    57,     0,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    58,    59,    60,
      61,    62,     0,     0,    63,     0,   250,    57,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    58,
      59,    60,    61,    62,     0,     0,   101,     0,    57,     0,
       0,     0,    65,    66,    67,    68,    69,    70,    71,    72,
      58,    59,    60,    61,    62,     0,     0,   116,     0,    57,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    58,    59,    60,    61,    62,     0,     0,    63,     0,
       0,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    36,     0,     0,     0,     0,     1,     0,     0,
       0,     2,     0,     3,     4,     0,     0,     0,     5,     6,
       0,     7,     0,     8,     0,     0,     0,     0,     9,     0,
      10,    11,    12,    13,     1,     0,     0,     0,     2,     0,
       3,     4,     0,     0,     0,     5,     6,     0,     7,     0,
       8,     0,     0,     0,     0,     9,     0,    10,    11,    12,
      13
};

static const yytype_int16 yycheck[] =
{
      57,    63,    29,   109,    15,     0,    87,    38,    65,    66,
     113,    76,   184,    24,    49,    51,    52,    40,   101,    76,
      47,    16,    17,    18,    19,    20,    40,    40,    40,    69,
      37,    40,    69,   116,    50,   267,    43,    42,    42,   101,
      69,    25,    82,    40,    50,    82,    32,    53,    54,    71,
      44,    82,   109,    82,   116,    49,    40,   119,    93,    82,
     213,   214,    47,    63,    71,    49,   219,    63,    82,    82,
      82,   303,   225,    82,   139,   140,   141,    82,    82,    63,
     233,    64,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    65,    93,
      37,   101,    41,    97,    99,   105,    43,   107,    32,    93,
     216,    32,    38,    97,   179,    39,   116,   101,    39,   113,
      38,   105,   179,   107,    55,    56,   120,   299,    32,    50,
     157,    37,   116,    39,    37,    39,   289,   290,    37,    42,
      43,    32,   136,    42,    43,   105,    50,   107,    69,    61,
      62,   254,    29,    30,    31,   308,   167,   310,   311,   216,
     313,   223,    40,   316,    66,    67,   160,    32,    66,    67,
      59,    60,    57,    58,    59,    60,   160,    32,   331,   332,
      38,   175,    71,    72,    73,    74,    75,    76,   142,   143,
      79,    80,    81,   146,   147,   148,   149,   144,   145,   261,
     150,   151,   259,   260,    65,   286,    38,   269,   314,    38,
     272,   292,   265,   266,    40,     5,    82,    32,    40,     9,
      38,   274,    12,    40,    40,    82,    16,    17,    69,    19,
      69,    68,    39,   295,   287,    32,    26,    39,    39,    29,
      30,    31,   323,   324,    68,    38,    42,    42,    68,   276,
      41,   246,   305,   315,    39,   317,    69,   314,    68,    82,
     254,    27,    40,    39,   258,   318,   319,    40,    37,   322,
      39,    69,    40,    10,    43,    44,    45,    46,   152,   154,
     333,   334,     3,     4,     5,     6,     7,     8,     9,   153,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   259,    23,   260,    43,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,   216,    31,    39,   107,
      41,    50,    41,   246,    45,    46,    47,    48,    49,    50,
      51,    52,     3,     4,   250,     6,     7,     8,    92,   114,
     276,    20,    13,    14,    15,    -1,    -1,    18,    69,    20,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    19,    69,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,    31,
       5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,    41,
      -1,    16,    17,    -1,    19,    -1,    21,    20,    -1,    -1,
      -1,    26,    -1,    28,    29,    30,    31,    -1,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    71,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    69,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,     5,    -1,
      -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,    16,
      17,    -1,    19,    20,    69,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,    -1,
      19,    -1,    21,    -1,    20,    21,    -1,    26,    -1,    28,
      29,    30,    31,    29,    30,    31,    32,    33,    34,    35,
      36,    40,    38,    39,    -1,    -1,    -1,    -1,    20,    45,
      46,    47,    48,    49,    50,    51,    52,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    -1,    -1,
      -1,    -1,    20,    45,    46,    47,    48,    49,    50,    51,
      52,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    -1,    20,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    41,    20,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    -1,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    41,    20,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    20,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      32,    33,    34,    35,    36,    -1,    -1,    39,    -1,    20,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,     0,    -1,    -1,    -1,    -1,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    16,    17,
      -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    29,    30,    31,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    11,    12,    16,    17,    19,    21,    26,
      28,    29,    30,    31,   110,   111,   114,   115,   118,   119,
     147,   148,   149,    32,    39,    50,    69,   112,   113,   120,
     121,   123,   111,   111,   111,   111,     0,   148,   120,   118,
     124,   125,    69,    82,    71,   110,   111,   150,   151,    37,
      39,   121,    40,   118,   123,   113,   120,    20,    32,    33,
      34,    35,    36,    39,    41,    45,    46,    47,    48,    49,
      50,    51,    52,    88,    89,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     131,   110,   122,    21,    38,    50,   106,   124,    32,   122,
     129,    39,    92,   106,   108,   115,   116,   118,   130,    37,
      43,   132,   133,   134,   135,   136,    39,    92,    92,    37,
      39,    43,    44,    45,    46,    59,    60,    71,    72,    73,
      74,    75,    76,    79,    80,    81,   107,    92,    94,    50,
      53,    54,    51,    52,    55,    56,    57,    58,    59,    60,
      61,    62,    47,    63,    64,    87,    87,    41,   139,   106,
     124,    38,    38,    38,    50,   106,    40,   111,   126,   127,
     128,    40,    82,   130,    40,    82,   116,   117,   117,    40,
     105,   109,    32,    42,    82,   131,    71,   136,   130,   108,
      90,    91,   106,    32,    32,   106,    94,    94,    94,    95,
      95,    96,    96,    97,    97,    97,    97,    98,    98,    99,
     100,   101,    65,    66,    67,     3,     4,     6,     7,     8,
      13,    14,    15,    18,    23,    27,    32,    69,   108,   110,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
      38,   106,    38,    38,   120,    40,    82,    32,    40,   106,
      41,    94,    38,    42,   134,    40,    38,    40,    82,    86,
      86,    86,    69,   109,    69,    68,    86,    39,    32,    39,
      69,   108,    39,    86,    68,    69,    86,    42,    38,    70,
     128,   132,   131,   106,   102,   103,   108,    68,   137,   137,
     143,    69,   108,    69,   108,    39,   137,   142,    42,    82,
      87,   137,    86,    86,    87,    40,   108,    42,    68,    27,
     143,    40,   137,    40,    86,    39,    40,    86,    86,    86,
     105,   108,    86,   108,   137,   137,    40,   137,    87,    87,
      69,    40,    10,    86,    86,   137,   137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    88,    88,    88,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   118,   119,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     123,   123,   124,   124,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   131,   131,   131,   132,   132,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   137,
     137,   137,   137,   138,   138,   138,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145,   145,   146,   146,   146,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     3,     3,     2,     2,     6,     7,     1,
       0,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     5,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     1,
       1,     1,     1,     1,     2,     1,     1,     3,     5,     4,
       4,     3,     6,     5,     5,     4,     5,     4,     4,     0,
       2,     3,     1,     2,     0,     1,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     3,     4,     2,     4,
       2,     0,     1,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     3,     1,     3,     0,
       1,     1,     1,     2,     1,     8,    11,     5,     7,     9,
       8,    11,     3,     2,     2,     3,     2,     1,     2,     1,
       1,     5,     1,     2,     0,     1
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
#line 111 "ass5_18CS10013_18CS10024.y"
        {
		(yyval.instr_number)=nextinstr();
	}
#line 1866 "y.tab.c"
    break;

  case 3:
#line 118 "ass5_18CS10013_18CS10024.y"
        {
		(yyval.stat) =new Statement(); 
		(yyval.stat)->nextlist=makelist(nextinstr());
		emit("goto","");
	}
#line 1876 "y.tab.c"
    break;

  case 4:
#line 128 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		(yyval.expr)=new Expression();
		update_nextinstr();		 
		(yyval.expr)->loc=(yyvsp[0].symp);
		update_nextinstr();
		(yyval.expr)->type="not-boolean";
		update_nextinstr();
		debug();
	}
#line 1891 "y.tab.c"
    break;

  case 5:
#line 139 "ass5_18CS10013_18CS10024.y"
        { 
		debug();   
		(yyval.expr)=new Expression();	
		update_nextinstr();
		string p=convertIntToString((yyvsp[0].intval));
		update_nextinstr();
		(yyval.expr)->loc=gentemp(new symboltype("int"),p);
		update_nextinstr();
		emit("=",(yyval.expr)->loc->name,p);
		update_nextinstr();
		debug();
	}
#line 1908 "y.tab.c"
    break;

  case 6:
#line 152 "ass5_18CS10013_18CS10024.y"
        {    
		debug();
		(yyval.expr)=new Expression();
		update_nextinstr();
		(yyval.expr)->loc=gentemp(new symboltype("float"),(yyvsp[0].char_value));
		update_nextinstr();
		emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
		update_nextinstr();
		debug();
	}
#line 1923 "y.tab.c"
    break;

  case 7:
#line 163 "ass5_18CS10013_18CS10024.y"
        {    
		debug();
		(yyval.expr)=new Expression();
		update_nextinstr();
		(yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_value));
		update_nextinstr();
		emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
		update_nextinstr();
		debug();
	}
#line 1938 "y.tab.c"
    break;

  case 8:
#line 174 "ass5_18CS10013_18CS10024.y"
        {   
		debug();
		(yyval.expr)=new Expression();
		update_nextinstr();
		(yyval.expr)->loc=gentemp(new symboltype("ptr"),(yyvsp[0].char_value));
		update_nextinstr();
		(yyval.expr)->loc->type->arrtype=new symboltype("char");
		update_nextinstr();
		debug();
	}
#line 1953 "y.tab.c"
    break;

  case 9:
#line 185 "ass5_18CS10013_18CS10024.y"
        { (yyval.expr)=(yyvsp[-1].expr);}
#line 1959 "y.tab.c"
    break;

  case 10:
#line 190 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		(yyval.A)=new Array();
		update_nextinstr();
		(yyval.A)->Array=(yyvsp[0].expr)->loc;	
		update_nextinstr();
		(yyval.A)->type=(yyvsp[0].expr)->loc->type;	
		update_nextinstr();
		(yyval.A)->loc=(yyval.A)->Array;
		update_nextinstr();
		debug();
	}
#line 1976 "y.tab.c"
    break;

  case 11:
#line 203 "ass5_18CS10013_18CS10024.y"
        { 	
		debug();
		(yyval.A)=new Array();
		update_nextinstr();
		(yyval.A)->type=(yyvsp[-3].A)->type->arrtype;
		update_nextinstr();			
		(yyval.A)->Array=(yyvsp[-3].A)->Array;
		update_nextinstr();
		(yyval.A)->loc=gentemp(new symboltype("int"));
		update_nextinstr();
		(yyval.A)->atype="arr";
		update_nextinstr();
		if((yyvsp[-3].A)->atype=="arr") 
		{
			debug();
			sym* t=gentemp(new symboltype("int"));
			update_nextinstr();
			int p=computeSize((yyval.A)->type);
			update_nextinstr();
			string str=convertIntToString(p);
			update_nextinstr();
			emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
			update_nextinstr();	
			debug();
			emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
			update_nextinstr();
			debug();
		}
		else 
		{
			int p=computeSize((yyval.A)->type);
			update_nextinstr();
			string str=convertIntToString(p);
			update_nextinstr();
			emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
			update_nextinstr();
			debug();
		}
	}
#line 2020 "y.tab.c"
    break;

  case 12:
#line 243 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.A)=new Array();	
		update_nextinstr();
		(yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
		update_nextinstr();
		string str=convertIntToString((yyvsp[-1].num_params));
		update_nextinstr();
		emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
		update_nextinstr();
		debug();
	}
#line 2037 "y.tab.c"
    break;

  case 13:
#line 255 "ass5_18CS10013_18CS10024.y"
                                            { }
#line 2043 "y.tab.c"
    break;

  case 14:
#line 256 "ass5_18CS10013_18CS10024.y"
                                                { }
#line 2049 "y.tab.c"
    break;

  case 15:
#line 258 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		(yyval.A)=new Array();
		update_nextinstr();
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		update_nextinstr();	
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
		update_nextinstr();
		debug();
		emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
		update_nextinstr();
		debug();
	}
#line 2067 "y.tab.c"
    break;

  case 16:
#line 272 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.A)=new Array();	
		update_nextinstr();
		(yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
		update_nextinstr();
		emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
		update_nextinstr();
		debug();
		emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
		update_nextinstr();
		debug();
	}
#line 2085 "y.tab.c"
    break;

  case 17:
#line 285 "ass5_18CS10013_18CS10024.y"
                                                                                           {  }
#line 2091 "y.tab.c"
    break;

  case 18:
#line 286 "ass5_18CS10013_18CS10024.y"
                                                                                                 {  }
#line 2097 "y.tab.c"
    break;

  case 19:
#line 290 "ass5_18CS10013_18CS10024.y"
                                      { (yyval.num_params)=(yyvsp[0].num_params); }
#line 2103 "y.tab.c"
    break;

  case 20:
#line 291 "ass5_18CS10013_18CS10024.y"
           { (yyval.num_params)=0; }
#line 2109 "y.tab.c"
    break;

  case 21:
#line 296 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.num_params)=1;
		update_nextinstr();
		emit("param",(yyvsp[0].expr)->loc->name);	
		update_nextinstr();
		debug();
	}
#line 2122 "y.tab.c"
    break;

  case 22:
#line 305 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.num_params)=(yyvsp[-2].num_params)+1;
		update_nextinstr();	 
		emit("param",(yyvsp[0].expr)->loc->name);
		update_nextinstr();
		debug();
	}
#line 2135 "y.tab.c"
    break;

  case 23:
#line 316 "ass5_18CS10013_18CS10024.y"
                                { (yyval.A) = (yyvsp[0].A); }
#line 2141 "y.tab.c"
    break;

  case 24:
#line 318 "ass5_18CS10013_18CS10024.y"
        {  	
		debug();
		emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
		update_nextinstr();
		debug();
		(yyval.A)=(yyvsp[0].A);
		update_nextinstr();
	}
#line 2154 "y.tab.c"
    break;

  case 25:
#line 327 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
		update_nextinstr();
		debug();
		(yyval.A)=(yyvsp[0].A);
		update_nextinstr();
	}
#line 2167 "y.tab.c"
    break;

  case 26:
#line 336 "ass5_18CS10013_18CS10024.y"
        {			
		debug();		  	
		(yyval.A)=new Array();
		update_nextinstr();
		switch((yyvsp[-1].unaryOp))
		{	  
			case '&':                                       
				
				(yyval.A)->Array=gentemp((new symboltype("ptr")));
				update_nextinstr();
				(yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
				update_nextinstr();
				emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				update_nextinstr();
				debug();
				break;
			case '*':                          
				(yyval.A)->atype="ptr";
				update_nextinstr();
				(yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
				update_nextinstr();
				(yyval.A)->Array=(yyvsp[0].A)->Array;
				update_nextinstr();
				emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
				update_nextinstr();
				debug();
				break;
			case '+':  
				(yyval.A)=(yyvsp[0].A);
				debug();
				break;                    
			case '-':				   
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
				update_nextinstr();
				emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				update_nextinstr();
				debug();
				break;
			case '~':                   
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
				update_nextinstr();
				emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				update_nextinstr();
				debug();
				break;
			case '!':				
				(yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
				update_nextinstr();
				emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
				update_nextinstr();
				debug();
				break;
		}
	}
#line 2226 "y.tab.c"
    break;

  case 27:
#line 390 "ass5_18CS10013_18CS10024.y"
                                     {  }
#line 2232 "y.tab.c"
    break;

  case 28:
#line 391 "ass5_18CS10013_18CS10024.y"
                                                        { }
#line 2238 "y.tab.c"
    break;

  case 29:
#line 396 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.unaryOp)='&'; 
		update_nextinstr();
		debug();
	}
#line 2248 "y.tab.c"
    break;

  case 30:
#line 402 "ass5_18CS10013_18CS10024.y"
        {
		(yyval.unaryOp)='*'; 
		update_nextinstr();
		debug();
	}
#line 2258 "y.tab.c"
    break;

  case 31:
#line 408 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.unaryOp)='+'; 
		update_nextinstr();
		debug();
	}
#line 2268 "y.tab.c"
    break;

  case 32:
#line 414 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.unaryOp)='-'; 
		update_nextinstr();
		debug();
	}
#line 2278 "y.tab.c"
    break;

  case 33:
#line 420 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.unaryOp)='~'; 
		update_nextinstr();
		debug();
	}
#line 2288 "y.tab.c"
    break;

  case 34:
#line 426 "ass5_18CS10013_18CS10024.y"
        {
		(yyval.unaryOp)='!'; 
		update_nextinstr();
		debug();
	}
#line 2298 "y.tab.c"
    break;

  case 35:
#line 434 "ass5_18CS10013_18CS10024.y"
                            { (yyval.A)=(yyvsp[0].A); }
#line 2304 "y.tab.c"
    break;

  case 36:
#line 436 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		(yyval.A)=new Array();	
		update_nextinstr();
		(yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             
		update_nextinstr();
		debug();
	}
#line 2317 "y.tab.c"
    break;

  case 37:
#line 448 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.expr) = new Expression();             	
		update_nextinstr();						    
		if((yyvsp[0].A)->atype=="arr") 			   
		{
			(yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);	
			update_nextinstr();
			emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);     
			update_nextinstr();
			debug();
		}
		else if((yyvsp[0].A)->atype=="ptr")         
		{ 
			(yyval.expr)->loc = (yyvsp[0].A)->loc;        
			update_nextinstr();
			debug();
		}
		else
		{
			(yyval.expr)->loc = (yyvsp[0].A)->Array;
			update_nextinstr();
			debug();
		}
	}
#line 2347 "y.tab.c"
    break;

  case 38:
#line 474 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))         
			cout<<"Type Error in Program"<< endl;	
		else 								 
		{
			(yyval.expr) = new Expression();	
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			update_nextinstr();
			emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
			update_nextinstr();
			debug();
		}
	}
#line 2367 "y.tab.c"
    break;

  case 39:
#line 490 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))
			cout << "Type Error in Program"<< endl;
		else    
		{
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			update_nextinstr();
			emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
			update_nextinstr();	
			debug();						
		}
	}
#line 2387 "y.tab.c"
    break;

  case 40:
#line 506 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))
			cout << "Type Error in Program"<< endl;		
		else 		 
		{
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			update_nextinstr();
			emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);	
			update_nextinstr();	
			debug();	
		}
	}
#line 2407 "y.tab.c"
    break;

  case 41:
#line 524 "ass5_18CS10013_18CS10024.y"
                                        { (yyval.expr) = (yyvsp[0].expr); }
#line 2413 "y.tab.c"
    break;

  case 42:
#line 526 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
			cout << "Type Error in Program"<< endl;
		else    	
		{
			(yyval.expr) = new Expression();	
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			update_nextinstr();
			emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		}
	}
#line 2433 "y.tab.c"
    break;

  case 43:
#line 542 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
			cout << "Type Error in Program"<< endl;		
		else        
		{	
			(yyval.expr) = new Expression();	
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
			update_nextinstr();
			emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		}
	}
#line 2453 "y.tab.c"
    break;

  case 44:
#line 560 "ass5_18CS10013_18CS10024.y"
                                { (yyval.expr)=(yyvsp[0].expr); }
#line 2459 "y.tab.c"
    break;

  case 45:
#line 562 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		if(!((yyvsp[0].expr)->loc->type->type == "int"))
			cout << "Type Error in Program"<< endl; 		
		else            
		{		
			(yyval.expr) = new Expression();	
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			update_nextinstr();
			emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		}
	}
#line 2479 "y.tab.c"
    break;

  case 46:
#line 578 "ass5_18CS10013_18CS10024.y"
        { 	
		if(!((yyvsp[0].expr)->loc->type->type == "int"))
		{
			debug();
			cout << "Type Error in Program"<< endl; 		
		}
		else  		
		{		
			debug();
			(yyval.expr) = new Expression();	
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			update_nextinstr();
			emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		}
	}
#line 2502 "y.tab.c"
    break;

  case 47:
#line 599 "ass5_18CS10013_18CS10024.y"
                             { (yyval.expr)=(yyvsp[0].expr); }
#line 2508 "y.tab.c"
    break;

  case 48:
#line 601 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{      
			debug();							
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->type = "bool";                        
			update_nextinstr();		
			(yyval.expr)->truelist = makelist(nextinstr());     
			update_nextinstr();
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			update_nextinstr();
			emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     
			update_nextinstr();
			debug();
			emit("goto", "");	
			update_nextinstr();
			debug();
		}
	}
#line 2538 "y.tab.c"
    break;

  case 49:
#line 627 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			debug();
			(yyval.expr) = new Expression();	
			update_nextinstr();
			(yyval.expr)->type = "bool";
			update_nextinstr();
			(yyval.expr)->truelist = makelist(nextinstr());
			update_nextinstr();
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			update_nextinstr();
			emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
			emit("goto", "");
			update_nextinstr();
			debug();
		}	
	}
#line 2568 "y.tab.c"
    break;

  case 50:
#line 653 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{		
			debug();
			(yyval.expr) = new Expression();		
			update_nextinstr();
			(yyval.expr)->type = "bool";
			update_nextinstr();
			(yyval.expr)->truelist = makelist(nextinstr());
			update_nextinstr();
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			update_nextinstr();
			emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
			emit("goto", "");
			update_nextinstr();
			debug();
		}		
	}
#line 2598 "y.tab.c"
    break;

  case 51:
#line 679 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
		{
			debug(); 
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			debug();
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->type = "bool";
			update_nextinstr();
			(yyval.expr)->truelist = makelist(nextinstr());
			update_nextinstr();
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			update_nextinstr();
			emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
			emit("goto", "");
			update_nextinstr();
			debug();
		}
	}
#line 2628 "y.tab.c"
    break;

  case 52:
#line 707 "ass5_18CS10013_18CS10024.y"
                                { (yyval.expr)=(yyvsp[0].expr); }
#line 2634 "y.tab.c"
    break;

  case 53:
#line 709 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))                
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			debug();
			convertBoolToInt((yyvsp[-2].expr));                 
			update_nextinstr();	
			convertBoolToInt((yyvsp[0].expr));
			update_nextinstr();
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->type = "bool";
			update_nextinstr();
			(yyval.expr)->truelist = makelist(nextinstr());            
			update_nextinstr();
			(yyval.expr)->falselist = makelist(nextinstr()+1); 
			update_nextinstr();
			emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      
			update_nextinstr();
			debug();
			emit("goto", "");				
			update_nextinstr();
			debug();
		}
		
	}
#line 2669 "y.tab.c"
    break;

  case 54:
#line 740 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{			
			debug();
			convertBoolToInt((yyvsp[-2].expr));	
			update_nextinstr();
			convertBoolToInt((yyvsp[0].expr));
			update_nextinstr();
			(yyval.expr) = new Expression();                 
			update_nextinstr();
			(yyval.expr)->type = "bool";
			update_nextinstr();
			(yyval.expr)->truelist = makelist(nextinstr());
			update_nextinstr();
			(yyval.expr)->falselist = makelist(nextinstr()+1);
			update_nextinstr();
			emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
			emit("goto", "");
			update_nextinstr();
			debug();
		}
	}
#line 2703 "y.tab.c"
    break;

  case 55:
#line 772 "ass5_18CS10013_18CS10024.y"
                              { (yyval.expr)=(yyvsp[0].expr); }
#line 2709 "y.tab.c"
    break;

  case 56:
#line 774 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))         
		{
			debug();		
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			debug();              
			convertBoolToInt((yyvsp[-2].expr));                             
			update_nextinstr();
			convertBoolToInt((yyvsp[0].expr));
			update_nextinstr();
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->type = "not-boolean";                   
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			update_nextinstr();
			emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               
			update_nextinstr();
			debug();
		}
	}
#line 2738 "y.tab.c"
    break;

  case 57:
#line 801 "ass5_18CS10013_18CS10024.y"
                          { (yyval.expr)=(yyvsp[0].expr); }
#line 2744 "y.tab.c"
    break;

  case 58:
#line 803 "ass5_18CS10013_18CS10024.y"
        {
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))    
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			debug();
			convertBoolToInt((yyvsp[-2].expr));	
			update_nextinstr();
			convertBoolToInt((yyvsp[0].expr));
			update_nextinstr();
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->type = "not-boolean";
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			update_nextinstr();
			emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		}
	}
#line 2773 "y.tab.c"
    break;

  case 59:
#line 830 "ass5_18CS10013_18CS10024.y"
                                  { (yyval.expr)=(yyvsp[0].expr); }
#line 2779 "y.tab.c"
    break;

  case 60:
#line 832 "ass5_18CS10013_18CS10024.y"
        { 
		if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))   
		{
			debug();
			cout << "Type Error in Program"<< endl;
		}
		else 
		{
			debug();
			convertBoolToInt((yyvsp[-2].expr));		
			update_nextinstr();
			convertBoolToInt((yyvsp[0].expr));
			update_nextinstr();
			(yyval.expr) = new Expression();
			update_nextinstr();
			(yyval.expr)->type = "not-boolean";
			update_nextinstr();
			(yyval.expr)->loc = gentemp(new symboltype("int"));
			update_nextinstr();
			emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		} 
	}
#line 2808 "y.tab.c"
    break;

  case 61:
#line 859 "ass5_18CS10013_18CS10024.y"
                                   { (yyval.expr)=(yyvsp[0].expr); }
#line 2814 "y.tab.c"
    break;

  case 62:
#line 861 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		convertIntToBool((yyvsp[0].expr));       
		update_nextinstr();
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        
		update_nextinstr();
		convertIntToBool((yyvsp[-4].expr));                 
		update_nextinstr();
		(yyval.expr) = new Expression();     
		update_nextinstr();
		(yyval.expr)->type = "bool";
		update_nextinstr();
		backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-1].instr_number));        
		update_nextinstr();
		(yyval.expr)->truelist = (yyvsp[0].expr)->truelist;        
		update_nextinstr();
		(yyval.expr)->falselist = merge((yyvsp[-4].expr)->falselist, (yyvsp[0].expr)->falselist);    
		update_nextinstr();
		debug();
	}
#line 2839 "y.tab.c"
    break;

  case 63:
#line 884 "ass5_18CS10013_18CS10024.y"
                                  { (yyval.expr)=(yyvsp[0].expr); }
#line 2845 "y.tab.c"
    break;

  case 64:
#line 886 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		convertIntToBool((yyvsp[0].expr));			 
		update_nextinstr();
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());	
		update_nextinstr();
		convertIntToBool((yyvsp[-4].expr));			
		update_nextinstr();
		(yyval.expr) = new Expression();			
		update_nextinstr();
		(yyval.expr)->type = "bool";
		update_nextinstr();
		backpatch((yyvsp[-4].expr)->falselist, (yyvsp[-1].instr_number));		
		update_nextinstr();
		(yyval.expr)->truelist = merge((yyvsp[-4].expr)->truelist, (yyvsp[0].expr)->truelist);		
		update_nextinstr();
		(yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	
		update_nextinstr();
		debug();
	}
#line 2870 "y.tab.c"
    break;

  case 65:
#line 909 "ass5_18CS10013_18CS10024.y"
                                {(yyval.expr)=(yyvsp[0].expr);}
#line 2876 "y.tab.c"
    break;

  case 66:
#line 911 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		//normal conversion method to get conditional expressions
		(yyval.expr)->loc = gentemp((yyvsp[-4].expr)->loc->type);       
		update_nextinstr();
		(yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
		update_nextinstr();
		emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      
		update_nextinstr();
		debug();
		list<int> l = makelist(nextinstr());        
		emit("goto", "");              
		update_nextinstr();
		debug();
		backpatch((yyvsp[-3].stat)->nextlist, nextinstr());        
		update_nextinstr();
		emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
		update_nextinstr();
		debug();
		list<int> m = makelist(nextinstr());         
		update_nextinstr();
		l = merge(l, m);						
		update_nextinstr();
		emit("goto", "");						
		update_nextinstr();
		debug();
		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());   
		update_nextinstr();
		convertIntToBool((yyvsp[-8].expr));                   
		update_nextinstr();
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));           
		update_nextinstr();
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));          
		update_nextinstr();
		backpatch(l, nextinstr());
		update_nextinstr();
		debug();
	}
#line 2919 "y.tab.c"
    break;

  case 67:
#line 952 "ass5_18CS10013_18CS10024.y"
                                 {(yyval.expr)=(yyvsp[0].expr);}
#line 2925 "y.tab.c"
    break;

  case 68:
#line 954 "ass5_18CS10013_18CS10024.y"
        {
		if((yyvsp[-2].A)->atype=="arr")       
		{
			debug();
			(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
			update_nextinstr();
			emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);		
			update_nextinstr();
			debug();
		}
		else if((yyvsp[-2].A)->atype=="ptr")     
		{
			debug();
			emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);		
			update_nextinstr();
			debug();
		}
		else                              
		{
			debug();
			(yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
			emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
			update_nextinstr();
			debug();
		}
		(yyval.expr) = (yyvsp[0].expr);
		debug();	
	}
#line 2958 "y.tab.c"
    break;

  case 69:
#line 985 "ass5_18CS10013_18CS10024.y"
                   { }
#line 2964 "y.tab.c"
    break;

  case 70:
#line 986 "ass5_18CS10013_18CS10024.y"
                   { }
#line 2970 "y.tab.c"
    break;

  case 71:
#line 987 "ass5_18CS10013_18CS10024.y"
                   { }
#line 2976 "y.tab.c"
    break;

  case 72:
#line 988 "ass5_18CS10013_18CS10024.y"
                   { }
#line 2982 "y.tab.c"
    break;

  case 73:
#line 989 "ass5_18CS10013_18CS10024.y"
                   { }
#line 2988 "y.tab.c"
    break;

  case 74:
#line 990 "ass5_18CS10013_18CS10024.y"
                   { }
#line 2994 "y.tab.c"
    break;

  case 75:
#line 991 "ass5_18CS10013_18CS10024.y"
                { }
#line 3000 "y.tab.c"
    break;

  case 76:
#line 992 "ass5_18CS10013_18CS10024.y"
                { }
#line 3006 "y.tab.c"
    break;

  case 77:
#line 993 "ass5_18CS10013_18CS10024.y"
                        { }
#line 3012 "y.tab.c"
    break;

  case 78:
#line 994 "ass5_18CS10013_18CS10024.y"
                        { }
#line 3018 "y.tab.c"
    break;

  case 79:
#line 995 "ass5_18CS10013_18CS10024.y"
                       { }
#line 3024 "y.tab.c"
    break;

  case 80:
#line 999 "ass5_18CS10013_18CS10024.y"
                                {  (yyval.expr)=(yyvsp[0].expr);  }
#line 3030 "y.tab.c"
    break;

  case 81:
#line 1000 "ass5_18CS10013_18CS10024.y"
                                                   { }
#line 3036 "y.tab.c"
    break;

  case 82:
#line 1004 "ass5_18CS10013_18CS10024.y"
                                   { }
#line 3042 "y.tab.c"
    break;

  case 83:
#line 1009 "ass5_18CS10013_18CS10024.y"
                                                                {	}
#line 3048 "y.tab.c"
    break;

  case 84:
#line 1010 "ass5_18CS10013_18CS10024.y"
                                           {  	}
#line 3054 "y.tab.c"
    break;

  case 85:
#line 1014 "ass5_18CS10013_18CS10024.y"
                                                         {	}
#line 3060 "y.tab.c"
    break;

  case 86:
#line 1015 "ass5_18CS10013_18CS10024.y"
                                  {	}
#line 3066 "y.tab.c"
    break;

  case 87:
#line 1016 "ass5_18CS10013_18CS10024.y"
                                                {	}
#line 3072 "y.tab.c"
    break;

  case 88:
#line 1017 "ass5_18CS10013_18CS10024.y"
                         {	}
#line 3078 "y.tab.c"
    break;

  case 89:
#line 1018 "ass5_18CS10013_18CS10024.y"
                                                {	}
#line 3084 "y.tab.c"
    break;

  case 90:
#line 1019 "ass5_18CS10013_18CS10024.y"
                         {	}
#line 3090 "y.tab.c"
    break;

  case 91:
#line 1020 "ass5_18CS10013_18CS10024.y"
                                                    {	}
#line 3096 "y.tab.c"
    break;

  case 92:
#line 1021 "ass5_18CS10013_18CS10024.y"
                             {	}
#line 3102 "y.tab.c"
    break;

  case 93:
#line 1026 "ass5_18CS10013_18CS10024.y"
                          { }
#line 3108 "y.tab.c"
    break;

  case 94:
#line 1027 "ass5_18CS10013_18CS10024.y"
                                                     { }
#line 3114 "y.tab.c"
    break;

  case 95:
#line 1031 "ass5_18CS10013_18CS10024.y"
                     {(yyval.symp)=(yyvsp[0].symp);}
#line 3120 "y.tab.c"
    break;

  case 96:
#line 1033 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;        
		emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);
		update_nextinstr();
		debug();
	}
#line 3132 "y.tab.c"
    break;

  case 97:
#line 1043 "ass5_18CS10013_18CS10024.y"
                 { }
#line 3138 "y.tab.c"
    break;

  case 98:
#line 1044 "ass5_18CS10013_18CS10024.y"
                 { }
#line 3144 "y.tab.c"
    break;

  case 99:
#line 1048 "ass5_18CS10013_18CS10024.y"
                 { var_type="void"; }
#line 3150 "y.tab.c"
    break;

  case 100:
#line 1049 "ass5_18CS10013_18CS10024.y"
                 { var_type="char"; }
#line 3156 "y.tab.c"
    break;

  case 101:
#line 1050 "ass5_18CS10013_18CS10024.y"
                { }
#line 3162 "y.tab.c"
    break;

  case 102:
#line 1051 "ass5_18CS10013_18CS10024.y"
               { var_type="int"; }
#line 3168 "y.tab.c"
    break;

  case 103:
#line 1052 "ass5_18CS10013_18CS10024.y"
                { }
#line 3174 "y.tab.c"
    break;

  case 104:
#line 1053 "ass5_18CS10013_18CS10024.y"
                  { var_type="float"; }
#line 3180 "y.tab.c"
    break;

  case 105:
#line 1054 "ass5_18CS10013_18CS10024.y"
                 { }
#line 3186 "y.tab.c"
    break;

  case 106:
#line 1058 "ass5_18CS10013_18CS10024.y"
                                                        { }
#line 3192 "y.tab.c"
    break;

  case 107:
#line 1059 "ass5_18CS10013_18CS10024.y"
                                                        { }
#line 3198 "y.tab.c"
    break;

  case 108:
#line 1063 "ass5_18CS10013_18CS10024.y"
          { }
#line 3204 "y.tab.c"
    break;

  case 109:
#line 1064 "ass5_18CS10013_18CS10024.y"
                                   { }
#line 3210 "y.tab.c"
    break;

  case 110:
#line 1068 "ass5_18CS10013_18CS10024.y"
                { }
#line 3216 "y.tab.c"
    break;

  case 111:
#line 1069 "ass5_18CS10013_18CS10024.y"
                   { }
#line 3222 "y.tab.c"
    break;

  case 112:
#line 1070 "ass5_18CS10013_18CS10024.y"
                   { }
#line 3228 "y.tab.c"
    break;

  case 113:
#line 1074 "ass5_18CS10013_18CS10024.y"
                 { }
#line 3234 "y.tab.c"
    break;

  case 114:
#line 1079 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		symboltype *t = (yyvsp[-1].sym_type);
		update_nextinstr();
		while(t->arrtype!=NULL) t = t->arrtype;           
		update_nextinstr();
		t->arrtype = (yyvsp[0].symp)->type;                
		update_nextinstr();
		(yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                  
		update_nextinstr();
		debug();
	}
#line 3251 "y.tab.c"
    break;

  case 115:
#line 1091 "ass5_18CS10013_18CS10024.y"
                            {   }
#line 3257 "y.tab.c"
    break;

  case 116:
#line 1096 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));
		update_nextinstr();
		currSymbolPtr = (yyval.symp);
		update_nextinstr();
		debug();
		
	}
#line 3271 "y.tab.c"
    break;

  case 117:
#line 1105 "ass5_18CS10013_18CS10024.y"
                                                {(yyval.symp)=(yyvsp[-1].symp);}
#line 3277 "y.tab.c"
    break;

  case 118:
#line 1106 "ass5_18CS10013_18CS10024.y"
                                                                                            {	}
#line 3283 "y.tab.c"
    break;

  case 119:
#line 1107 "ass5_18CS10013_18CS10024.y"
                                                                      {	}
#line 3289 "y.tab.c"
    break;

  case 120:
#line 1109 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		symboltype *t = (yyvsp[-3].symp) -> type;
		update_nextinstr();
		symboltype *prev = NULL;
		update_nextinstr();
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->arrtype;      
			update_nextinstr();
		}
		if(prev==NULL) 
		{
			debug();
			int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());      
			update_nextinstr();
			symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);        
			update_nextinstr();
			(yyval.symp) = (yyvsp[-3].symp)->update(s);   //update the symbol table
			update_nextinstr();
			debug();
		}
		else 
		{
			debug();
			prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));     	
			update_nextinstr();
			(yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
			update_nextinstr();
			debug();
		}
	}
#line 3327 "y.tab.c"
    break;

  case 121:
#line 1143 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		symboltype *t = (yyvsp[-2].symp) -> type;
		update_nextinstr();
		symboltype *prev = NULL;
		update_nextinstr();
		while(t->type == "arr") 
		{
			prev = t;	
			t = t->arrtype;         
			update_nextinstr();
		}
		if(prev==NULL) 
		{
			debug();
			symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);    
			update_nextinstr();
			(yyval.symp) = (yyvsp[-2].symp)->update(s);
			update_nextinstr();
			debug();	
		}
		else 
		{
			debug();
			prev->arrtype =  new symboltype("arr", t, 0);
			update_nextinstr();
			(yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
			update_nextinstr();
			debug();
		}
	}
#line 3363 "y.tab.c"
    break;

  case 122:
#line 1174 "ass5_18CS10013_18CS10024.y"
                                                                                                   {	}
#line 3369 "y.tab.c"
    break;

  case 123:
#line 1175 "ass5_18CS10013_18CS10024.y"
                                                                               {	}
#line 3375 "y.tab.c"
    break;

  case 124:
#line 1176 "ass5_18CS10013_18CS10024.y"
                                                                          {	}
#line 3381 "y.tab.c"
    break;

  case 125:
#line 1177 "ass5_18CS10013_18CS10024.y"
                                                      {	}
#line 3387 "y.tab.c"
    break;

  case 126:
#line 1179 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		ST->name = (yyvsp[-4].symp)->name;
		update_nextinstr();
		if((yyvsp[-4].symp)->type->type !="void") 
		{
			sym *s = ST->lookup("return");        
			s->update((yyvsp[-4].symp)->type);
			update_nextinstr();
			debug();
		}
		(yyvsp[-4].symp)->nested=ST;       
		update_nextinstr();	
		ST->parent = globalST;
		update_nextinstr();
		changeTable(globalST);				
		update_nextinstr();
		currSymbolPtr = (yyval.symp);
		update_nextinstr();
		debug();
	}
#line 3413 "y.tab.c"
    break;

  case 127:
#line 1200 "ass5_18CS10013_18CS10024.y"
                                                                       { }
#line 3419 "y.tab.c"
    break;

  case 128:
#line 1202 "ass5_18CS10013_18CS10024.y"
        { 
		debug();
		ST->name = (yyvsp[-3].symp)->name;
		update_nextinstr();
		if((yyvsp[-3].symp)->type->type !="void") 
		{
			sym *s = ST->lookup("return");
			s->update((yyvsp[-3].symp)->type);
			update_nextinstr();
			debug();			
		}
		(yyvsp[-3].symp)->nested=ST;
		update_nextinstr();
		ST->parent = globalST;
		update_nextinstr();
		changeTable(globalST);				
		update_nextinstr();
		currSymbolPtr = (yyval.symp);
		update_nextinstr();
		debug();
	}
#line 3445 "y.tab.c"
    break;

  case 129:
#line 1228 "ass5_18CS10013_18CS10024.y"
        { 													
		if(currSymbolPtr->nested==NULL) 
		{
			debug();
			changeTable(new symtable(""));	
			update_nextinstr();
		}
		else 
		{
			debug();
			changeTable(currSymbolPtr ->nested);						
			update_nextinstr();
			emit("label", ST->name);
			update_nextinstr();
			debug();
		}
	}
#line 3467 "y.tab.c"
    break;

  case 130:
#line 1249 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.sym_type) = new symboltype("ptr");
		update_nextinstr();
		debug();  
	}
#line 3477 "y.tab.c"
    break;

  case 131:
#line 1255 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type));
		update_nextinstr();
		debug(); 
	}
#line 3487 "y.tab.c"
    break;

  case 132:
#line 1264 "ass5_18CS10013_18CS10024.y"
                           {  }
#line 3493 "y.tab.c"
    break;

  case 133:
#line 1265 "ass5_18CS10013_18CS10024.y"
                                               {  }
#line 3499 "y.tab.c"
    break;

  case 134:
#line 1269 "ass5_18CS10013_18CS10024.y"
            {  }
#line 3505 "y.tab.c"
    break;

  case 135:
#line 1270 "ass5_18CS10013_18CS10024.y"
                                   {  }
#line 3511 "y.tab.c"
    break;

  case 136:
#line 1274 "ass5_18CS10013_18CS10024.y"
                         { }
#line 3517 "y.tab.c"
    break;

  case 137:
#line 1275 "ass5_18CS10013_18CS10024.y"
                                    { }
#line 3523 "y.tab.c"
    break;

  case 138:
#line 1279 "ass5_18CS10013_18CS10024.y"
                                { }
#line 3529 "y.tab.c"
    break;

  case 139:
#line 1280 "ass5_18CS10013_18CS10024.y"
                                                     { }
#line 3535 "y.tab.c"
    break;

  case 140:
#line 1284 "ass5_18CS10013_18CS10024.y"
                                            { }
#line 3541 "y.tab.c"
    break;

  case 141:
#line 1285 "ass5_18CS10013_18CS10024.y"
                                 { }
#line 3547 "y.tab.c"
    break;

  case 142:
#line 1289 "ass5_18CS10013_18CS10024.y"
                     { }
#line 3553 "y.tab.c"
    break;

  case 143:
#line 1290 "ass5_18CS10013_18CS10024.y"
                                           { }
#line 3559 "y.tab.c"
    break;

  case 144:
#line 1295 "ass5_18CS10013_18CS10024.y"
                                   { }
#line 3565 "y.tab.c"
    break;

  case 145:
#line 1299 "ass5_18CS10013_18CS10024.y"
                                 { (yyval.symp)=(yyvsp[0].expr)->loc; }
#line 3571 "y.tab.c"
    break;

  case 146:
#line 1300 "ass5_18CS10013_18CS10024.y"
                                                      { }
#line 3577 "y.tab.c"
    break;

  case 147:
#line 1301 "ass5_18CS10013_18CS10024.y"
                                                            { }
#line 3583 "y.tab.c"
    break;

  case 148:
#line 1305 "ass5_18CS10013_18CS10024.y"
                                      { }
#line 3589 "y.tab.c"
    break;

  case 149:
#line 1306 "ass5_18CS10013_18CS10024.y"
                                                             { }
#line 3595 "y.tab.c"
    break;

  case 150:
#line 1310 "ass5_18CS10013_18CS10024.y"
                                 { }
#line 3601 "y.tab.c"
    break;

  case 151:
#line 1314 "ass5_18CS10013_18CS10024.y"
           {  }
#line 3607 "y.tab.c"
    break;

  case 152:
#line 1315 "ass5_18CS10013_18CS10024.y"
                        {  }
#line 3613 "y.tab.c"
    break;

  case 153:
#line 1319 "ass5_18CS10013_18CS10024.y"
                     { }
#line 3619 "y.tab.c"
    break;

  case 154:
#line 1320 "ass5_18CS10013_18CS10024.y"
                                     { }
#line 3625 "y.tab.c"
    break;

  case 155:
#line 1324 "ass5_18CS10013_18CS10024.y"
                                                    { }
#line 3631 "y.tab.c"
    break;

  case 156:
#line 1325 "ass5_18CS10013_18CS10024.y"
                         { }
#line 3637 "y.tab.c"
    break;

  case 157:
#line 1329 "ass5_18CS10013_18CS10024.y"
                            { }
#line 3643 "y.tab.c"
    break;

  case 158:
#line 1330 "ass5_18CS10013_18CS10024.y"
                               { (yyval.stat)=(yyvsp[0].stat); }
#line 3649 "y.tab.c"
    break;

  case 159:
#line 1332 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.stat)=new Statement();             
		(yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
	}
#line 3658 "y.tab.c"
    break;

  case 160:
#line 1336 "ass5_18CS10013_18CS10024.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3664 "y.tab.c"
    break;

  case 161:
#line 1337 "ass5_18CS10013_18CS10024.y"
                                { (yyval.stat)=(yyvsp[0].stat); }
#line 3670 "y.tab.c"
    break;

  case 162:
#line 1338 "ass5_18CS10013_18CS10024.y"
                           { (yyval.stat)=(yyvsp[0].stat); }
#line 3676 "y.tab.c"
    break;

  case 163:
#line 1342 "ass5_18CS10013_18CS10024.y"
                                     { }
#line 3682 "y.tab.c"
    break;

  case 164:
#line 1343 "ass5_18CS10013_18CS10024.y"
                                                   { }
#line 3688 "y.tab.c"
    break;

  case 165:
#line 1344 "ass5_18CS10013_18CS10024.y"
                                  { }
#line 3694 "y.tab.c"
    break;

  case 166:
#line 1348 "ass5_18CS10013_18CS10024.y"
                                                           { (yyval.stat)=(yyvsp[-1].stat); }
#line 3700 "y.tab.c"
    break;

  case 167:
#line 1352 "ass5_18CS10013_18CS10024.y"
                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3706 "y.tab.c"
    break;

  case 168:
#line 1354 "ass5_18CS10013_18CS10024.y"
        { 
		(yyval.stat)=(yyvsp[0].stat);
		backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     
	}
#line 3715 "y.tab.c"
    break;

  case 169:
#line 1361 "ass5_18CS10013_18CS10024.y"
           { (yyval.stat)=new Statement(); }
#line 3721 "y.tab.c"
    break;

  case 170:
#line 1362 "ass5_18CS10013_18CS10024.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3727 "y.tab.c"
    break;

  case 171:
#line 1366 "ass5_18CS10013_18CS10024.y"
                        { (yyval.stat)=new Statement(); }
#line 3733 "y.tab.c"
    break;

  case 172:
#line 1367 "ass5_18CS10013_18CS10024.y"
                      { (yyval.stat)=(yyvsp[0].stat); }
#line 3739 "y.tab.c"
    break;

  case 173:
#line 1371 "ass5_18CS10013_18CS10024.y"
                               {(yyval.expr)=(yyvsp[-1].expr);}
#line 3745 "y.tab.c"
    break;

  case 174:
#line 1372 "ass5_18CS10013_18CS10024.y"
                    {(yyval.expr) = new Expression();}
#line 3751 "y.tab.c"
    break;

  case 175:
#line 1377 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		backpatch((yyvsp[-4].stat)->nextlist, nextinstr());        
		update_nextinstr();
		convertIntToBool((yyvsp[-5].expr));         
		update_nextinstr();
		(yyval.stat) = new Statement();        
		update_nextinstr();
		backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));        
		update_nextinstr();
		list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);   
		update_nextinstr();
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
		update_nextinstr();
		debug();
	}
#line 3772 "y.tab.c"
    break;

  case 176:
#line 1394 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		backpatch((yyvsp[-7].stat)->nextlist, nextinstr());	
		update_nextinstr();
		convertIntToBool((yyvsp[-8].expr));        
		update_nextinstr();
		(yyval.stat) = new Statement();       
		update_nextinstr();
		backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));    
		update_nextinstr();
		backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
		update_nextinstr();
		list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       
		update_nextinstr();
		(yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
		update_nextinstr();
		debug();	
	}
#line 3795 "y.tab.c"
    break;

  case 177:
#line 1412 "ass5_18CS10013_18CS10024.y"
                                                                 { }
#line 3801 "y.tab.c"
    break;

  case 178:
#line 1417 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.stat) = new Statement();    
		update_nextinstr();
		convertIntToBool((yyvsp[-3].expr));     
		update_nextinstr();
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	
		update_nextinstr();
		backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));	
		update_nextinstr();
		(yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;   
		update_nextinstr();
		// Emit to prevent fallthrough
		string str=convertIntToString((yyvsp[-5].instr_number));			
		update_nextinstr();
		emit("goto", str);
		update_nextinstr();
		debug();
			
	}
#line 3826 "y.tab.c"
    break;

  case 179:
#line 1438 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.stat) = new Statement();     
		update_nextinstr();
		convertIntToBool((yyvsp[-2].expr));     
		update_nextinstr();
		backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						
		update_nextinstr();
		backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						
		update_nextinstr();
		(yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       
		update_nextinstr();
		debug();		
	}
#line 3845 "y.tab.c"
    break;

  case 180:
#line 1453 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.stat) = new Statement();   
		update_nextinstr();
		convertIntToBool((yyvsp[-3].expr));    
		update_nextinstr();
		backpatch((yyvsp[-3].expr)->truelist,(yyvsp[-1].instr_number));       
		update_nextinstr();
		backpatch((yyvsp[0].stat)->nextlist,(yyvsp[-4].instr_number));        
		update_nextinstr();
		string str=convertIntToString((yyvsp[-4].instr_number));
		update_nextinstr();
		emit("goto", str);                
		update_nextinstr();
		debug();
		(yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;      
		update_nextinstr();
		debug();
	}
#line 3869 "y.tab.c"
    break;

  case 181:
#line 1473 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.stat) = new Statement();		 
		update_nextinstr();
		convertIntToBool((yyvsp[-6].expr));  
		update_nextinstr();
		backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	
		update_nextinstr();
		backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	
		update_nextinstr();
		backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	
		update_nextinstr();
		string str=convertIntToString((yyvsp[-5].instr_number));
		update_nextinstr();
		emit("goto", str);				
		update_nextinstr();
		debug();
		(yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	
		update_nextinstr();
		debug();	
	}
#line 3895 "y.tab.c"
    break;

  case 182:
#line 1497 "ass5_18CS10013_18CS10024.y"
                                    { (yyval.stat) = new Statement(); }
#line 3901 "y.tab.c"
    break;

  case 183:
#line 1498 "ass5_18CS10013_18CS10024.y"
                             { (yyval.stat) = new Statement(); }
#line 3907 "y.tab.c"
    break;

  case 184:
#line 1499 "ass5_18CS10013_18CS10024.y"
                          { (yyval.stat) = new Statement(); }
#line 3913 "y.tab.c"
    break;

  case 185:
#line 1501 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.stat) = new Statement();
		update_nextinstr();
		emit("return",(yyvsp[-1].expr)->loc->name);
		update_nextinstr();
		debug();
		
	}
#line 3927 "y.tab.c"
    break;

  case 186:
#line 1511 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		(yyval.stat) = new Statement();
		update_nextinstr();
		emit("return","");                        
		update_nextinstr();
		debug();
	}
#line 3940 "y.tab.c"
    break;

  case 187:
#line 1522 "ass5_18CS10013_18CS10024.y"
                               { }
#line 3946 "y.tab.c"
    break;

  case 188:
#line 1523 "ass5_18CS10013_18CS10024.y"
                                                { }
#line 3952 "y.tab.c"
    break;

  case 189:
#line 1527 "ass5_18CS10013_18CS10024.y"
                              { }
#line 3958 "y.tab.c"
    break;

  case 190:
#line 1528 "ass5_18CS10013_18CS10024.y"
                      { }
#line 3964 "y.tab.c"
    break;

  case 191:
#line 1533 "ass5_18CS10013_18CS10024.y"
        {
		debug();
		int next_instr=0;	 
		update_nextinstr();
		ST->parent=globalST;
		update_nextinstr();
		changeTable(globalST);                     
		update_nextinstr();
		debug();
	}
#line 3979 "y.tab.c"
    break;

  case 192:
#line 1546 "ass5_18CS10013_18CS10024.y"
                      { }
#line 3985 "y.tab.c"
    break;

  case 193:
#line 1547 "ass5_18CS10013_18CS10024.y"
                                       { }
#line 3991 "y.tab.c"
    break;

  case 194:
#line 1551 "ass5_18CS10013_18CS10024.y"
          {  }
#line 3997 "y.tab.c"
    break;

  case 195:
#line 1552 "ass5_18CS10013_18CS10024.y"
                             {  }
#line 4003 "y.tab.c"
    break;


#line 4007 "y.tab.c"

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
#line 1556 "ass5_18CS10013_18CS10024.y"


void yyerror(string s) {
    cout << s << endl;
}
