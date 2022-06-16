%{
#include <stdio.h>
#include "y.tab.h"
%}


SEQ 						[^*]|[*][^/]
SLC							[/][/][^\n]*
MLC 						[/][*]{SEQ}*[*][/]

ID_NONDIGIT 				"_"|[a-zA-Z]
DIGIT						[0-9]
ID 							{ID_NONDIGIT}({ID_NONDIGIT}|{DIGIT})*
 
ENUM_CONST					{ID}
NONZERO_DIGIT				[1-9]
NONZERO_INT_CONST			{NONZERO_DIGIT}({NONZERO_DIGIT}|{DIGIT})*
INT_CONST					"0"|{NONZERO_INT_CONST}

DIGIT_SEQ					{DIGIT}+
SIGN 						"-"|"+"
EXP_PART					("e"{SIGN}?{DIGIT_SEQ})|("E"{SIGN}?{DIGIT_SEQ})
FRAC_CONST					({DIGIT_SEQ}?"."{DIGIT_SEQ})|({DIGIT_SEQ}".")
FLT_CONST					({DIGIT_SEQ}{EXP_PART})|({FRAC_CONST}{EXP_PART}?)

CONST_DIGIT					{INT_CONST}|{FLT_CONST}
CONST 						{CONST_DIGIT}|{ENUM_CONST}|{CHAR_CONST}


ESCAPE_SEQ					"\b"|"\f"|"\n"|"\'"|"\""|"\?"|"\\"|"\a"|"\r"|"\t"|"\v"
CH_CHAR 					{ESCAPE_SEQ}|[^("\'"|"\\"|"\n")]
CH_CHAR_SEQ					{CH_CHAR}+
CHAR_CONST					"\'"{CH_CHAR_SEQ}"\'"

STR_CH  					{ESCAPE_SEQ}|[^("\""|"\\"|"\n")]
STR_CH_SEQ					{STR_CH}+
STR_LIT 					"\""{STR_CH_SEQ}?"\""
	
PUNCTUATOR					"["|"]"|"."|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"("|")"|"{"|"}"|"%"|","|"<"|">"|"^"|"|"|"="|"?"|":"|";"|"#"

WS 					[ \t\n]

%%
"auto" 						{ return AUTO; } 
"enum"						{ return ENUM; }
"restrict"					{ return RESTRICT; } 
"unsigned"					{ return UNSIGNED; }
"break"						{ return BREAK; }
"extern"					{ return EXTERN; }
"return"					{ return RETURN; }
"void"						{ return VOID; }
"case"						{ return CASE; }
"float"						{ return FLOAT; }
"short"						{ return SHORT; }
"volatile"					{ return VOLATILE; }
"char"						{ return CHAR; }
"for"						{ return FOR; }
"signed"					{ return SIGNED; }
"while"						{ return WHILE; }
"const"						{ return CONST; }
"goto"						{ return GOTO; }
"sizeof"					{ return SIZEOF; }
"_Bool"						{ return _BOOL; }
"continue"					{ return CONTINUE; }
"if"						{ return IF; }
"static"					{ return STATIC; }
"_Complex"					{ return _COMPLEX; }
"default"					{ return DEFAULT; }
"inline"					{ return INLINE; }
"struct"					{ return STRUCT; }
"_Imaginary"				{ return _IMAGINARY; }
"do"						{ return DO; }
"int"						{ return INT; }
"switch"					{ return SWITCH; }
"double"					{ return DOUBLE; }
"long"						{ return LONG; }
"typedef"					{ return TYPEDEF; }
"else"						{ return ELSE; }
"register"					{ return REGISTER; }
"union"						{ return UNION; }

{FLT_CONST}					{return FLT_CONST;}

{INT_CONST}					{return INT_CONST;}

{CHAR_CONST} 				{return CHAR_CONST;}

{STR_LIT} 					{return STR_LIT;}

{ID}						{return ID;}

	"->" 					{ return ARW;}
	"++" 					{ return INCREM;}
	"--" 					{ return DECREM;}
	"<<" 					{ return SHL;}
	">>" 					{ return SHR;}
	"<=" 					{ return LTE;}
	">=" 					{ return GTE;}
	"==" 					{ return EQL;}
	"!=" 					{ return NEQ;}
	"&&" 					{ return AND;}
	"||" 					{ return OR;}
	"..." 					{ return DOTS;}
	"*=" 					{ return STAREQ;}
	"/=" 					{ return DIVEQ;}
	"%=" 					{ return MODEQ;}
	"+=" 					{ return PLUSEQ;}
	"-=" 					{ return MINUSEQ;}
	"<<="					{ return SHLEQ;}
	">>=" 					{ return SHREQ;}
	"&=" 					{ return BINANDEQ;}
	"^=" 					{ return BINXOREQ;}
	"|=" 					{ return BINOREQ;}
{PUNCTUATOR}		{return yytext[0];}
{SLC}				{}
{MLC}				{}
{WS}				{}
%%

