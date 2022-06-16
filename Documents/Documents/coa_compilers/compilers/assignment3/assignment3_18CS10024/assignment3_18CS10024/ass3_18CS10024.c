#include <stdio.h>
extern char* yytext;
int main() 
{ 
  int token;
  while (token = yylex()) 
  {
    switch (token) 
    {
        case ID: printf("< IDENTIFIER"); 
                               break;
        case INT_CNST: printf("< INTEGER_CONSTANT"); 
                                break;
        case FLT_CNST: printf("< FLOATING_CONSTANT"); 
                                break;
        case CHAR_CNST: printf("< CHARACTER_CONSTANT"); 
                                break;
        case STR_LTRL: printf("< STRING_LITERAL"); 
                                break;

        case SQUARE_BRACKET_OPEN : printf("< PUNCTUATOR"); 
                                break;
        case SQUARE_BRACKET_CLOSE: printf("< PUNCTUATOR"); 
                                break;
        case ROUND_BRACKET_OPEN : printf("< PUNCTUATOR"); 
                                break;
        case ROUND_BRACKET_CLOSE: printf("< PUNCTUATOR"); 
                                break;
        case CURLY_BRACKET_OPEN: printf("< PUNCTUATOR"); 
                                break;
        case CURLY_BRACKET_CLOSE: printf("< PUNCTUATOR"); 
                                break;

        case DOT: printf("< PUNCTUATOR"); 
                break;
        case IMPLIES: printf("< PUNCTUATOR"); 
                break;
        case INCREASE: printf("< PUNCTUATOR"); 
                break;
        case DECREASE: printf("< PUNCTUATOR"); 
                break;
        case BITWISE_AND: printf("< PUNCTUATOR"); 
                break;
        case MUL: printf("< PUNCTUATOR"); 
                break;
        case ADD: printf("< PUNCTUATOR"); 
                break;
        case SUB: printf("< PUNCTUATOR"); 
                break;
        case BITWISE_NOT: printf("< PUNCTUATOR"); 
                break;
        case EXCLAIM: printf("< PUNCTUATOR"); 
                break;
        case DIV: printf("< PUNCTUATOR"); 
                break;
        case MOD: printf("< PUNCTUATOR"); 
                break;
        case SHIFT_LEFT: printf("< PUNCTUATOR"); 
                break;
        case SHIFT_RIGHT: printf("< PUNCTUATOR"); 
                break;
        case LT: printf("< PUNCTUATOR"); 
                break;
        case GT: printf("< PUNCTUATOR"); 
                break;
        case LTE: printf("< PUNCTUATOR"); 
                break;
        case GTE: printf("< PUNCTUATOR"); 
                break;
        case EQ: printf("< PUNCTUATOR"); 
                break;
        case NEQ: printf("< PUNCTUATOR"); 
                break;
        case BITWISE_XOR: printf("< PUNCTUATOR"); 
                break;
        case BITOR: printf("< PUNCTUATOR"); 
                break;
        case AND: printf("< PUNCTUATOR"); 
                break;
        case OR: printf("< PUNCTUATOR"); 
                break;
        case QUESTION: printf("< PUNCTUATOR"); 
                break;
        case COLON: printf("< PUNCTUATOR"); 
                break;
        case SEMICOLON: printf("< PUNCTUATOR"); 
                break;
        case DOTS: printf("< PUNCTUATOR"); 
                break;
        case ASSIGN: printf("< PUNCTUATOR"); 
                break;
        case MUL_EQ: printf("< PUNCTUATOR"); 
                break;
        case DIV_EQ: printf("< PUNCTUATOR"); 
                break;
        case MOD_EQ: printf("< PUNCTUATOR"); 
                break;
        case ADD_EQ: printf("< PUNCTUATOR"); 
                break;
        case SUB_EQ: printf("< PUNCTUATOR"); 
                break;
        case LT_EQ: printf("< PUNCTUATOR"); 
                break;
        case GT_EQ: printf("< PUNCTUATOR"); 
                break;
        case BITWISE_AND_EQ: printf("< PUNCTUATOR"); 
                break;
        case BITWISE_XOR_EQ: printf("< PUNCTUATOR"); 
                break;
        case BITWISE_OR_EQ: printf("< PUNCTUATOR"); 
                break;
        case COMMA: printf("< PUNCTUATOR"); 
                break;
        case HASH: printf("< PUNCTUATOR"); 
                break;
      case SIN_LINE_CMNT: printf("< SINGLE_LINE_COMMENT"); 
                break;
      case MUL_LINE_CMNT: printf("< MULTI_LINE_COMMENT"); 
                break;
      default: printf("< KEYWORD"); 
    }

        printf(", %d, %s>\n",token,yytext);
  }
}
