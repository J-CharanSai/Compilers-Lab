#include <stdio.h>
#include "y.tab.h"
extern int yylineno;
extern char* yytext;
extern int yydebug;
extern int yyparse();

int main() 
{
  /*yydebug is used to display the corresponding shift and reduce operations and stack of states at each step*/
  //yydebug = 1;
  int i = yyparse();
  printf("\n**************Parser results****************\n\n");
  if(i) printf("ERROR in Line no : %d while parsing at \"%s\"\n\n",yylineno,yytext);
  else printf("******NO ERRORS!Successfully Parsed!********\n");
 return 0;
}
