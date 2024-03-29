%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "cgen.h"

    extern int yylex(void);
    extern int line_num;
%}

%define parse.error verbose

//----------- Lexical connection part ------------
// In this part of the analyzer description tokens and identifiers are declared 

%union{
    char* str;
}


/* Theta Keywords */
%token KW_VOID
%token KW_INTEGER
%token KW_REAL
%token KW_STR
%token KW_BOOLEAN
%token KW_TRUE
%token KW_FALSE
%token KW_CONST
%token KW_IF
%token KW_ELSE
%token KW_ENDIF
%token KW_FOR
%token KW_IN
%token KW_ENDFOR
%token KW_WHILE
%token KW_ENDWHILE
%token KW_BREAK
%token KW_CONTINUE
%token KW_DEF
%token KW_ENDDEF
%token KW_MAIN
%token KW_RETURN

/* Theta delimiters */
%token SEMICOLON
%left L_PARENTHESIS
%left R_PARENTHESIS
%token COMMA
%left L_BRACKET
%left R_BRACKET
%token COLON


/* Theta operators */
%left OP_PLUS
%left OP_MINUS
%left OP_MUL
%left OP_DIV
%left OP_MOD
%right OP_POW
%left OP_EQ
%left OP_NEQ
%left OP_LESS
%left OP_LESSEQ
%left OP_GREATER
%left OP_GREATEREQ
%left OP_AND
%left OP_OR
%right OP_NOT

%right OP_ASSIGN
%right OP_ASSIGN_INCR
%right OP_ASSIGN_DEC
%right OP_ASSIGN_MUL
%right OP_ASSIGN_DIV
%right OP_ASSIGN_MOD


/* Theta syscall Functions */
%token FUNC_RSTR
%token FUNC_RINT
%token FUNC_RSCAL
%token FUNC_WSTR
%token FUNC_WINT
%token FUNC_WSCAL
%token FUNC_WRT


/* Flex tokens */
%token <str> TK_IDENTIFIER
%token <str> TK_INTEGER
%token <str> TK_REAL
%token <str> TK_STRING

%start input

// Program body types
%type <str> program_start
%type <str> program_main
%type <str> const_declaration
%type <str> const_assign

%type <str> local_declarations
%type <str> var_const_decl

// Function types
%type <str> fun_definition
%type <str> fun_parameters
%type <str> fun_parameter_member
%type <str> function_body
%type <str> data_type
%type <str> syscall
%type <str> syscall_write_content
%type <str> return_statement
%type <str> function_call
%type <str> function_call_chain


// Statements types
%type <str> statements
%type <str> statement
%type <str> assign_object


// Var types
%type <str> var_decl
%type <str> var_strings
%type <str> var_chain

// Loops
%type <str> for_loop
%type <str> while_loop

// Conditionals
%type <str> if_block


// Expressions
%type <str> expression
%type <str> array_expression



//------------- Syntax transpiling and checking part ------------
%%

input:
    program_start
    {
        if(yyerror_count == 0){
            puts(c_prologue);
            printf("%s\n",$1);
        }
    }
;

// ------------- Start of the program ---------------


// Left recursion
program_start:
        program_main { $$ = template("%s\n", $1); }
    |   const_declaration program_start { $$ = template("%s\n\n%s", $1, $2); }
    |   var_decl program_start { $$ = template("%s\n\n%s", $1, $2); }
    |   fun_definition program_start { $$ = template("%s\n\n%s", $1, $2); }
;

program_main:
        KW_DEF KW_MAIN L_PARENTHESIS R_PARENTHESIS COLON KW_ENDDEF SEMICOLON{ $$ = template("void main(){}"); }
    |   KW_DEF KW_MAIN L_PARENTHESIS R_PARENTHESIS COLON function_body KW_ENDDEF SEMICOLON  { $$ = template("void main(){\n%s\n}",$6); }
;


function_body:
        local_declarations statements   { $$ = template("\t%s\n%s", $1, $2); }
    |   statements                      { $$ = template("%s\n", $1); }
;

var_const_decl:
        var_decl            { $$ = $1; }
    |   const_declaration   { $$ = $1; }


local_declarations:
        local_declarations var_const_decl       { $$ = template("%s\n%s", $1, $2); }
    |   var_const_decl                          { $$ = $1; }
;




//----------------- Constant declarations ------------------
const_declaration: 
    KW_CONST const_assign COLON data_type SEMICOLON  { $$ = template("const %s %s;\n", $4, $2); }
;


const_assign:
        TK_IDENTIFIER OP_ASSIGN expression      { $$ = template("%s = %s", $1, $3); }
    |   TK_IDENTIFIER OP_ASSIGN TK_STRING       { $$ = template("%s = %s", $1, $3); }
;




//----------------- Variable declarations ------------------

