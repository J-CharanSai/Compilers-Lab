%{
	#include <stdio.h>
	#include <string.h>
%}

%{
	#define FOR         1
    #define GOTO        2
    #define IF          3
    #define INT         4
    #define LONG        5
    #define RETURN      6
    #define SHORT       7
    #define SIZEOF      8
    #define STATIC      9
    #define STRUCT      10
    #define BREAK       11
    #define CASE        12
    #define CHAR        13
    #define CONTINUE    14
    #define DEFAULT     15
    #define DO          16
    #define DOUBLE      17
    #define ELSE        18
    #define EXTERN      19
    #define FLOAT       20
    #define SWITCH      21
    #define TYPEDEF     22
    #define UNION       23
    #define VOID        24
    #define WHILE       25


    #define SIN_LINE_CMNT		26
	#define MUL_LINE_CMNT	 	27


	#define SQUARE_BRACKET_OPEN      28
	#define SQUARE_BRACKET_CLOSE  	 29
	#define ROUND_BRACKET_OPEN		 30
	#define ROUND_BRACKET_CLOSE  	 31
	#define CURLY_BRACKET_OPEN 		 32
	#define CURLY_BRACKET_CLOSE   	 33

	#define ID   		34
	#define INT_CNST 	35
	#define FLT_CNST 	36
	#define CHAR_CNST 	37
	#define STR_LTRL 	38

	#define DOT 				39
	#define IMPLIES 			40
	#define INCREASE 			41
	#define DECREASE 			42
	#define BITWISE_AND			43
	#define MUL 				44
	#define ADD 				45
	#define SUB 				46
	#define BITWISE_NOT			47
	#define EXCLAIM     		48
	#define DIV 				49
	#define MOD 				50
	#define SHIFT_LEFT 			51
	#define SHIFT_RIGHT      	52
	#define LT  	 			53
	#define GT   				54
	#define LTE 				55
	#define GTE 				56
	#define EQ 					57
	#define NEQ 				58
	#define BITWISE_XOR 	    59
	#define BITOR 			60
	#define AND 				61
	#define OR 					62
	#define QUESTION 			63
	#define COLON 				64
	#define SEMICOLON 			65
	#define DOTS 				66
	#define ASSIGN 				67
	#define MUL_EQ   			68
	#define DIV_EQ 				69
	#define MOD_EQ 				70
	#define ADD_EQ 				71
	#define SUB_EQ 				72
	#define LT_EQ 				73
	#define GT_EQ 				74
	#define BITWISE_AND_EQ 		75
	#define BITWISE_XOR_EQ 		76
	#define BITWISE_OR_EQ   	77
	#define COMMA 				78
	#define HASH 				79

%}

/* Regex Definition */

/*Keywords*/

KEYWORD     "break"|"case"|"char"|"continue"|"default"|"do"|"double"|"else"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"return"|"short"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"void"|"while"	


/*CONSTANTS*/

