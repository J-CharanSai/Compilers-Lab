%{
#include <stdio.h>
extern int yylex();
void yyerror(const char*);
%}


%union {
  int intval;
  float floatval;
  char *charval;
}

%token ARW
%token INCREM
%token DECREM
%token SHL
%token SHR
%token LTE
%token GTE
%token EQL
%token NEQ
%token AND
%token OR
%token DOTS
%token STAREQ
%token DIVEQ
%token MODEQ
%token PLUSEQ
%token MINUSEQ
%token SHLEQ
%token SHREQ
%token BINANDEQ
%token BINXOREQ
%token BINOREQ
%token AUTO
%token ENUM
%token RESTRICT
%token UNSIGNED
%token BREAK
%token EXTERN
%token RETURN
%token VOID 
%token CASE
%token FLOAT
%token SHORT
%token VOLATILE
%token CHAR
%token FOR
%token SIGNED
%token WHILE
%token CONST
%token GOTO
%token SIZEOF
%token _BOOL
%token CONTINUE
%token IF
%token STATIC
%token _COMPLEX
%token DEFAULT
%token INLINE
%token STRUCT
%token _IMAGINARY
%token DO
%token INT
%token SWITCH
%token DOUBLE
%token LONG 
%token TYPEDEF
%token ELSE
%token REGISTER
%token UNION
%token SLC
%token MLC
%token ID
%token <intval> INT_CONST
%token <intval> FLT_CONST
%token <intval> CHAR_CONST
%token <intval> STR_LIT
%token <intval> ENUMERATION_CONSTANT
%token PUNCTUATOR
%token WS

%start translation_unit

%%

primary_expression:
										ID
										|INT_CONST
										|FLT_CONST
										|CHAR_CONST
										|STR_LIT
										|'(' expression ')'
										;

postfix_expression:
										primary_expression
										|postfix_expression '[' expression ']'
										|postfix_expression '(' argument_expression_list_optional ')'
								  	|postfix_expression '.' ID
								  	|postfix_expression ARW ID
								  	|postfix_expression INCREM 
								  	|postfix_expression DECREM
								  	|'(' type_name ')' '{' initializer_list '}'
								  	|'(' type_name ')' '{' initializer_list ',' '}'
								  	;

argument_expression_list_optional:
						  argument_expression_list
						  |
						  ;

argument_expression_list:
					  assignment_expression
					  |argument_expression_list ',' assignment_expression
					  ;

unary_expression:
				postfix_expression
				|INCREM unary_expression
				|DECREM unary_expression
				|unary_operator cast_expression
				|SIZEOF unary_expression
				|SIZEOF '(' type_name ')' 
				;					 

unary_operator:
			  '&'
			  |'*'
			  |'+'
			  |'-'
			  |'~'
			  |'!'
			  ;

cast_expression:
			   unary_expression
			   |'(' type_name ')' cast_expression
			   ;

multplicative_expression:
						cast_expression
						|multplicative_expression '*' cast_expression
						|multplicative_expression '/' cast_expression
						|multplicative_expression '%' cast_expression
						;

additive_expression:
				   multplicative_expression
				   |additive_expression '+' multplicative_expression
				   |additive_expression '-' multplicative_expression
				   ;

shift_expression:
				additive_expression
				|shift_expression SHL additive_expression
				|shift_expression SHR additive_expression
				;

relational_expression:
					 shift_expression
					 |relational_expression '<' shift_expression
					 |relational_expression '>' shift_expression
					 |relational_expression LTE shift_expression
					 |relational_expression GTE shift_expression
					 ;

equality_expression:
				   relational_expression
				   |equality_expression EQL relational_expression
				   |relational_expression NEQ relational_expression
				   ;

AND_expression:
			  equality_expression
			  |AND_expression '&' equality_expression
			  ;

exclusive_OR_expression:
					   AND_expression
					   |exclusive_OR_expression '^' AND_expression
					   ;

inclusive_OR_expression:
					   exclusive_OR_expression
					   |inclusive_OR_expression '|' exclusive_OR_expression
					   ;

logical_AND_expression:
					  inclusive_OR_expression
					  |logical_AND_expression AND inclusive_OR_expression
					  ;

logical_OR_expression:
					 logical_AND_expression
					 |logical_OR_expression OR logical_AND_expression
					 ;

conditional_expression:
					  logical_OR_expression
					  |logical_OR_expression '?' expression ':' conditional_expression
					  ;

assignment_expression:
					 conditional_expression
					 |unary_expression assignment_operator assignment_expression
					 ;

assignment_expression_optional:
						 assignment_expression
						 |
						 ;

assignment_operator:
				   '='
				   |STAREQ
				   |DIVEQ
				   |MODEQ
				   |PLUSEQ
				   |MINUSEQ
				   |SHLEQ
				   |SHREQ
				   |BINANDEQ
				   |BINXOREQ
				   |BINOREQ
				   ;						 

expression:
		  assignment_expression
		  |expression ',' assignment_expression
		  ;
		   
constant_expression:
				   conditional_expression
				   ;

expression_optional:
			  expression
			  |
			  ;

declaration:
		   declaration_specifiers init_declarator_list_optional ';'
		   ;