var_decl:
        var_chain COLON data_type SEMICOLON   { $$ = template("%s %s;\n", $3, $1); }
;

var_chain:
        var_strings                         { $$ = $1; }
    |   var_chain COMMA var_strings         { $$ = template("%s, %s", $1, $3); }

var_strings:
        TK_IDENTIFIER                                               { $$ = template("%s", $1); }
    |   TK_IDENTIFIER L_BRACKET expression R_BRACKET                { $$ = template("%s[%s]", $1, $3); }
;

data_type:
        KW_INTEGER  { $$ = template("int"); }
    |   KW_STR      { $$ = template("str"); }
    |   KW_REAL     { $$ = template("double"); }
    |   KW_BOOLEAN  { $$ = template("bool"); }
    |   KW_VOID     { $$ = template("void"); }
;

//---------------- Function transpilation -----------------

fun_definition:
    // Function with return type
        KW_DEF TK_IDENTIFIER L_PARENTHESIS fun_parameters R_PARENTHESIS OP_MINUS OP_GREATER data_type COLON function_body KW_ENDDEF SEMICOLON
        { $$ = template("%s %s(%s) {\n%s\n}\n", $8, $2, $4, $10);}
    // Function with void return type
    |   KW_DEF TK_IDENTIFIER L_PARENTHESIS fun_parameters R_PARENTHESIS COLON function_body KW_ENDDEF SEMICOLON
        { $$ = template("void %s(%s) {\n%s\n}\n", $2, $4, $7);}
;


fun_parameters:
        fun_parameter_member COMMA fun_parameters   { $$ = template("%s, %s", $1, $3); }
    |   fun_parameter_member                        { $$ = $1; }
    |   %empty                                      { $$ = ""; }
;


fun_parameter_member: 
        TK_IDENTIFIER COLON data_type                       { $$ = template("%s %s", $3, $1); }
    |   TK_IDENTIFIER L_BRACKET R_BRACKET COLON data_type   { $$ = template("%s %s[]", $5, $1); }
;


//---------------- Statements List and decomposition ----------------


statements:
        statement
    |   statements statement    { $$ = template("\n\t%s\n\t%s", $1, $2); }
;

statement:
        assign_object SEMICOLON         { $$ = template("%s;", $1); }
    |   function_call SEMICOLON         { $$ = template("%s;", $1); }
    |   KW_CONTINUE SEMICOLON           { $$ = template("\tcontinue;\n"); }
    |   KW_BREAK SEMICOLON              { $$ = template("\tbreak;\n"); }
    |   for_loop                        { $$ = template("\t%s\n", $1); }
    |   while_loop                      { $$ = template("\t%s\n", $1); }
    |   if_block                        { $$ = template("\t%s\n", $1); }
    |   return_statement                { $$ = template("\t%s\n", $1); }
    |   syscall                         { $$ = template("%s\n", $1); }
;



assign_object:
      var_strings OP_ASSIGN expression              { $$ = template("%s = %s", $1, $3); }
    | var_strings OP_ASSIGN_INCR expression         { $$ = template("%s+=%s", $1, $3); }
    | var_strings OP_ASSIGN_DEC expression          { $$ = template("%s-=%s", $1, $3); }
    | var_strings OP_ASSIGN_MUL expression          { $$ = template("%s*=%s", $1, $3); }
    | var_strings OP_ASSIGN_DIV expression          { $$ = template("%s/=%s", $1, $3); }
    | var_strings OP_ASSIGN_MOD expression          { $$ = template("%s = %s %% %s", $1, $1, $3); }
;

function_call:
    TK_IDENTIFIER L_PARENTHESIS function_call_chain R_PARENTHESIS    { $$ = template("%s(%s)", $1, $3); }
;

function_call_chain:
        %empty                                  { $$ = template(""); }
    |   function_call_chain COMMA expression    { $$ = template("%s, %s", $1, $3); }
    |   expression                              { $$ = template("%s", $1); }
;


for_loop:
        KW_FOR TK_IDENTIFIER KW_IN L_BRACKET expression COLON expression R_BRACKET COLON statements KW_ENDFOR SEMICOLON
        { $$ = template("\n\tfor(int %s = %s; %s<%s; %s++){\n\n\t%s\n\t}\n", $2, $5, $2, $7, $2, $10); }
    |   KW_FOR TK_IDENTIFIER KW_IN L_BRACKET expression COLON expression COLON expression R_BRACKET COLON statements KW_ENDFOR SEMICOLON
        { $$ = template("\n\tfor(int %s = %s; %s<%s; %s = %s + %s){\n\n\t%s\n\t}\n", $2, $5, $2, $9, $2, $2, $7, $12); }

while_loop:
        KW_WHILE L_PARENTHESIS expression R_PARENTHESIS COLON statements KW_ENDWHILE SEMICOLON
        { $$ = template("\n\twhile(%s){\n\t\t%s\n\t}", $3, $6);}
