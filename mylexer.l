%{
    #include <stdio.h>
    #include <string.h>
    #include "cgen.h"
    #include "myanalyzer.tab.h"

    int line_num = 1;
%}

IDENTIFIER  [a-zA-Z][0-9a-zA-Z_]*
DIGIT       [0-9]
NUMBER      {DIGIT}{DIGIT}*
DECIMAL     ([+-]?"."{NUMBER})|([+-]?{NUMBER}("."{NUMBER}?)?)
REAL        {DECIMAL}([eE][+-]?{NUMBER})?
STRING      \"[^\n]*\"

%%

"integer"       { printf("Token KEYWORD_INTEGER: %s\n", yytext); return KW_INTEGER; }
"scalar"        { printf("Token KEYWORD_REAL: %s\n", yytext); return KW_REAL; }
"str"           { printf("Token KEYWORD_STR: %s\n", yytext); return KW_STR; }
"boolean"       { printf("Token KEYWORD_BOOLEAN: %s\n", yytext); return KW_BOOLEAN; }
"True"          { printf("Token KEYWORD_TRUE: %s\n", yytext); return KW_TRUE; }
"False"         { printf("Token KEYWORD_FALSE: %s\n", yytext); return KW_FALSE; }
"const"         { printf("Token KEYWORD_CONST: %s\n", yytext); return KW_CONST; }
"if"            { printf("Token KEYWORD_IF: %s\n", yytext); return KW_IF; }
"else"          { printf("Token KEYWORD_ELSE: %s\n", yytext); return KW_ELSE; }
"endif"         { printf("Token KEYWORD_ENDIF: %s\n", yytext); return KW_ENDIF; }
"for"           { printf("Token KEYWORD_FOR: %s\n", yytext); return KW_FOR; }
"in"            { printf("Token KEYWORD_IN: %s\n", yytext); return KW_IN; }
"endfor"        { printf("Token KEYWORD_ENDFOR: %s\n", yytext); return KW_ENDFOR; }
"while"         { printf("Token KEYWORD_WHILE: %s\n", yytext); return KW_WHILE; }
"endwhile"      { printf("Token KEYWORD_ENDWHILE: %s\n", yytext); return KW_ENDWHILE; }
"break"         { printf("Token KEYWORD_BREAK: %s\n", yytext); return KW_BREAK; }
"continue"      { printf("Token KEYWORD_CONTINUE: %s\n", yytext); return KW_CONTINUE; }
"def"           { printf("Token KEYWORD_DEF: %s\n", yytext); return KW_DEF; }
"enddef"        { printf("Token KEYWORD_ENDDEF: %s\n", yytext); return KW_ENDDEF; }
"main"          { printf("Token KEYWORD_MAIN: %s\n", yytext); return KW_MAIN; }
"return"        { printf("Token KEYWORD_RETURN: %s\n", yytext); return KW_RETURN; }


";"             { printf("Token SEMICOLON: %s\n", yytext); return SEMICOLON; }
"("             { printf("Token L_PARENTHESIS: %s\n", yytext); return L_PARENTHESIS; }
")"             { printf("Token R_PARENTHESIS: %s\n", yytext); return R_PARENTHESIS; }
","             { printf("Token COMMA: %s\n", yytext); return COMMA; }
"["             { printf("Token L_BRACKET: %s\n", yytext); return L_BRACKET; }
"]"             { printf("Token R_BRACKET: %s\n", yytext); return R_BRACKET; }
":"             { printf("Token COLON: %s\n", yytext); return COLON; }
"."             { printf("Token DOT: %s\n", yytext); return DOT; }

"+"             { printf("Token OP_PLUS: %s\n", yytext); return OP_PLUS; }
"-"             { printf("Token OP_MINUS: %s\n", yytext); return OP_MINUS; }
"*"             { printf("Token OP_MUL: %s\n", yytext); return OP_MUL; }
"/"             { printf("Token OP_DIV: %s\n", yytext); return OP_DIV; }
"%"             { printf("Token OP_MOD: %s\n", yytext); return OP_MOD; }
"**"            { printf("Token OP_POW: %s\n", yytext); return OP_POW; }
"=="            { printf("Token OP_EQ: %s\n", yytext); return OP_EQ; }
"!="            { printf("Token OP_NEQ: %s\n", yytext); return OP_NEQ; }
"<"             { printf("Token OP_LESS: %s\n", yytext); return OP_LESS; }
"<="            { printf("Token OP_LESSEQ: %s\n", yytext); return OP_LESSEQ; }
">"             { printf("Token OP_GREATER: %s\n", yytext); return OP_GREATER; }
">="            { printf("Token OP_GREATEREQ: %s\n", yytext); return OP_GREATEREQ; }
"and"           { printf("Token OP_AND: %s\n", yytext); return OP_AND; }
"or"            { printf("Token OP_OR: %s\n", yytext); return OP_OR; }
"not"           { printf("Token OP_NOT: %s\n", yytext); return OP_NOT;}

"="             { printf("Token OP_ASSIGN: %s\n", yytext); return OP_ASSIGN; }
"+="            { printf("Token OP_ASSIGN_INCR: %s\n", yytext); return OP_ASSIGN_INCR; }
"-="            { printf("Token OP_ASSIGN_DEC: %s\n", yytext); return OP_ASSIGN_DEC; }
"*="            { printf("Token OP_ASSING_MUL: %s\n", yytext); return OP_ASSIGN_MUL; }
"/="            { printf("Token OP_ASSIGN_DIV: %s\n", yytext); return OP_ASSIGN_DIV; }
"%="            { printf("Token OP_ASSIGN_MOD: %s\n", yytext); return OP_ASSIGN_MOD; }


"readStr"       { printf("Token FUNC_RSTR: %s\n", yytext); return FUNC_RSTR; }
"readInteger"   { printf("Token FUNC_RINT: %s\n", yytext); return FUNC_RINT; }
"readScalar"    { printf("Token FUNC_RSCAL: %s\n", yytext); return FUNC_RSCAL; }
"writeStr"      { printf("Token FUNC_WSTR: %s\n", yytext); return FUNC_WSTR; }
"writeInteger"  { printf("Token FUNC_WINT: %s\n", yytext); return FUNC_WINT; }
"writeScalar"   { printf("Token FUNC_WSCAL: %s\n", yytext); return FUNC_WSCAL; }
"write"         { printf("Token FUNC_WRT: %s\n", yytext); return FUNC_WRT; }


{IDENTIFIER}         { printf("Token IDENTIFIER: %s\n", yytext); return TK_IDENTIFIER; }
{NUMBER}             { printf("Token CONST_INT: %s\n", yytext); return TK_INTEGER; }
{REAL}               { printf("Token CONST_REAL: %s\n", yytext); return TK_REAL; }
{STRING}             { printf("Token CONST_STRING: %s\n", yytext); return TK_STRING; }


[ \r\t]+             /* Empty column or set of columns */
"--"[^\n]*           /* Line Comment, ignoring */

.                    { printf("Unrecognized Token '%s' in line %d\n", yytext, line_num); exit(1);}
\n                   { ++line_num; }

<<EOF>>              return EOF;
%%