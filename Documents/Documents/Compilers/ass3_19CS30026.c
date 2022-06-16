#include <stdio.h>
#include "lex.yy.c"
extern char* yytext;

int main(){
  int token;
  while(token=yylex()){

    switch(token) {
        case SLC:    
            printf("< SLC, %d, %s>\n",token,yytext); break;
        case MLC:     
            printf("< MLC, %d, %s>\n",token,yytext); break;

        //KeyWords
        case AUTO: 
            printf("< KEYWORD: AUTO, %d, %s >\n",token,yytext); break;
        case ENUM: 
            printf("< KEYWORD: ENUM, %d, %s >\n",token,yytext); break;
        case RESTRICT: 
            printf("< KEYWORD: RESTRICT, %d, %s >\n",token,yytext); break;
        case UNSIGNED: 
            printf("< KEYWORD: UNSIGNED, %d, %s >\n",token,yytext); break;
        case BREAK: 
            printf("< KEYWORD: BREAK, %d, %s >\n",token,yytext); break;
        case EXTERN: 
            printf("< KEYWORD: EXTERN, %d, %s >\n",token,yytext); break;
        case RETURN: 
            printf("< KEYWORD: RETURN, %d, %s >\n",token,yytext); break;
        case VOID: 
            printf("< KEYWORD: VOID, %d, %s >\n",token,yytext); break;
        case CASE: 
            printf("< KEYWORD: CASE, %d, %s >\n",token,yytext); break;
        case FLOAT: 
            printf("< KEYWORD: FLOAT, %d, %s >\n",token,yytext); break;
        case SHORT: 
            printf("< KEYWORD: SHORT, %d, %s >\n",token,yytext); break;
        case VOLATILE: 
            printf("< KEYWORD: VOLATILE, %d, %s >\n",token,yytext); break;
        case CHAR: 
            printf("< KEYWORD: CHAR, %d, %s >\n",token,yytext); break;
        case FOR: 
            printf("< KEYWORD: FOR, %d, %s >\n",token,yytext); break;
        case SIGNED: 
            printf("< KEYWORD: SIGNED, %d, %s >\n",token,yytext); break;
        case WHILE: 
            printf("< KEYWORD: WHILE, %d, %s >\n",token,yytext); break;
        case CONST: 
            printf("< KEYWORD: CONST, %d, %s >\n",token,yytext); break;
        case GOTO: 
            printf("< KEYWORD: GOTO, %d, %s >\n",token,yytext); break;
        case SIZEOF: 
            printf("< KEYWORD: SIZEOF, %d, %s >\n",token,yytext); break;
        case _BOOL: 
            printf("< KEYWORD: BOOL, %d, %s >\n",token,yytext); break;
        case CONTINUE: 
            printf("< KEYWORD: CONTINUE, %d, %s >\n",token,yytext); break;
        case IF: 
            printf("< KEYWORD: IF, %d, %s >\n",token,yytext); break;
        case STATIC: 
            printf("< KEYWORD: STATIC, %d, %s >\n",token,yytext); break;
        case _COMPLEX: 
            printf("< KEYWORD: COMPLEX, %d, %s >\n",token,yytext); break;
        case DEFAULT: 
            printf("< KEYWORD: DEFAULT, %d, %s >\n",token,yytext); break;
        case INLILE: 
            printf("< KEYWORD: INLINE, %d, %s >\n",token,yytext); break;
        case STRUCT: 
            printf("< KEYWORD: STRUCT, %d, %s >\n",token,yytext); break;
        case _IMAGINARY: 
            printf("< KEYWORD: IMAGINARY, %d, %s >\n",token,yytext); break;
        case DO: 
            printf("< KEYWORD: DO, %d, %s >\n",token,yytext); break;
        case INT: 
            printf("< KEYWORD: INT, %d, %s >\n",token,yytext); break;
        case SWITCH: 
            printf("< KEYWORD: SWITCH, %d, %s >\n",token,yytext); break;
        case DOUBLE: 
            printf("< KEYWORD: DOUBLE, %d, %s >\n",token,yytext); break;
        case LONG: 
            printf("< KEYWORD: LONG, %d, %s >\n",token,yytext); break;
        case TYPEDEF: 
            printf("< KEYWORD: TYPEDEF, %d, %s >\n",token,yytext); break;
        case ELSE: 
            printf("< KEYWORD: ELSE, %d, %s >\n",token,yytext); break;
        case REGISTER: 
            printf("< KEYWORD: REGISTER, %d, %s >\n",token,yytext); break;
        case UNION: 
            printf("< KEYWORD: UNION, %d, %s >\n",token,yytext); break;

        // ids
        case ID:     
            printf("< ID, %d, %s>\n",token,yytext); break;
        case INT_CONST:       
            printf("< INT_CONST, %d, %s>\n",token,yytext); break;
        case FLT_CONST:    
            printf("< FLT_CONST, %d, %s>\n",token,yytext); break;
        case CHAR_CONST:    
            printf("< CHAR_CONST, %d, %s>\n",token,yytext); break;
        case STR_LIT:    
            printf("< STR_LIT, %d, %s>\n",token,yytext); break;

        //punctuators
        case SBO:      
            printf("< SBO, %d, %s>\n",token,yytext); break;
        case SBC:     
            printf("< SBC, %d, %s>\n",token,yytext); break;
        case RBO:      
            printf("< RBO, %d, %s>\n",token,yytext); break;
        case RBC:     
            printf("< RBC, %d, %s>\n",token,yytext); break; 
        case CBO:     
            printf("< CBO, %d, %s>\n",token,yytext); break;
        case CBC:    
            printf("< CBC, %d, %s>\n",token,yytext); break;
        case DOT:    
            printf("< DOT, %d, %s>\n",token,yytext); break;
        case ARW:    
            printf("< ARW, %d, %s>\n",token,yytext); break;
        case INCRM:    
            printf("< INCRM, %d, %s>\n",token,yytext); break;
        case DECRM:    
            printf("< DECRM, %d, %s>\n",token,yytext); break;
        case AMPSND:    
            printf("< AMPSND, %d, %s>\n",token,yytext); break;
        case MUL:    
            printf("< MUL, %d, %s>\n",token,yytext); break;
        case ADD:    
            printf("< ADD, %d, %s>\n",token,yytext); break;
        case SUB:    
            printf("< SUB, %d, %s>\n",token,yytext); break;
        case NEG:    
            printf("< NEG, %d, %s>\n",token,yytext); break;
        case EXCLAIM:    
            printf("< EXCLAIM, %d, %s>\n",token,yytext); break;
        case DIV:    
            printf("< DIV, %d, %s>\n",token,yytext); break;
        case MODULO:     
            printf("< MODULO, %d, %s>\n",token,yytext); break;
        case SHL:    
            printf("< SHL, %d, %s>\n",token,yytext); break;
        case SHR:    
            printf("< SHR, %d, %s>\n",token,yytext); break;
        case LST:     
            printf("< LST, %d, %s>\n",token,yytext); break;
        case GRT:     
            printf("< GRT, %d, %s>\n",token,yytext); break;
        case LTE:    
            printf("< LTE, %d, %s>\n",token,yytext); break;
        case GTE:    
            printf("< GTE, %d, %s>\n",token,yytext); break;
        case EQL:     
            printf("< EQL, %d, %s>\n",token,yytext); break;
        case NEQ:    
            printf("< NEQ, %d, %s>\n",token,yytext); break;
        case AND:    
            printf("< AND, %d, %s>\n",token,yytext); break;
        case OR:     
            printf("< OR, %d, %s>\n",token,yytext); break;
        case QUESTION:       
            printf("< QUESTION, %d, %s>\n",token,yytext); break;
        case COLON:      
            printf("< COLON, %d, %s>\n",token,yytext); break;
        case SEMICOLON:      
            printf("< SEMICOLON, %d, %s>\n",token,yytext); break;
        case DOTS:       
            printf("< DOTS, %d, %s>\n",token,yytext); break;
        case ASSIGN:     
            printf("< ASSIGN, %d, %s>\n",token,yytext); break;
        case STAREQ:     
            printf("< STAREQ, %d, %s>\n",token,yytext); break;
        case DIVEQ:      
            printf("< DIVEQ, %d, %s>\n",token,yytext); break;
        case MODEQ:      
            printf("< MODEQ, %d, %s>\n",token,yytext); break;
        case PLUSEQ:     
            printf("< PLUSEQ, %d, %s>\n",token,yytext); break;
        case MINUSEQ:    
            printf("< MINUSEQ, %d, %s>\n",token,yytext); break;
        case SHLEQ:      
            printf("< SHLEQ, %d, %s>\n",token,yytext); break;
        case SHREQ:      
            printf("< SHREQ, %d, %s>\n",token,yytext); break;
        case BINANDEQ:       
            printf("< BINANDEQ, %d, %s>\n",token,yytext); break;
        case BINXOREQ:       
            printf("< BINXOREQ, %d, %s>\n",token,yytext); break;
        case BINOREQ:    
            printf("< BINOREQ, %d, %s>\n",token,yytext); break;
        case COMMA:      
            printf("< COMMA, %d, %s>\n",token,yytext); break;
        case HASH:       
            printf("< HASH, %d, %s>\n",token,yytext); break;
    }
  }
    return 0;
}