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
    KW_INTEGER = 258,
    KW_REAL = 259,
    KW_STR = 260,
    KW_BOOLEAN = 261,
    KW_TRUE = 262,
    KW_FALSE = 263,
    KW_CONST = 264,
    KW_IF = 265,
    KW_ELSE = 266,
    KW_ENDIF = 267,
    KW_FOR = 268,
    KW_IN = 269,
    KW_ENDFOR = 270,
    KW_WHILE = 271,
    KW_ENDWHILE = 272,
    KW_BREAK = 273,
    KW_CONTINUE = 274,
    KW_NOT = 275,
    KW_AND = 276,
    KW_OR = 277,
    KW_DEF = 278,
    KW_ENDDEF = 279,
    KW_BEGIN = 280,
    KW_RETURN = 281,
    KW_COMP = 282,
    KW_ENDCOMP = 283,
    SEMICOLON = 284,
    L_PARENTHESIS = 285,
    R_PARENTHESIS = 286,
    COMMA = 287,
    L_BRACKET = 288,
    R_BRACKET = 289,
    COLON = 290,
    DOT = 291,
    OP_PLUS = 292,
    OP_MINUS = 293,
    OP_MUL = 294,
    OP_DIV = 295,
    OP_MOD = 296,
    OP_POW = 297,
    OP_EQ = 298,
    OP_NEQ = 299,
    OP_LESS = 300,
    OP_LESSEQ = 301,
    OP_GREATER = 302,
    OP_GREATEREQ = 303,
    OP_AND = 304,
    OP_OR = 305,
    OP_NOT = 306,
    OP_ASSIGN = 307,
    OP_ASSIGN_INCR = 308,
    OP_ASSIGN_DEC = 309,
    OP_ASSIGN_MUL = 310,
    OP_ASSIGN_DIV = 311,
    OP_ASSIGN_MOD = 312,
    FUNC_RSTR = 313,
    FUNC_RINT = 314,
    FUNC_RSCAL = 315,
    FUNC_WSTR = 316,
    FUNC_WINT = 317,
    FUNC_WSCAL = 318,
    FUNC_WRT = 319,
    TK_IDENTIFIER = 320,
    TK_INTEGER = 321,
    TK_REAL = 322,
    TK_STRING = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "myanalyzer.y"

    char* str;

#line 130 "myanalyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
