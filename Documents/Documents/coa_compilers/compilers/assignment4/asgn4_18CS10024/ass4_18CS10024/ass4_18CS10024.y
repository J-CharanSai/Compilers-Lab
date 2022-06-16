%{ /* C Declarations and Definitions */
	#include <string.h>
	#include <stdio.h>

	extern int yylex();
	void yyerror(const char*);
%}


%token BREAK CASE CHAR CONTINUE DEFAULT DO DOUBLE ELSE EXTERN FLOAT FOR GOTO IF INT LONG RETURN SHORT SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION VOID WHILE INLINE CONST RESTRICT VOLATILE

%token ID INT_CNST FLT_CNST CHAR_CNST STR_LTRL

%token SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE
%token ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE
%token CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE

%token DOT IMPLIES INCREASE DECREASE BITWISE_AND BITWISE_NOT EXCLAIM MUL ADD SUB DIV MOD SHIFT_LEFT SHIFT_RIGHT LT GT 
%token LTE GTE EQ NEQ BITWISE_XOR BITWISE_OR AND OR
%token QUESTION COLON SEMICOLON DOTS ASSIGN 
%token MUL_EQ DIV_EQ MOD_EQ ADD_EQ SUB_EQ LT_EQ GT_EQ BITWISE_AND_EQ BITWISE_XOR_EQ BITWISE_OR_EQ 
%token COMMA HASH 

%start translation_unit

%%

primary_expression
        : ID
        | INT_CNST 
        | FLT_CNST 
        | CHAR_CNST
        | STR_LTRL
        | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE
        ;
	
postfix_expression
        : primary_expression
        | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE
        | postfix_expression ROUND_BRACKET_OPEN argument_expression_list_opt ROUND_BRACKET_CLOSE
        | postfix_expression DOT ID
        | postfix_expression IMPLIES ID
        | postfix_expression INCREASE
        | postfix_expression DECREASE
        | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE
        | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE
        ;

argument_expression_list_opt
        : argument_expression_list
        |
        ;

argument_expression_list
        : assignment_expression
        | argument_expression_list COMMA assignment_expression
        ;

unary_expression
        : postfix_expression
        | INCREASE unary_expression
        | DECREASE unary_expression
        | unary_operator cast_expression
        | SIZEOF unary_expression
        | SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE
        ;

unary_operator
        : BITWISE_AND
        | MUL
        | ADD
        | SUB
        | BITWISE_NOT
        | EXCLAIM
        ;

cast_expression
        : unary_expression
        | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression
        ;

multiplicative_expression
        : cast_expression
        | multiplicative_expression MUL cast_expression
        | multiplicative_expression DIV cast_expression
        | multiplicative_expression MOD cast_expression
        ;

additive_expression
        : multiplicative_expression
        | additive_expression ADD multiplicative_expression
        | additive_expression SUB multiplicative_expression
        ;

shift_expression
        : additive_expression
        | shift_expression SHIFT_LEFT additive_expression
        | shift_expression SHIFT_RIGHT additive_expression
        ;

relational_expression
        : shift_expression
        | relational_expression LT shift_expression
        | relational_expression GT shift_expression
        | relational_expression LTE shift_expression
        | relational_expression GTE shift_expression
        ;

equality_expression
        : relational_expression
        | equality_expression EQ relational_expression
        | equality_expression NEQ relational_expression
        ;

and_expression
        : equality_expression
        | and_expression BITWISE_AND equality_expression
        ;

exclusive_or_expression
        : and_expression
        | exclusive_or_expression BITWISE_XOR and_expression
        ;

inclusive_or_expression
        : exclusive_or_expression
        | inclusive_or_expression BITWISE_OR exclusive_or_expression
        ;

logical_and_expression
        : inclusive_or_expression
        | logical_and_expression AND inclusive_or_expression
        ;

logical_or_expression
        : logical_and_expression
        | logical_or_expression OR logical_and_expression
        ;

conditional_expression
        : logical_or_expression
        | logical_or_expression QUESTION expression COLON conditional_expression
        ;

assignment_expression
        : conditional_expression
        | unary_expression assignment_operator assignment_expression
        ;

assignment_expression_opt
        : assignment_expression
        |
        ;

assignment_operator
        : ASSIGN
        | MUL_EQ
        | DIV_EQ
        | MOD_EQ
        | ADD_EQ
        | SUB_EQ
        | LTE
        | GTE
        | BITWISE_AND_EQ
        | BITWISE_XOR_EQ
        | BITWISE_OR_EQ
        ;

