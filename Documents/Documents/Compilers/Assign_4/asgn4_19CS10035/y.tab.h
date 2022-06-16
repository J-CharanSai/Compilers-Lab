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

#line 205 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