;

if_block:
        KW_IF L_PARENTHESIS expression R_PARENTHESIS COLON statements KW_ENDIF SEMICOLON
        { $$ = template("\n\tif(%s){\n\t%s\n\t}\n", $3, $6);}
    |   KW_IF L_PARENTHESIS expression R_PARENTHESIS COLON statements KW_ELSE COLON statements KW_ENDIF SEMICOLON
        { $$ = template("\n\tif(%s){\n\t%s\n\t}\n\telse{\n\t%s\n\t}\n", $3, $6, $9); }
;

return_statement:
        KW_RETURN SEMICOLON               { $$ = template("\n\treturn;\n"); }
    |   KW_RETURN expression SEMICOLON    { $$ = template("\n\treturn %s;\n",$2 ); }
;


array_expression:
        TK_IDENTIFIER L_BRACKET expression R_BRACKET    { $$ = template("%s[%s]", $1, $3); }
    |   TK_IDENTIFIER L_BRACKET R_BRACKET               { $$ = template("*%s", $1);}
;

expression:
        OP_MINUS expression                          { $$ = template("-%s", $2); }
    |   OP_PLUS expression                           { $$ = template("+%s", $2); }
    |   L_PARENTHESIS expression R_PARENTHESIS       { $$ = template("(%s)", $2); }
    |   expression OP_PLUS expression                { $$ = template("%s + %s", $1, $3); }
    |   expression OP_MINUS expression               { $$ = template("%s - %s", $1, $3); }
    |   expression OP_MUL expression                 { $$ = template("%s * %s", $1, $3); }
    |   expression OP_DIV expression                 { $$ = template("%s / %s", $1, $3); }
    |   expression OP_MOD expression                 { $$ = template("%s %% %s", $1, $3); }
    |   expression OP_POW expression                 { $$ = template("pow(%s,%s)", $1, $3); }
    |   expression OP_EQ  expression                 { $$ = template("%s == %s", $1, $3); }
    |   expression OP_NEQ expression                 { $$ = template("%s != %s", $1, $3); }
    |   expression OP_LESS expression                { $$ = template("%s < %s", $1, $3); }
    |   expression OP_LESSEQ expression              { $$ = template("%s <= %s", $1, $3); }
    |   expression OP_GREATER expression             { $$ = template("%s > %s", $1, $3); }
    |   expression OP_GREATEREQ expression           { $$ = template("%s >= %s", $1, $3); }
    |   expression OP_AND expression                 { $$ = template("%s && %s", $1, $3); }
    |   expression OP_OR  expression                 { $$ = template("%s || %s", $1, $3); }
    |   OP_NOT expression                            { $$ = template("!%s", $2); }
    |   array_expression            { $$ = $1; }
    |   TK_IDENTIFIER               { $$ = $1; }
    |   TK_INTEGER                  { $$ = $1; }
    |   TK_REAL                     { $$ = $1; }    
    |   KW_TRUE                     { $$ = "1"; }
    |   KW_FALSE                    { $$ = "0"; }
    |   syscall                     { $$ = $1; }
    |   function_call               { $$ = $1;}
;


syscall:
        var_strings OP_ASSIGN FUNC_RSTR L_PARENTHESIS R_PARENTHESIS SEMICOLON     { $$ = template("%s = readStr();", $1); }
    |   var_strings OP_ASSIGN FUNC_RSCAL L_PARENTHESIS R_PARENTHESIS SEMICOLON    { $$ = template("%s = readScalar();", $1); }
    |   var_strings OP_ASSIGN FUNC_RINT L_PARENTHESIS R_PARENTHESIS SEMICOLON     { $$ = template("%s = readInteger();", $1); }
    |   FUNC_WSTR L_PARENTHESIS syscall_write_content R_PARENTHESIS SEMICOLON     { $$ = template("writeStr(%s);", $3); }
    |   FUNC_WSCAL L_PARENTHESIS syscall_write_content R_PARENTHESIS SEMICOLON    { $$ = template("writeScalar(%s);", $3); }
    |   FUNC_WINT L_PARENTHESIS syscall_write_content R_PARENTHESIS SEMICOLON     { $$ = template("writeInteger(%s);", $3); }
    |   FUNC_WRT L_PARENTHESIS syscall_write_content R_PARENTHESIS SEMICOLON      { $$ = template("write(%s);", $3); }
;


syscall_write_content:
        TK_IDENTIFIER       { $$ = $1; }
    |   TK_STRING           { $$ = $1; }
    |   array_expression    { $$ = $1; }
;


%%
int main() {
    if ( yyparse() != 0 )
        fprintf(stderr,"Rejected! Syntax errors exist, please revise the errors above ^ ! \n");
}