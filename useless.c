Token KEYWORD_CONST: const
Token IDENTIFIER: N
Token OP_ASSIGN: =
Token CONST_REAL: -100
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: b
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token IDENTIFIER: cube
Token L_PARENTHESIS: (
Token IDENTIFIER: i
Token COLON: :
Token KEYWORD_INTEGER: integer
Token R_PARENTHESIS: )
Token OP_MINUS: -
Token OP_GREATER: >
Token KEYWORD_INTEGER: integer
Token COLON: :
Token KEYWORD_RETURN: return
Token IDENTIFIER: i
Token OP_MUL: *
Token IDENTIFIER: i
Token OP_MUL: *
Token IDENTIFIER: i
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token IDENTIFIER: add
Token L_PARENTHESIS: (
Token IDENTIFIER: n
Token COLON: :
Token KEYWORD_INTEGER: integer
Token COMMA: ,
Token IDENTIFIER: k
Token COLON: :
Token KEYWORD_INTEGER: integer
Token R_PARENTHESIS: )
Token OP_MINUS: -
Token OP_GREATER: >
Token KEYWORD_INTEGER: integer
Token COLON: :
Token IDENTIFIER: j
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token IDENTIFIER: j
Token OP_ASSIGN: =
Token L_PARENTHESIS: (
Token IDENTIFIER: N
Token OP_MINUS: -
Token IDENTIFIER: n
Token R_PARENTHESIS: )
Token OP_PLUS: +
Token IDENTIFIER: cube
Token L_PARENTHESIS: (
Token IDENTIFIER: k
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token FUNC_WINT: writeInteger
Token L_PARENTHESIS: (
Token IDENTIFIER: j
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_RETURN: return
Token IDENTIFIER: j
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token KEYWORD_MAIN: main
Token L_PARENTHESIS: (
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: a
Token OP_ASSIGN: =
Token FUNC_RINT: readInteger
Token L_PARENTHESIS: (
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: b
Token OP_ASSIGN: =
Token FUNC_RINT: readInteger
Token L_PARENTHESIS: (
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: add
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: b
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
#include "thetalib.h"
#include <math.h>


const int N = -100;


int a, b;


int cube(int i) {
	
	return i * i * i;



}


int add(int n, int k) {
	int j;


	
	j = (N - n) + cube(k);
	writeInteger(j);

		
	return j;


}


void main(){

	
	a = readInteger();

	b = readInteger();

	add(a, b);

}

