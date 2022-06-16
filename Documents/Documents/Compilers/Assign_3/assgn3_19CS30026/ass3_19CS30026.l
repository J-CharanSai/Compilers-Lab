%{
#include <stdio.h>
#include <string.h>

#define SLC 				1 
#define MLC 				2

// keywords
#define AUTO 				10
#define ENUM 				11
#define RESTRICT 			12
#define UNSIGNED 			13
#define BREAK 				14
#define EXTERN 				15
#define RETURN 				16
#define VOID 				17
#define CASE 				18
#define FLOAT 				19
#define SHORT 				20
#define VOLATILE 			21
#define CHAR 				22
#define FOR 				23
#define SIGNED 				24
#define WHILE 				25
#define CONST 				26
#define GOTO 				27
#define SIZEOF 				28
#define _BOOL 				29	
#define CONTINUE 			30
#define IF 					31
#define STATIC 				32
#define _COMPLEX 			33
#define DEFAULT 			34
#define INLILE 				35
#define STRUCT 				36
#define _IMAGINARY 			37
#define DO 					38
#define INT 				39
#define SWITCH 				40
#define DOUBLE 				41
#define LONG 				42
#define TYPEDEF 			43
#define ELSE 				44
#define REGISTER 			45
#define UNION 				46

//IDENTIFIERS
#define ID 					50
#define INT_CONST 			51
#define FLT_CONST 			52
#define CHAR_CONST 			53
#define STR_LIT 			54

// Puctuators
#define SBO 				60
#define SBC 	 			61
#define RBO  	 			62
#define RBC  	 			63
#define CBO 				64
#define CBC  	 			65
#define DOT 				66
#define ARW 				67
#define INCREM 				68
#define DECREM 				69
#define AMPSND 				70
#define MUL 				71
#define ADD 				72
#define SUB 				73
#define NEG 				74
#define EXCLAIM 			75
#define DIV 				76
#define MODULO 				77
#define SHL 				78
#define SHR 				79
#define LST 	 			80
#define GRT 				81
#define LTE 				82
#define GTE 				83
#define EQL 				84
#define NEQ 				85
#define AND 				86
#define OR 					87
#define QUESTION 			88
#define COLON 				89
#define SEMICOLON 			90
#define DOTS 				91
#define ASSIGN 				92
#define STAREQ 				93
#define DIVEQ 				94
#define MODEQ 				95
#define PLUSEQ 				96
#define MINUSEQ 			97
#define SHLEQ 				98
#define SHREQ 				99
#define BINANDEQ 			100
#define BINXOREQ 			101
#define BINOREQ 			102
#define COMMA 				103
#define HASH 				104
%}

/* Regular Expression Definitions */
/*COMMENTS*/

SEQ 						[^*]|[*][^/]
SLC							[/][/][^\n]*
MLC 						[/][*]{SEQ}*[*][/]


/*KEYWORDS*/
KEYWORD						"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
	

/*IDENTIFIERS*/
ID_NONDIGIT 				"_"|[a-zA-Z]
DIGIT						[0-9]
ID 							{ID_NONDIGIT}({ID_NONDIGIT}|{DIGIT})*
 

/*CONSTANTS*/
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


/*STRING_LITERALS*/
STR_CH  					{ESCAPE_SEQ}|[^("\""|"\\"|"\n")]
STR_CH_SEQ					{STR_CH}+
STR_LIT 					"\""{STR_CH_SEQ}?"\""
	

/*PUNCTUATORS*/
PUNCTUATOR					"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|","|"#"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="


%%
{MLC} 						{return MLC;}
{SLC}						{return SLC;}

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
"inline"					{ return INLILE; }
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

	"[" 					{ return SBO;}
	"]" 					{ return SBC;}
	"(" 					{ return RBO;}
	")" 					{ return RBC;}
	"{" 					{ return CBO;}	
	"}" 					{ return CBC;}
	"." 					{ return DOT;}
	"->" 					{ return ARW;}
	"++" 					{ return INCREM;}
	"--" 					{ return DECREM;}
	"&" 					{ return AMPSND;}
	"*" 					{ return MUL;}
	"+" 					{ return ADD;}
	"-" 					{ return SUB;}
	"~" 					{ return NEG;}
	"!" 					{ return EXCLAIM;}
	"/" 					{ return DIV;}
	"%" 					{ return MODULO;}
	"<<" 					{ return SHL;}
	">>" 					{ return SHR;}
	"<" 					{ return LST;}
	">" 					{ return GRT;}
	"<=" 					{ return LTE;}
	">=" 					{ return GTE;}
	"==" 					{ return EQL;}
	"!=" 					{ return NEQ;}
	"&&" 					{ return AND;}
	"||" 					{ return OR;}
	"?" 					{ return QUESTION;}
	":" 					{ return COLON;}
	";" 					{ return SEMICOLON;}
	"..." 					{ return DOTS;}
	"=" 					{ return ASSIGN;}
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
	"," 					{ return COMMA;}
	"#" 					{ return HASH;}
"\n"|" "|"\t"				{}
%%