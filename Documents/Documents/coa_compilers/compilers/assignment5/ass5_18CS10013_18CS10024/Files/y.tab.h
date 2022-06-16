/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
		

#line 243 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
