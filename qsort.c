Token IDENTIFIER: next_random
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token IDENTIFIER: next
Token L_PARENTHESIS: (
Token R_PARENTHESIS: )
Token OP_MINUS: -
Token OP_GREATER: >
Token KEYWORD_INTEGER: integer
Token COLON: :
Token IDENTIFIER: next_random
Token OP_ASSIGN: =
Token L_PARENTHESIS: (
Token IDENTIFIER: next_random
Token OP_MUL: *
Token CONST_INT: 1103515245
Token OP_PLUS: +
Token CONST_INT: 12345
Token R_PARENTHESIS: )
Token OP_MOD: %
Token CONST_INT: 2147483648
Token SEMICOLON: ;
Token KEYWORD_IF: if
Token L_PARENTHESIS: (
Token IDENTIFIER: next_random
Token OP_LESS: <
Token CONST_INT: 0
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: next_random
Token OP_ASSIGN: =
Token OP_MINUS: -
Token IDENTIFIER: next_random
Token SEMICOLON: ;
Token KEYWORD_ENDIF: endif
Token SEMICOLON: ;
Token KEYWORD_RETURN: return
Token IDENTIFIER: next_random
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token IDENTIFIER: swap
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token L_BRACKET: [
Token R_BRACKET: ]
Token COLON: :
Token KEYWORD_INTEGER: integer
Token COMMA: ,
Token IDENTIFIER: i
Token COLON: :
Token KEYWORD_INTEGER: integer
Token COMMA: ,
Token IDENTIFIER: j
Token COLON: :
Token KEYWORD_INTEGER: integer
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: temp
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token IDENTIFIER: temp
Token OP_ASSIGN: =
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: i
Token R_BRACKET: ]
Token SEMICOLON: ;
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: i
Token R_BRACKET: ]
Token OP_ASSIGN: =
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: j
Token R_BRACKET: ]
Token SEMICOLON: ;
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: j
Token R_BRACKET: ]
Token OP_ASSIGN: =
Token IDENTIFIER: temp
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token IDENTIFIER: quickSort
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token L_BRACKET: [
Token R_BRACKET: ]
Token COLON: :
Token KEYWORD_INTEGER: integer
Token COMMA: ,
Token IDENTIFIER: low
Token COLON: :
Token KEYWORD_INTEGER: integer
Token COMMA: ,
Token IDENTIFIER: high
Token COLON: :
Token KEYWORD_INTEGER: integer
Token R_PARENTHESIS: )
Token OP_MINUS: -
Token OP_GREATER: >
Token COLON: :
Token IDENTIFIER: pivot
Token COMMA: ,
Token IDENTIFIER: i
Token COMMA: ,
Token IDENTIFIER: j
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token KEYWORD_IF: if
Token L_PARENTHESIS: (
Token IDENTIFIER: low
Token OP_LESS: <
Token IDENTIFIER: high
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: pivot
Token OP_ASSIGN: =
Token IDENTIFIER: low
Token SEMICOLON: ;
Token IDENTIFIER: i
Token OP_ASSIGN: =
Token IDENTIFIER: low
Token SEMICOLON: ;
Token IDENTIFIER: j
Token OP_ASSIGN: =
Token IDENTIFIER: high
Token SEMICOLON: ;
Token KEYWORD_WHILE: while
Token L_PARENTHESIS: (
Token IDENTIFIER: i
Token OP_LESS: <
Token IDENTIFIER: j
Token R_PARENTHESIS: )
Token COLON: :
Token KEYWORD_WHILE: while
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: i
Token R_BRACKET: ]
Token OP_LESSEQ: <=
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: pivot
Token R_BRACKET: ]
Token OP_AND: and
Token IDENTIFIER: i
Token OP_LESS: <
Token IDENTIFIER: high
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: i
Token OP_ASSIGN: =
Token IDENTIFIER: i
Token OP_PLUS: +
Token CONST_INT: 1
Token SEMICOLON: ;
Token KEYWORD_ENDWHILE: endwhile
Token SEMICOLON: ;
Token KEYWORD_WHILE: while
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: j
Token R_BRACKET: ]
Token OP_GREATER: >
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: pivot
Token R_BRACKET: ]
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: j
Token OP_ASSIGN: =
Token IDENTIFIER: j
Token OP_MINUS: -
Token CONST_INT: 1
Token SEMICOLON: ;
Token KEYWORD_ENDWHILE: endwhile
Token SEMICOLON: ;
Token KEYWORD_IF: if
Token L_PARENTHESIS: (
Token IDENTIFIER: i
Token OP_LESS: <
Token IDENTIFIER: j
Token R_PARENTHESIS: )
Token COLON: :
Token IDENTIFIER: swap
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: i
Token COMMA: ,
Token IDENTIFIER: j
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_ENDIF: endif
Token SEMICOLON: ;
Token KEYWORD_ENDWHILE: endwhile
Token SEMICOLON: ;
Token IDENTIFIER: swap
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: pivot
Token COMMA: ,
Token IDENTIFIER: j
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: quickSort
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: low
Token COMMA: ,
Token IDENTIFIER: j
Token OP_MINUS: -
Token CONST_INT: 1
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: quickSort
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: j
Token OP_PLUS: +
Token CONST_INT: 1
Token COMMA: ,
Token IDENTIFIER: high
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_ENDIF: endif
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token IDENTIFIER: printArray
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token L_BRACKET: [
Token R_BRACKET: ]
Token COLON: :
Token KEYWORD_INTEGER: integer
Token COMMA: ,
Token IDENTIFIER: size
Token COLON: :
Token KEYWORD_INTEGER: integer
Token R_PARENTHESIS: )
Token COLON: :
Token KEYWORD_FOR: for
Token IDENTIFIER: i
Token KEYWORD_IN: in
Token L_BRACKET: [
Token CONST_INT: 0
Token COLON: :
Token IDENTIFIER: size
Token R_BRACKET: ]
Token COLON: :
Token FUNC_WINT: writeInteger
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: i
Token R_BRACKET: ]
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_IF: if
Token L_PARENTHESIS: (
Token IDENTIFIER: i
Token OP_EQ: ==
Token IDENTIFIER: size
Token OP_MINUS: -
Token CONST_INT: 1
Token R_PARENTHESIS: )
Token COLON: :
Token KEYWORD_CONTINUE: continue
Token SEMICOLON: ;
Token KEYWORD_ENDIF: endif
Token SEMICOLON: ;
Token FUNC_WSTR: writeStr
Token L_PARENTHESIS: (
Token CONST_STRING: ", "
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_ENDFOR: endfor
Token SEMICOLON: ;
Token FUNC_WSTR: writeStr
Token L_PARENTHESIS: (
Token CONST_STRING: "\n"
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
Token KEYWORD_DEF: def
Token KEYWORD_MAIN: main
Token L_PARENTHESIS: (
Token R_PARENTHESIS: )
Token COLON: :
Token KEYWORD_CONST: const
Token IDENTIFIER: aSize
Token OP_ASSIGN: =
Token CONST_INT: 100
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token IDENTIFIER: a
Token L_BRACKET: [
Token CONST_INT: 100
Token R_BRACKET: ]
Token COLON: :
Token KEYWORD_INTEGER: integer
Token SEMICOLON: ;
Token KEYWORD_FOR: for
Token IDENTIFIER: i
Token KEYWORD_IN: in
Token L_BRACKET: [
Token CONST_INT: 0
Token COLON: :
Token IDENTIFIER: aSize
Token R_BRACKET: ]
Token COLON: :
Token IDENTIFIER: a
Token L_BRACKET: [
Token IDENTIFIER: i
Token R_BRACKET: ]
Token OP_ASSIGN: =
Token IDENTIFIER: next
Token L_PARENTHESIS: (
Token R_PARENTHESIS: )
Token OP_MOD: %
Token CONST_INT: 1000
Token SEMICOLON: ;
Token KEYWORD_ENDFOR: endfor
Token SEMICOLON: ;
Token FUNC_WSTR: writeStr
Token L_PARENTHESIS: (
Token CONST_STRING: "Random array generated: "
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: printArray
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: aSize
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: quickSort
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token CONST_INT: 0
Token COMMA: ,
Token IDENTIFIER: aSize
Token OP_MINUS: -
Token CONST_INT: 1
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token FUNC_WSTR: writeStr
Token L_PARENTHESIS: (
Token CONST_STRING: "Sorted array: "
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token IDENTIFIER: printArray
Token L_PARENTHESIS: (
Token IDENTIFIER: a
Token COMMA: ,
Token IDENTIFIER: aSize
Token R_PARENTHESIS: )
Token SEMICOLON: ;
Token KEYWORD_ENDDEF: enddef
Token SEMICOLON: ;
#include "thetalib.h"
#include <math.h>


int next_random;


int next() {

	
	next_random = (next_random * 1103515245 + 12345) % 2147483648;
		
	if(next_random < 0){
	next_random = -next_random;
	}


		
	return next_random;



}


void swap(int a[], int i, int j) {
	int temp;


	
	temp = a[i];
		a[i] = a[j];
		a[j] = temp;
}


void quickSort(int a[], int low, int high) {
	int pivot, i, j;

	
	if(low < high){
	
	
	
	
	
	
	pivot = low;
	i = low;
	j = high;
		
	while(i < j){
		
	
		
	while(a[i] <= a[pivot] && i < high){
		i = i + 1;
	}

		
	while(a[j] > a[pivot]){
		j = j - 1;
	}

		
	if(i < j){
	swap(a, i, j);
	}


	}

	swap(a, pivot, j);
	quickSort(a, low, j - 1);
	quickSort(a, j + 1, high);
	}


}


void printArray(int a[], int size) {

		
	for(int i = 0; i<size; i++){

	
	
	writeInteger(a[i]);

		
	if(i == size - 1){
		continue;

	}


	writeStr(", ");

	}


	writeStr("\n");


}


void main(){
	const int aSize = 100;

int 	a[100];


	
	
	
	
		
	for(int i = 0; i<aSize; i++){

		a[i] = next() % 1000;
	}


	writeStr("Random array generated: ");

	printArray(a, aSize);
	quickSort(a, 0, aSize - 1);
	writeStr("Sorted array: ");

	printArray(a, aSize);
}

