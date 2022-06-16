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

#line 225 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