declaration_specifiers:
					  storage_class_specifier declaration_specifiers_optional
					  |type_specifier declaration_specifiers_optional
					  |type_qualifier declaration_specifiers_optional
					  |function_specifier declaration_specifiers_optional
					  ;

declaration_specifiers_optional:
						  declaration_specifiers
						  |
						  ;

init_declarator_list_optional:
						init_declarator_list
						|
						;

init_declarator_list:
				init_declarator 
				|init_declarator_list ',' init_declarator
				;

init_declarator:
			   declarator
			   |declarator '=' initializer
			   ;

storage_class_specifier:
					   EXTERN
					   |STATIC
					   |AUTO
					   |REGISTER
					   ;

type_specifier:
			  VOID
			  |CHAR
			  |SHORT
			  |INT
			  |LONG
			  |FLOAT
			  |DOUBLE
			  |SIGNED
			  |UNSIGNED
			  |_BOOL
			  |_COMPLEX
			  |_IMAGINARY
			  |enum_specifier
			  ;

specifier_qualifier_list:
						type_specifier specifier_qualifier_list_optional
						|type_qualifier specifier_qualifier_list_optional
						;

specifier_qualifier_list_optional:
							specifier_qualifier_list
							|
							;

enum_specifier:
			  ENUM ID_optional '{' enumerator_list '}'
			  |ENUM ID_optional '{' enumerator_list ',' '}'
			  |ENUM ID
			  ;

enumerator_list:
			   ENUM
			   |enumerator_list ',' enumerator
			   ;

enumerator:
		  ID
		  |ID '=' constant_expression
		  ;

type_qualifier:
			  CONST
			  |RESTRICT
			  |VOLATILE
			  ;

function_specifier:
				  INLINE
				  ;

declarator:
		  pointer_optional direct_declarator
		  ;

direct_declarator:
				   ID
				   |'(' declarator ')'
				   |direct_declarator '[' type_qualifier_list_optional assignment_expression_optional ']'
				   |direct_declarator '[' STATIC type_qualifier_list_optional assignment_expression ']'
				   |direct_declarator '[' type_qualifier_list_optional '*' ']'
				   |direct_declarator '(' parameter_type_list ')'
				   |direct_declarator '(' ID_list_optional ')'
				   ;

pointer:
	   '*' type_qualifier_list_optional
	   |'*' type_qualifier_list_optional pointer
	   ;

pointer_optional:
		   pointer
		   |
		   ;

type_qualifier_list:
				   type_qualifier
				   |type_qualifier_list type_qualifier
				   ;

type_qualifier_list_optional:
					   type_qualifier_list
					   |
					   ;

parameter_type_list:
				   parameter_list
				   |parameter_list ',' DOTS
				   ;

parameter_list:
			  parameter_declaration
			  |parameter_list ',' parameter_declaration
			  ;

parameter_declaration:
					 declaration_specifiers declarator
					 |declaration_specifiers
					 ;

ID_list:
			   ID
			   |ID_list ',' ID
			   ;

ID_list_optional:
				   ID_list
				   |
				   ;

type_name:
		 specifier_qualifier_list
		 ;

initializer:
		   assignment_expression
		   |'{' initializer_list '}'
		   |'{' initializer_list ',' '}'
		   ;

initializer_list:
				designation_optional initializer
				|initializer_list ',' designation_optional initializer
				;

designation:
		   designator_list '='
		   ;

designation_optional:
		   designation
		   |
		   ;

designator_list:
			   designator 
			   |designator_list designator
			   ;

designator:
		  '[' constant_expression ']'
		  |'.' ID
		  ;

statement:
		 labeled_statement
		 |compound_statement
		 |expression_statement
		 |selection_statement
		 |iteration_statement
		 |jump_statement
		 ;

labeled_statement:
				 ID ':' statement
				 |CASE constant_expression ':' statement
				 |DEFAULT ':' statement
				 ;

compound_statement:
				  '{' block_item_list_optional '}'
				  ;

block_item_list:
			   block_item 
			   |block_item_list block_item
			   ;

block_item_list_optional:
				   block_item_list
				   |
				   ;

block_item:
		  declaration
		  |statement
		  ;

expression_statement:
					expression_optional ';'
					;

selection_statement:
				   IF '(' expression ')' statement
				   |IF '(' expression ')' statement ELSE statement
				   |SWITCH '(' expression ')' statement
				   ;

iteration_statement:
				   WHILE '(' expression ')' statement
				   |DO statement WHILE '(' expression ')' ';'
				   |FOR '(' expression_optional ';' expression_optional ';' expression_optional ')' statement 
				   |FOR '(' declaration expression_optional ';' expression_optional ')' statement
				   ;

jump_statement:
			  GOTO ID ';'
			  |CONTINUE ';'
			  |BREAK ';'
			  |RETURN expression_optional ';'
			  ;

translation_unit:
				external_declaration
				|translation_unit external_declaration
				;

external_declaration:
					function_definition
					|declaration
					;


declaration_list_optional:
				declaration_list
				|
				;

function_definition:
				   declaration_specifiers declarator declaration_list_optional compound_statement
				   ;

declaration_list:
				declaration
				|declaration_list declaration
				;

ID_optional:
			  ID
			  |
			  ;


%%

void yyerror(const char *s) {
    printf("Error occured : %s\n",s);
}