CONSTANT					{INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{ENUMERATION_CONSTANT}|{CHARACTER_CONSTANT}

INTEGER_CONSTANT			{NONZERO_INTEGER_CONSTANT}|"0"
NONZERO_INTEGER_CONSTANT	{NONZERO_DIGIT}({NONZERO_DIGIT}|{DIGIT})*
NONZERO_DIGIT				[1-9]

FLOATING_CONSTANT			({FRACTIONAL_CONSTANT}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})
FRACTIONAL_CONSTANT			({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
EXPONENT_PART				("e"{SIGN}?{DIGIT_SEQUENCE})|("E"{SIGN}?{DIGIT_SEQUENCE})
SIGN 						"+"|"-"
DIGIT_SEQUENCE				{DIGIT}({DIGIT})*


ENUMERATION_CONSTANT		{IDENTIFIER}

ESCAPE_SEQUENCE				"\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"
C_CHAR 						{ESCAPE_SEQUENCE}|[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE				{C_CHAR}+
CHARACTER_CONSTANT			"\'"{C_CHAR_SEQUENCE}"\'"

/*IDENTIFIER*/

DIGIT						[0-9]
IDENTIFIER_NONDIGIT 		[a-zA-Z]|"_"
IDENTIFIER 					{IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*


/*STRING_LITERALS*/

S_CHAR  					{ESCAPE_SEQUENCE}|[^("\""|"\\"|"\n")]
S_CHAR_SEQUENCE				{S_CHAR}+
STRING_LITERAL 				"\""{S_CHAR_SEQUENCE}?"\""

/*COMMENTS*/

SINGLE_LINE_COMMENT [/][/].*
MULTI_COMMENT_START [/][\*]+
MULTI_COMMENT_END	[\*]+[/]
MULTI_LINE_COMMENT ({MULTI_COMMENT_START}(([^\*])|((\*)+[^/\*]))*{MULTI_COMMENT_END})

/*PUNCTUATORS*/
PUNCTUATOR 					"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|""|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"


%%

{KEYWORD}		{
	if(strcmp(yytext,"break")==0)			{ return BREAK; }
	if(strcmp(yytext,"case")==0)			{ return CASE; }
	if(strcmp(yytext,"char")==0)		  	{ return CHAR; }
	if(strcmp(yytext,"continue")==0)		{ return CONTINUE; }
	if(strcmp(yytext,"default")==0)			{ return DEFAULT; }
	if(strcmp(yytext,"do")==0)				{ return DO; }
	if(strcmp(yytext,"double")==0)			{ return DOUBLE; }
	if(strcmp(yytext,"else")==0)			{ return ELSE; }
	if(strcmp(yytext,"extern")==0)			{ return EXTERN; }
	if(strcmp(yytext,"float")==0)			{ return FLOAT; }
	if(strcmp(yytext,"for")==0)				{ return FOR; }
	if(strcmp(yytext,"goto")==0)			{ return GOTO; }
	if(strcmp(yytext,"if")==0)				{ return IF; }
	if(strcmp(yytext,"int")==0)				{ return INT; }
	if(strcmp(yytext,"long")==0)			{ return LONG; }
	if(strcmp(yytext,"return")==0)			{ return RETURN; }
	if(strcmp(yytext,"short")==0)			{ return SHORT; }
	if(strcmp(yytext,"sizeof")==0)			{ return SIZEOF; }
	if(strcmp(yytext,"static")==0)			{ return STATIC; }
	if(strcmp(yytext,"struct")==0)			{ return STRUCT; }
	if(strcmp(yytext,"switch")==0)			{ return SWITCH; }
	if(strcmp(yytext,"typedef")==0)			{ return TYPEDEF; }
	if(strcmp(yytext,"union")==0)			{ return UNION; }
	if(strcmp(yytext,"void")==0)			{ return VOID; } 
	if(strcmp(yytext,"while")==0)			{ return WHILE; }
}


{IDENTIFIER}	{
	return ID;
}

{INTEGER_CONSTANT}	{
	return INT_CNST;
}

{FLOATING_CONSTANT}	{
	return FLT_CNST;
}

{CHARACTER_CONSTANT} {
	return CHAR_CNST;
}

{STRING_LITERAL} {
	return STR_LTRL;
}

{PUNCTUATOR}	{
	if(strcmp(yytext,"[") == 0) return SQUARE_BRACKET_OPEN;
	if(strcmp(yytext,"]") == 0) return SQUARE_BRACKET_CLOSE;
	if(strcmp(yytext,"(") == 0) return ROUND_BRACKET_OPEN;
	if(strcmp(yytext,")") == 0) return ROUND_BRACKET_CLOSE;
	if(strcmp(yytext,"{") == 0) return CURLY_BRACKET_OPEN;
	if(strcmp(yytext,"}") == 0) return CURLY_BRACKET_CLOSE;
	if(strcmp(yytext,".") == 0) return DOT;
	if(strcmp(yytext,"->") == 0) return IMPLIES;
	if(strcmp(yytext,"++") == 0) return INCREASE;
	if(strcmp(yytext,"--") == 0) return DECREASE;
	if(strcmp(yytext,"&") == 0) return BITWISE_AND;
	if(strcmp(yytext,"*") == 0) return MUL;
	if(strcmp(yytext,"+") == 0) return ADD;
	if(strcmp(yytext,"-") == 0) return SUB;
	if(strcmp(yytext,"~") == 0) return BITWISE_NOT;
	if(strcmp(yytext,"!") == 0) return EXCLAIM;
	if(strcmp(yytext,"/") == 0) return DIV;
	if(strcmp(yytext,"%") == 0) return MOD;
	if(strcmp(yytext,"<<") == 0) return SHIFT_LEFT;
	if(strcmp(yytext,">>") == 0) return SHIFT_RIGHT;
	if(strcmp(yytext,"<") == 0) return LT;
	if(strcmp(yytext,">") == 0) return GT;
	if(strcmp(yytext,"<=") == 0) return LTE;
	if(strcmp(yytext,">=") == 0) return GTE;
	if(strcmp(yytext,"==") == 0) return EQ;
	if(strcmp(yytext,"!=") == 0) return NEQ;
	if(strcmp(yytext,"^") == 0) return BITWISE_XOR;
	if(strcmp(yytext,"|") == 0) return BITOR;
	if(strcmp(yytext,"&&") == 0) return AND;
	if(strcmp(yytext,"||") == 0) return OR;
	if(strcmp(yytext,"?") == 0) return QUESTION;
	if(strcmp(yytext,":") == 0) return COLON;
	if(strcmp(yytext,";") == 0) return SEMICOLON;
	if(strcmp(yytext,"...") == 0) return DOTS;
	if(strcmp(yytext,"=") == 0) return ASSIGN;
	if(strcmp(yytext,"*=") == 0) return MUL_EQ;
	if(strcmp(yytext,"/=") == 0) return DIV_EQ;
	if(strcmp(yytext,"%=") == 0) return MOD_EQ;
	if(strcmp(yytext,"+=") == 0) return ADD_EQ;
	if(strcmp(yytext,"-=") == 0) return SUB_EQ;
	if(strcmp(yytext,"<<=") == 0) return LT_EQ;
	if(strcmp(yytext,">>=") == 0) return GT_EQ;
	if(strcmp(yytext,"&=") == 0) return BITWISE_AND_EQ;
	if(strcmp(yytext,"^=") == 0) return BITWISE_XOR_EQ;
	if(strcmp(yytext,"|=") == 0) return BITWISE_OR_EQ;
	if(strcmp(yytext,",") == 0) return COMMA;
	if(strcmp(yytext,"#") == 0) return HASH;
}

"\n"|" "|"\t"	{

}

{SINGLE_LINE_COMMENT}					{return SIN_LINE_CMNT;}
{MULTI_LINE_COMMENT} 					{return MUL_LINE_CMNT;}

%%
