#!/bin/bash
bison -d -v -r all myanalyzer.y
flex mylexer.l
gcc -o mycompiler lex.yy.c myanalyzer.tab.c cgen.c -lfl