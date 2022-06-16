%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
%}


/* Regex Definition */

/*Keywords*/

KEYWORD     "break"|"inline"|"const"|"volatile"|"restrict"|"case"|"char"|"continue"|"default"|"do"|"double"|"else"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"return"|"short"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"void"|"while"	


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
	if(strcmp(yytext,"volatile")==0)			{ return VOLATILE; }
	if(strcmp(yytext,"const")==0)			{ return CONST; }
	if(strcmp(yytext,"inline")==0)			{ return INLINE; }
	if(strcmp(yytext,"restrict")==0)			{ return RESTRICT; }
	
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
	if(strcmp(yytext,"|") == 0) return BITWISE_OR;
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

{SINGLE_LINE_COMMENT}					{}
{MULTI_LINE_COMMENT} 					{}

%%