%{
#include <stdio.h>
extern int yylex();
extern int yylineno;
void yyerror(char *s);
%}
%union{
  int intval;
  float floatval;
  char *charval;   
}
%token BREAK
%token CASE
%token CHAR
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE 
%token ELSE
%token EXTERN
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INT
%token LONG
%token RETURN
%token SHORT
%token SIZEOF
%token STATIC
%token SWITCH
%token VOID
%token WHILE
%token CONST
%token RESTRICT
%token VOLATILE
%token INLINE

//constant tokens
%token<intval> INT_CONST
%token<floatval> FLOAT_CONST
%token<charval> CHAR_CONST

//String Literal token
%token<charval> STR_LITERAL

//Identifier token
%token ID

//Punctuators tokens
%token SQ_LBRACE
%token SQ_RBRACE
%token RO_LBRACE
%token RO_RBRACE
%token FL_LBRACE
%token FL_RBRACE
%token DOT
%token MEM_OP
%token INCREMENT_OP
%token DECREMENT_OP
%token BIT_AND
%token MULT_OP
%token ADD_OP
%token MINUS_OP
%token BIT_COMPL
%token NOT_OP
%token DIV_OP
%token REM
%token L_SHIFT
%token R_SHIFT
%token LT
%token GT
%token LT_EQ
%token GT_EQ
%token EQ
%token NEQ
%token BIT_XOR
%token BIT_OR
%token LOGIC_AND
%token LOGIC_OR
%token QUERY
%token COLON
%token SEMI_COLON
%token VAR_ARG_LIST
%token ASSIGN
%token MULT_ASGN
%token DIV_ASGN
%token REM_ASGN
%token ADD_ASGN
%token MINUS_ASGN
%token LS_ASGN
%token RS_ASGN
%token BIT_AND_ASGN
%token BIT_XOR_ASGN
%token BIT_OR_ASGN
%token COMMA
%token HASH

%start translation_unit

%right THEN ELSE
%%

primary_expression : ID
		      {printf("LINE NO = %d ; RULE : primary_expression -> identifier\n", yylineno);}
		    | constant
		      {printf("LINE NO = %d ; RULE : primary_expression -> constant\n", yylineno);}
		    | STR_LITERAL
		      {printf("LINE NO = %d ; RULE : primary_expression -> string_literal\n", yylineno);}
		    | RO_LBRACE expression RO_RBRACE
		      {printf("LINE NO = %d ; RULE : primary_expression -> ( expression )\n", yylineno);}
		    ;	 

constant
	: INT_CONST
	| FLOAT_CONST
	| CHAR_CONST
	;

argument_expression_list_opt
			       : argument_expression_list
			       |
			       ;

