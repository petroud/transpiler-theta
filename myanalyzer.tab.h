/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_VOID = 258,
    KW_INTEGER = 259,
    KW_REAL = 260,
    KW_STR = 261,
    KW_BOOLEAN = 262,
    KW_TRUE = 263,
    KW_FALSE = 264,
    KW_CONST = 265,
    KW_IF = 266,
    KW_ELSE = 267,
    KW_ENDIF = 268,
    KW_FOR = 269,
    KW_IN = 270,
    KW_ENDFOR = 271,
    KW_WHILE = 272,
    KW_ENDWHILE = 273,
    KW_BREAK = 274,
    KW_CONTINUE = 275,
    KW_DEF = 276,
    KW_ENDDEF = 277,
    KW_MAIN = 278,
    KW_RETURN = 279,
    SEMICOLON = 280,
    L_PARENTHESIS = 281,
    R_PARENTHESIS = 282,
    COMMA = 283,
    L_BRACKET = 284,
    R_BRACKET = 285,
    COLON = 286,
    OP_PLUS = 287,
    OP_MINUS = 288,
    OP_MUL = 289,
    OP_DIV = 290,
    OP_MOD = 291,
    OP_POW = 292,
    OP_EQ = 293,
    OP_NEQ = 294,
    OP_LESS = 295,
    OP_LESSEQ = 296,
    OP_GREATER = 297,
    OP_GREATEREQ = 298,
    OP_AND = 299,
    OP_OR = 300,
    OP_NOT = 301,
    OP_ASSIGN = 302,
    OP_ASSIGN_INCR = 303,
    OP_ASSIGN_DEC = 304,
    OP_ASSIGN_MUL = 305,
    OP_ASSIGN_DIV = 306,
    OP_ASSIGN_MOD = 307,
    FUNC_RSTR = 308,
    FUNC_RINT = 309,
    FUNC_RSCAL = 310,
    FUNC_WSTR = 311,
    FUNC_WINT = 312,
    FUNC_WSCAL = 313,
    FUNC_WRT = 314,
    TK_IDENTIFIER = 315,
    TK_INTEGER = 316,
    TK_REAL = 317,
    TK_STRING = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "myanalyzer.y"

    char* str;

#line 125 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
