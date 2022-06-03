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

"void"          { return KW_VOID;}
"integer"       { return KW_INTEGER; }
"scalar"        { return KW_REAL; }
"str"           { return KW_STR; }
"boolean"       { return KW_BOOLEAN; }
"True"          { return KW_TRUE; }
"False"         { return KW_FALSE; }
"const"         { return KW_CONST; }
"if"            { return KW_IF; }
"else"          { return KW_ELSE; }
"endif"         { return KW_ENDIF; }
"for"           { return KW_FOR; }
"in"            { return KW_IN; }
"endfor"        { return KW_ENDFOR; }
"while"         { return KW_WHILE; }
"endwhile"      { return KW_ENDWHILE; }
"break"         { return KW_BREAK; }
"continue"      { return KW_CONTINUE; }
"def"           { return KW_DEF; }
"enddef"        { return KW_ENDDEF; }
"main"          { return KW_MAIN; }
"return"        { return KW_RETURN; }


";"             { return SEMICOLON; }
"("             { return L_PARENTHESIS; }
")"             { return R_PARENTHESIS; }
","             { return COMMA; }
"["             { return L_BRACKET; }
"]"             { return R_BRACKET; }
":"             { return COLON; }


"+"             { return OP_PLUS; }
"-"             { return OP_MINUS; }
"*"             { return OP_MUL; }
"/"             { return OP_DIV; }
"%"             { return OP_MOD; }
"**"            { return OP_POW; }
"=="            { return OP_EQ; }
"!="            { return OP_NEQ; }
"<"             { return OP_LESS; }
"<="            { return OP_LESSEQ; }
">"             { return OP_GREATER; }
">="            { return OP_GREATEREQ; }
"and"           { return OP_AND; }
"or"            { return OP_OR; }
"not"           { return OP_NOT;}

"="             { return OP_ASSIGN; }
"+="            { return OP_ASSIGN_INCR; }
"-="            { return OP_ASSIGN_DEC; }
"*="            { return OP_ASSIGN_MUL; }
"/="            { return OP_ASSIGN_DIV; }
"%="            { return OP_ASSIGN_MOD; }


"readStr"       { return FUNC_RSTR; }
"readInteger"   { return FUNC_RINT; }
"readScalar"    { return FUNC_RSCAL; }
"writeStr"      { return FUNC_WSTR; }
"writeInteger"  { return FUNC_WINT; }
"writeScalar"   { return FUNC_WSCAL; }
"write"         { return FUNC_WRT; }


{IDENTIFIER}         { yylval.str = strdup(yytext); return TK_IDENTIFIER; }
{NUMBER}             { yylval.str = strdup(yytext); return TK_INTEGER;  }
{REAL}               { yylval.str = strdup(yytext); return TK_REAL; }
{STRING}             { yylval.str = strdup(yytext); return TK_STRING; }


[ \r\t]+             /* Empty column or set of columns */
"--"[^\n]*           /* Line Comment, ignoring */

\n                   { ++line_num; }

<<EOF>>              return EOF;
.                    { printf("Unrecognized Token '%s' in line %d\n", yytext, line_num); exit(1);}
%%