postfix_expression
		   : primary_expression
		   	{printf("LINE NO = %d ; RULE : postfix_expression -> primary_expression\n",yylineno);}
		   | postfix_expression SQ_LBRACE expression SQ_RBRACE
		   	{printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression [expression]\n",yylineno);}
		   | postfix_expression RO_LBRACE argument_expression_list_opt RO_RBRACE
		        {printf("LINE NO = %d ; RULE : postfix_expression > postfix_expression (expression)\n",yylineno);}
		   | postfix_expression DOT ID
		         {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression.identifier\n",yylineno);}
		   | postfix_expression MEM_OP ID
		   	  {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression->identifier\n",yylineno);}
		   | postfix_expression INCREMENT_OP
		   	 {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression++\n",yylineno);}
		   | postfix_expression DECREMENT_OP
		        {printf("LINE NO = %d ; RULE : postfix_expression -> postfix_expression--\n",yylineno);}
		   | RO_LBRACE type_name RO_RBRACE FL_LBRACE initializer_list FL_RBRACE
		   	 {printf("LINE NO = %d ; RULE : postfix_expression -> (type-name){initializer-list}\n",yylineno);}
		   | RO_LBRACE type_name RO_RBRACE FL_LBRACE initializer_list COMMA FL_RBRACE
		    {printf("LINE NO = %d ; RULE : postfix_expression -> (type-name){ initializer-list , }\n",yylineno);}
		   ;
			       
argument_expression_list 
	                 : assignment_expression
	                      {printf("LINE NO = %d ; RULE : argument_expression_list -> assignment_expression\n",yylineno);}
	                 | argument_expression_list COMMA assignment_expression
	                 {printf("LINE NO = %d ; RULE : argument_expression_list -> argument-expression-list , assignment expression\n",yylineno);}
	                 ;
	
		                
unary_expression 
		 : postfix_expression
		  	{printf("LINE NO = %d ; RULE : unary_expression -> postfix_expression\n",yylineno);}
		 | INCREMENT_OP unary_expression
		 	{printf("LINE NO = %d ; RULE : unary_expression -> ++unaryexpression\n",yylineno);}
		 | DECREMENT_OP unary_expression
		  	{printf("LINE NO = %d ; RULE : unary_expression -> --unary_expression\n",yylineno);}
		 | unary_operator cast_expression
		 	{printf("LINE NO = %d ; RULE : unary_expression -> unary_operator cast_expression\n",yylineno);}
		 | SIZEOF unary_expression
		 	{printf("LINE NO = %d ; RULE : unary_expression -> sizeof unary_expression\n",yylineno);}
		 | SIZEOF RO_LBRACE type_name RO_RBRACE
		  {printf("LINE NO = %d ; RULE : unary_expression -> sizeof(type_name)\n",yylineno);}
		 ;
		 
unary_operator
		: BIT_AND
		  {printf("LINE NO = %d ; RULE : unary_operator -> & \n",yylineno);}
		| MULT_OP
		  {printf("LINE NO = %d ; RULE : unary_operator -> * \n",yylineno);}
		| ADD_OP
		  {printf("LINE NO = %d ; RULE : unary_operator -> + \n",yylineno);}
		| MINUS_OP
		  {printf("LINE NO = %d ; RULE : unary_operator -> - \n",yylineno);}
		| BIT_COMPL
		  {printf("LINE NO = %d ; RULE : unary_operator -> ~ \n",yylineno);}
		| NOT_OP
		  {printf("LINE NO = %d ; RULE : unary_operator -> ! \n",yylineno);}
		;
		
cast_expression
		: unary_expression
			{printf("LINE NO = %d ; RULE : cast_expression -> unary_expression\n",yylineno);}
		| RO_LBRACE type_name RO_RBRACE cast_expression
		      {printf("LINE NO = %d ; RULE : cast_expression -> (type_name) cast_expression\n",yylineno);}
		;
	
multiplicative_expression
      : cast_expression
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> cast_expression\n",yylineno);}
      | multiplicative_expression MULT_OP cast_expression
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> multiplicative_expression * cast_expression\n",yylineno);}
      | multiplicative_expression DIV_OP cast_expression
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> multiplicative_expression / cast_expression\n",yylineno);}
      | multiplicative_expression REM cast_expression
      {printf("LINE NO = %d ; RULE : multiplicative_expression -> multiplicative_expression REM  cast_expression\n",yylineno);}
      ;
			  
additive_expression 
	: multiplicative_expression
	{printf("LINE NO = %d ; RULE : additive_expression -> additive_expression\n",yylineno);}
	| additive_expression ADD_OP multiplicative_expression
	{printf("LINE NO = %d ; RULE : additive_expression -> additive_expression + multiplicative_expression\n",yylineno);}
	| additive_expression MINUS_OP multiplicative_expression
	{printf("LINE NO = %d ; RULE : additive_expression -> additive_expression - mutliplicative_expression\n",yylineno);}
	;
		     
shift_expression 
		  : additive_expression
		  {printf("LINE NO = %d ; RULE : shift_expression -> additive_expression\n",yylineno);}
		  | shift_expression L_SHIFT additive_expression
		  {printf("LINE NO = %d ; RULE : shift_expression -> shift_expression << additive_expression\n",yylineno);}
		  | shift_expression R_SHIFT additive_expression
		  {printf("LINE NO = %d ; RULE : shift_expression -> shift_expression >> additive_expression\n",yylineno);}
		  ;
		  
relational_expression
		 : shift_expression
		 {printf("LINE NO = %d ; RULE : relational_expression -> shift_expression\n",yylineno);}
		 | relational_expression LT shift_expression
		 {printf("LINE NO = %d ; RULE : relational_expression -> relational_expression < shift_expression\n",yylineno);}
		 | relational_expression GT shift_expression
		 {printf("LINE NO = %d ; RULE : relational_expression -> relational_Expresssion > shift_expression\n",yylineno);}
		 | relational_expression LT_EQ shift_expression
		 {printf("LINE NO = %d ; RULE : relational_expression -> relational_expression <= shift_expression\n",yylineno);}
		 | relational_expression GT_EQ shift_expression
		 {printf("LINE NO = %d ; RULE : relational_expression -> relational_expression >= shift-expression\n",yylineno);}
		 ;
		     
equality_expression
		: relational_expression
		{printf("LINE NO = %d ; RULE : equality_expression -> relational_expression\n",yylineno);}
		| equality_expression EQ relational_expression
		{printf("LINE NO = %d ; RULE : equality_expression -> equality_expression == relational_expression\n",yylineno);}
		| equality_expression NEQ relational_expression
		{printf("LINE NO = %d ; RULE : equality_expression -> equality_expression != relational_expression\n",yylineno);}
		;
		    
AND_expression
		: equality_expression
		{printf("LINE NO = %d ; RULE : AND_expression -> equality_expression\n",yylineno);}
		| AND_expression BIT_AND equality_expression
		 {printf("LINE NO = %d ; RULE : AND_expression -> AND_expression & equality_expression\n",yylineno);}
		;
		
exclusive_OR_expression
	   : AND_expression
	   {printf("LINE NO = %d ; RULE : exclusive_OR_expression -> AND_expression\n",yylineno);}
	   | exclusive_OR_expression BIT_XOR AND_expression
	   {printf("LINE NO = %d ; RULE : exclusive_OR_expression -> exclusive_OR_expression ^ AND_expression\n",yylineno);}
	   ;
			 		     
inclusive_OR_expression
      : exclusive_OR_expression
      {printf("LINE NO = %d ; RULE : inclusive_OR_expression -> exclusive_OR_expression\n",yylineno);}
      | inclusive_OR_expression BIT_OR exclusive_OR_expression
      {printf("LINE NO = %d ; RULE : inclusive_OR_expression -> inclusive_OR_expression | exclusive_OR_expression\n",yylineno);}
      ;
			
logical_AND_expression
      : inclusive_OR_expression
      {printf("LINE NO = %d ; RULE : logical_AND_expression -> inclusive_OR_expression\n",yylineno);}
      | logical_AND_expression LOGIC_AND inclusive_OR_expression
      {printf("LINE NO = %d ; RULE : logical_AND_expression -> logical_AND_expression && inclusive_OR_expression\n",yylineno);}
      ;
			
logical_OR_expression
	: logical_AND_expression
	{printf("LINE NO = %d ; RULE : logical_OR_expression -> logical_AND_expression\n",yylineno);}
	| logical_OR_expression LOGIC_OR logical_AND_expression
	 {printf("LINE NO = %d ; RULE : logical_OR_expression -> logical_OR_expression || logical_AND_expression\n",yylineno);}
	;
			
conditional_expression
	: logical_OR_expression
	{printf("LINE NO = %d ; RULE : conditional_expression -> logical_OR_expression\n",yylineno);}
	| logical_OR_expression QUERY expression COLON conditional_expression
  {printf("LINE NO = %d ; RULE: conditional_expression -> logical_OR_expression?expression:conditional_expression\n",yylineno);}
	;
		
assignment_expression
	: conditional_expression
	{printf("LINE NO = %d ; RULE : assignment_expression -> conditional_expression\n",yylineno);}
	| unary_expression assignment_operator assignment_expression
        {printf("LINE NO = %d ; RULE : assignment_expression -> unary_expression assignment_operator assignment_expression\n",yylineno);}
	;
			
assignment_operator
		  	: ASSIGN
		  	  {printf("LINE NO = %d ; RULE : assignment_operator -> = \n",yylineno);}
		  	| MULT_ASGN
		  	  {printf("LINE NO = %d ; RULE : assignment_operator -> *= \n",yylineno);}
		  	| DIV_ASGN
		  	  {printf("LINE NO = %d ; RULE : assignment_operator -> /= \n",yylineno);}
		  	| REM_ASGN
		  	  {printf("LINE NO = %d ; RULE : assignment_operator -> MODULO \n",yylineno);}
			| ADD_ASGN
			  {printf("LINE NO = %d ; RULE : assignment_operator -> += \n",yylineno);}
			| MINUS_ASGN
			  {printf("LINE NO = %d ; RULE : assignment_operator -> -= \n",yylineno);}
			| LS_ASGN
			  {printf("LINE NO = %d ; RULE : assignment_operator -> <<= \n",yylineno);}
			| RS_ASGN
			  {printf("LINE NO = %d ; RULE : assignment_operator -> >>= \n",yylineno);}
			| BIT_AND_ASGN
			  {printf("LINE NO = %d ; RULE : assignment_operator -> &= \n",yylineno);}
			| BIT_XOR_ASGN
			   {printf("LINE NO = %d ; RULE : assignment_operator -> ^= \n",yylineno);}
			| BIT_OR_ASGN
			   {printf("LINE NO = %d ; RULE : assignment_operator -> |= \n",yylineno);}
			;
			
expression
	     : assignment_expression 
	      {printf("LINE NO = %d ; RULE : expression -> assignment_expression\n",yylineno);}
	     | expression COMMA assignment_expression
	     {printf("LINE NO = %d ; RULE : expression -> expression,assignment_expression\n",yylineno);}
	     ;
	     
constant_expression
		    : conditional_expression
		    {printf("LINE NO = %d ; RULE : constant_expression -> conditional_expression\n",yylineno);}
		    ; 


declaration
	      : declaration_specifiers init_declarator_list_opt SEMI_COLON
	      {printf("LINE NO = %d ; RULE : declaration -> declaration_specifiers init_declarator_list_opt ;\n",yylineno);}
	      ;

init_declarator_list_opt
			: 
			| init_declarator_list
			;

declaration_specifiers_opt
	: 
	| declaration_specifiers
	;

declaration_specifiers
   :storage_class_specifier declaration_specifiers_opt
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> storage_class_specifier declaration_specifiers_opt\n",yylineno);}
   |type_specifier declaration_specifiers_opt
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> type_specifier declaration_specifiers_opt\n",yylineno);}
   |type_qualifier declaration_specifiers_opt
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> type_qualifier declaration_specifiers_opt\n",yylineno);}
   |function_specifier declaration_specifiers_opt
   {printf("LINE NO = %d ; RULE : declaration_specifiers -> function_specifier declaration_specifiers_opt\n",yylineno);}
   ;	
		   
init_declarator_list
		: init_declarator
		{printf("LINE NO = %d ; RULE : init_declarator_list -> init_declarator\n",yylineno);}
		| init_declarator_list COMMA init_declarator
		{printf("LINE NO = %d ; RULE : init_declarator_list -> init_declarator_list , init_declarator\n",yylineno);}
		;
			
init_declarator 
		: declarator
		 {printf("LINE NO = %d ; RULE : init_declarator -> declarator\n",yylineno);}
		| declarator ASSIGN initializer
		 {printf("LINE NO = %d ; RULE : init_declarator -> declarator = initializer\n",yylineno);}
		;
		
storage_class_specifier
			: EXTERN
			 {printf("LINE NO = %d ; RULE : storage_class_specifier -> extern\n",yylineno);}
			| STATIC
			 {printf("LINE NO = %d ; RULE : storage_class_specifier -> static\n",yylineno);}
			;
			
type_specifier
		: VOID
		{printf("LINE NO = %d ; RULE : type_specifier -> void\n",yylineno);}
		| CHAR
		{printf("LINE NO = %d ; RULE : type_specifier -> char\n",yylineno);}
		| SHORT
		{printf("LINE NO = %d ; RULE : type_specifier -> short\n",yylineno);}
		| INT
		{printf("LINE NO = %d ; RULE : type_specifier -> int\n",yylineno);}
		| LONG
		{printf("LINE NO = %d ; RULE : type_specifier -> long\n",yylineno);}
		| FLOAT
		{printf("LINE NO = %d ; RULE : type_specifier -> float\n",yylineno);}
		| DOUBLE
		{printf("LINE NO = %d ; RULE : type_specifier -> double\n",yylineno);}
		;

specifier_qualifier_list_opt
				: specifier_qualifier_list
				|
				;
		
specifier_qualifier_list
	: type_specifier specifier_qualifier_list_opt
	{printf("LINE NO = %d ; RULE : specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n",yylineno);}
	| type_qualifier specifier_qualifier_list_opt
	{printf("LINE NO = %d ; RULE : specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n",yylineno);}
	;
			
				
type_qualifier
		: CONST
		{printf("LINE NO = %d ; RULE : type_qualifier -> const\n",yylineno);}
		| RESTRICT
		{printf("LINE NO = %d ; RULE : type_specifier -> restrict\n",yylineno);}
		| VOLATILE
		{printf("LINE NO = %d ; RULE : type_specifier -> volatile\n",yylineno);}
		;
		
function_specifier
		    : INLINE
		     {printf("LINE NO = %d ; RULE : function_specifier -> inline\n",yylineno);}
		    ;

pointer_opt
	    : pointer
	    |
	    ;
	    		    
declarator
	  : pointer_opt direct_declarator
	     {printf("LINE NO = %d ; RULE : declarator -> pointer_opt direct_declarator\n",yylineno);}
	  ;
	  
assignment_expression_opt
			   : assignment_expression
			   |
			   ;
			   		  
	    
type_qualifier_list_opt 
			   : type_qualifier_list
			   |
			   ;
		   
identifier_list_opt
		     : identifier_list
		     | 
		     ;
	    
direct_declarator
		  : ID
		  {printf("LINE NO = %d ; RULE : direct_declarator -> identifier\n",yylineno);}
		  | RO_LBRACE declarator RO_RBRACE
		  {printf("LINE NO = %d ; RULE : direct_declarator -> (declarator)\n",yylineno);}
		  | direct_declarator SQ_LBRACE type_qualifier_list_opt assignment_expression_opt SQ_RBRACE
		  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [type_qualifier_list_opt assignment_expression_opt]\n",yylineno);}
		  | direct_declarator SQ_LBRACE STATIC type_qualifier_list_opt assignment_expression SQ_RBRACE
		  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [static type_qualifier_list_opt assignment_expression_opt]\n",yylineno);}
		  | direct_declarator SQ_LBRACE type_qualifier_list STATIC assignment_expression SQ_RBRACE 
		  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [type_qualifier_list static assignment_expression_opt]\n",yylineno);}
		  | direct_declarator SQ_LBRACE type_qualifier_list_opt MULT_OP SQ_RBRACE
		 {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator [type_qualifier_list_opt *]\n",yylineno);}
		  | direct_declarator RO_LBRACE parameter_type_list RO_RBRACE
		  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator (parameter_type_list)\n",yylineno);}
		  | direct_declarator RO_LBRACE identifier_list_opt RO_RBRACE
		  {printf("LINE NO = %d ; RULE : direct_declarator -> direct_declarator (identifier_list_opt)\n",yylineno);}
		  ;
		  
pointer
	 : MULT_OP type_qualifier_list_opt
	 {printf("LINE NO = %d ; RULE : pointer -> *type_qualifier_list_opt\n",yylineno);}
	 | MULT_OP type_qualifier_list_opt pointer
	  {printf("LINE NO = %d ; RULE : pointer -> *type_qualifier_list_opt pointer\n",yylineno);}
	 ;
	 
type_qualifier_list
		    : type_qualifier
		    {printf("LINE NO = %d ; RULE : type_qualifier_list -> type_qualifier\n",yylineno);}
		    | type_qualifier_list type_qualifier
		     {printf("LINE NO = %d ; RULE : type_qualifier_list -> type_qualifier_list type_qualifier\n",yylineno);}
		    ;
		    
parameter_type_list
		    : parameter_list
		    {printf("LINE NO = %d ; RULE : parameter_type_list -> parameter_list\n",yylineno);}
		    | parameter_list COMMA VAR_ARG_LIST
		     {printf("LINE NO = %d ; RULE : parameter_type_list -> parameter_list , ...\n",yylineno);}
		    ;
		 
parameter_list
		: parameter_declaration
		 {printf("LINE NO = %d ; RULE : parameter_list -> parameter_declarator\n",yylineno);}
		| parameter_list COMMA parameter_declaration
		 {printf("LINE NO = %d ; RULE : parameter_list -> parameter_list , parameter_declaration\n",yylineno);}
		;
		
parameter_declaration
			: declaration_specifiers declarator
			{printf("LINE NO = %d ; RULE : parameter_declaration -> declaration_specifiers declarator\n",yylineno);}
			| declaration_specifiers
			 {printf("LINE NO = %d ; RULE : parameter_declaration -> declaration_specifiers\n",yylineno);}
			;
			
identifier_list
		: ID
		{printf("LINE NO = %d ; RULE : identifier_list -> identifier\n",yylineno);}
		| identifier_list COMMA ID
		   {printf("LINE NO = %d ; RULE : identifier_list -> identifier_list , identifier\n",yylineno);}
		;
		
type_name
	   : specifier_qualifier_list 
	      {printf("LINE NO = %d ; RULE : type_name -> specifier_qualifier_list\n",yylineno);}
	   ;
	   
initializer
	   : assignment_expression
	    {printf("LINE NO = %d ; RULE : initializer -> assignment_expression\n",yylineno);}
	   | FL_LBRACE initializer_list FL_RBRACE
	    {printf("LINE NO = %d ; RULE : initializer -> {initializer_list}\n",yylineno);}
	   | FL_LBRACE initializer_list COMMA FL_RBRACE
	     {printf("LINE NO = %d ; RULE : initializer -> {initializer_list,}\n",yylineno);}
	   ;

designation_opt
		: designation
		|
		;
	    		  
initializer_list
		 : designation_opt  initializer
		 {printf("LINE NO = %d ; RULE : initializer_list -> designation_opt initializer\n",yylineno);}
		 | initializer_list COMMA designation_opt initializer
		 {printf("LINE NO = %d ; RULE : initializer_list -> initializer_list , designation_opt initializer\n",yylineno);}
		 ;
		
designation
		: designator_list ASSIGN
		 {printf("LINE NO = %d ; RULE : designation -> designator_list == \n",yylineno);}
		;
		
designator_list
		: designator
		  {printf("LINE NO = %d ; RULE : designator_list -> designator\n",yylineno);}
		| designator_list designator
		  {printf("LINE NO = %d ; RULE : designator_list -> designator_list designator\n",yylineno);}
		;
		
designator
	    : SQ_LBRACE constant_expression SQ_RBRACE
	     {printf("LINE NO = %d ; RULE : designator -> [constant_expression]\n",yylineno);}
	    | DOT ID
	     {printf("LINE NO = %d ; RULE : designator -> .identifier\n",yylineno);}
	    ;
	     
			   
statement
	   : labeled_statement
	     {printf("LINE NO = %d ; RULE : statement -> labeled_statement\n",yylineno);}
	   | compound_statement
	      {printf("LINE NO = %d ; RULE : statement -> compound_statement\n",yylineno);}
	   | expression_statement
	      {printf("LINE NO = %d ; RULE : statement -> expression_statement\n",yylineno);}
	   | selection_statement
	       {printf("LINE NO = %d ; RULE : statement -> selection_statement\n",yylineno);}
	   | iteration_statement
	       {printf("LINE NO = %d ; RULE : statement -> iteration_statement\n",yylineno);}
	   | jump_statement
	     {printf("LINE NO = %d ; RULE : statement -> jump_statement\n",yylineno);}
	   ;
	   
labeled_statement
		   : ID COLON statement
		   {printf("LINE NO = %d ; RULE : labeled_statement -> identifier : statement\n",yylineno);}
		   | CASE constant_expression COLON statement
		    {printf("LINE NO = %d ; RULE : labeled_statement -> case constant_expression : statement\n",yylineno);}
		   | DEFAULT COLON statement
		    {printf("LINE NO = %d ; RULE : labeled_statement -> default : statement\n",yylineno);}
		   ;
		   
block_item_list_opt
		    : block_item_list
		    |
		    ; 
		   
compound_statement
		    : FL_LBRACE block_item_list_opt FL_RBRACE
		     {printf("LINE NO = %d ; RULE : compound_statement -> {block_item_list_opt}\n",yylineno);}
		    ;
		    
block_item_list
		: block_item
		 {printf("LINE NO = %d ; RULE : block_item_list -> block_item\n",yylineno);}
		| block_item_list block_item
		 {printf("LINE NO = %d ; RULE : block_item_list -> block_item_list block_item\n",yylineno);}
		;
		
block_item
	    : declaration
	     {printf("LINE NO = %d ; RULE : block_item -> declarator\n",yylineno);}
	    | statement 
	     {printf("LINE NO = %d ; RULE : block_item -> statement\n",yylineno);}
	    ;

expression_opt
		  : expression
		  |
		  ;
		   
expression_statement
		     : expression_opt SEMI_COLON
		      {printf("LINE NO = %d ; RULE : expression_statement -> expression_opt ;\n",yylineno);}
		     ;
		     
selection_statement
		     : IF RO_LBRACE expression RO_RBRACE statement %prec THEN
		     {printf("LINE NO = %d ; RULE : selection_statement -> if (expresion) statement\n",yylineno);}
		     | IF RO_LBRACE expression RO_RBRACE statement ELSE statement
		     {printf("LINE NO = %d ; RULE : selection_statement -> if (expresion) statement else statement\n",yylineno);}
		     | SWITCH RO_LBRACE expression RO_RBRACE statement
		      {printf("LINE NO = %d ; RULE : selection_statement -> switch (expresion) statement\n",yylineno);}
		     ;
		     
iteration_statement 
      : WHILE RO_LBRACE expression RO_RBRACE statement
      {printf("LINE NO = %d ; RULE : iteration_statement -> while (expression) statement\n",yylineno);}
      | DO statement WHILE RO_LBRACE expression RO_RBRACE SEMI_COLON
      {printf("LINE NO = %d ; RULE : iteration_statement -> do statement while (expression);\n",yylineno);}
      | FOR RO_LBRACE expression_opt SEMI_COLON expression_opt SEMI_COLON expression_opt RO_RBRACE statement
      {printf("LINE NO = %d ; RULE : iteration_statement -> for (expression_opt;expression_opt;expression_opt) statement\n",yylineno);}
      | FOR RO_LBRACE declaration expression_opt SEMI_COLON expression_opt RO_RBRACE statement
      {printf("LINE NO = %d ; RULE : iteration_statement ->for (declaration expression_opt;expression_opt) statement\n",yylineno);}
      ;
		      
jump_statement
		: GOTO ID SEMI_COLON
		 {printf("LINE NO = %d ; RULE : jump_statement -> goto identifier;\n",yylineno);}
		| CONTINUE SEMI_COLON
		 {printf("LINE NO = %d ; RULE : jump_statement -> continue;\n",yylineno);}
		| BREAK SEMI_COLON
		 {printf("LINE NO = %d ; RULE : jump_statement -> break;\n",yylineno);}
		| RETURN expression_opt SEMI_COLON
		 {printf("LINE NO = %d ; RULE : jump_statement -> return expression_opt;\n",yylineno);}
		;
		
		

translation_unit
		 : external_declaration
		  {printf("LINE NO = %d ; RULE : translation_list -> external_declaration\n",yylineno);}
		 | translation_unit external_declaration
		  {printf("LINE NO = %d ; RULE : translation_list -> translation_unit external_declaration\n",yylineno);}
		 ;
		 
external_declaration
		     : function_definition
		       {printf("LINE NO = %d ; RULE : external_declaration -> function_definition\n",yylineno);}
		     | declaration
		       {printf("LINE NO = %d ; RULE : external_declaration -> declaration\n",yylineno);}
		     ;
		     
declaration_list_opt
			: declaration_list
			| 
			;		     
		     
function_definition
       : declaration_specifiers declarator declaration_list_opt compound_statement	
       {printf("LINE NO = %d ; RULE : function_definition -> declaration_specifiers declarator declaration_list_opt compound_statement\n",yylineno);}
	;
			
declaration_list
		: declaration
		 {printf("LINE NO = %d ; RULE : declaration_list -> declaration\n",yylineno);}
		| declaration_list declaration
		 {printf("LINE NO = %d ; RULE : declaration_list -> declaration_list declaration\n",yylineno);}
		;
						
%%     
		     		     
void yyerror(char *s) {
    printf("%s\n",s);
}