expression
        : assignment_expression
        | expression COMMA assignment_expression
        ;

constant_expression
        : conditional_expression
        ;

expression_opt
        : expression
        |
        ;

declaration
        : declaration_specifiers init_declarator_list_opt SEMICOLON
        ;

declaration_specifiers
        : storage_class_specifier declaration_specifiers_opt
        | type_specifier declaration_specifiers_opt
        | type_qualifier declaration_specifiers_opt
        | function_specifier declaration_specifiers_opt
        ;

declaration_specifiers_opt
        : declaration_specifiers
        |
        ;

init_declarator_list_opt
        : init_declarator_list
        |
        ;

init_declarator_list
        : init_declarator
        | init_declarator_list COMMA init_declarator
        ;

init_declarator
        : declarator
        | declarator ASSIGN initializer
        ;

storage_class_specifier
        : EXTERN
        | STATIC
        ;

type_specifier
        : VOID
        | CHAR
        | SHORT
        | INT
        | LONG
        | FLOAT
        | DOUBLE
        ;

specifier_qualifier_list
        : type_specifier specifier_qualifier_list_opt
        | type_qualifier specifier_qualifier_list_opt
        ;

specifier_qualifier_list_opt
        : specifier_qualifier_list
        |
        ;

type_qualifier
        : CONST
        | VOLATILE
        | RESTRICT
        ;

function_specifier
        : INLINE
        ;

declarator
        : pointer_opt direct_declarator
        ;

direct_declarator
        : ID
        | ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE
        | direct_declarator SQUARE_BRACKET_OPEN  type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE
        | direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE
        | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE
        | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE
        | direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE
        | direct_declarator ROUND_BRACKET_OPEN identifier_list_opt ROUND_BRACKET_CLOSE
        ;

pointer
        : MUL type_qualifier_list_opt
        | MUL type_qualifier_list_opt pointer
        ;

pointer_opt
        : pointer
        |
        ;

type_qualifier_list
        : type_qualifier
        | type_qualifier_list type_qualifier
        ;

type_qualifier_list_opt
        : type_qualifier_list
        |
        ;

parameter_type_list
        : parameter_list
        | parameter_list COMMA DOTS
        ;

parameter_list
        : parameter_declaration
        | parameter_list COMMA parameter_declaration
        ;

parameter_declaration
        : declaration_specifiers declarator
        | declaration_specifiers
        ;

identifier_list
        : ID
        | identifier_list COMMA ID
        ;

identifier_list_opt
        : identifier_list
        |
        ;

type_name
        : specifier_qualifier_list
        ;

initializer
        : assignment_expression
        | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE
        | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE
        ;

initializer_list
        : designation_opt initializer
        | initializer_list COMMA designation_opt initializer
        ;

designation
        : designator_list ASSIGN
        ;

designation_opt
        : designation
        |
        ;

designator_list
        : designator
        | designator_list designator
        ;

designator
        : SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE
        | DOT ID
        ;

statement
        : labeled_statement
        | compound_statement
        | expression_statement
        | selection_statement
        | iteration_statement
        | jump_statement
        ;

labeled_statement
        : ID COLON statement
        | CASE constant_expression COLON statement
        | DEFAULT COLON statement
        ;

compound_statement
        : CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE
        ;

block_item_list
        : block_item
        | block_item_list block_item
        ;

block_item_list_opt
        : block_item_list
        |
        ;

block_item
        : declaration
        | statement
        ;

expression_statement
        : expression_opt SEMICOLON
        ;

selection_statement
        : IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement
        | IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement
        | SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement
        ;

iteration_statement
        : WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement
        | DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON
        | FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement
        | FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement
        ;

jump_statement
        : GOTO ID SEMICOLON
        | CONTINUE SEMICOLON
        | BREAK SEMICOLON
        | RETURN expression_opt SEMICOLON
        ;

translation_unit
        : external_declaration
        | translation_unit external_declaration
        ;

external_declaration
        : function_definition
        | declaration
        ;

function_definition
        : declaration_specifiers declarator declaration_list_opt compound_statement
        ;

declaration_list
        : declaration
        | declaration_list declaration
        ;

declaration_list_opt
        : declaration_list
        |
        ;

%%

void yyerror(const char *s) {
    printf("Error occured : %s\n",s);
}
