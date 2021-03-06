/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_ANALIZADORS_TAB_H_INCLUDED
# define YY_YY_ANALIZADORS_TAB_H_INCLUDED
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
    Lit_int = 258,
    IGUAL = 259,
    Palabra_reservada = 260,
    Identificador = 261,
    Operador = 262,
    Opcompuesto = 263,
    OpControl = 264,
    OP = 265,
    OPLog = 266,
    OpLogControl = 267,
    TipoDato = 268,
    Lit_float = 269,
    ENTERO = 270,
    ENTERO_NEG = 271,
    Lit_bool = 272,
    Lit_char = 273,
    Lit_String = 274,
    ASIGNACION = 275,
    PUNTOCOM = 276,
    SEPARADOR = 277,
    AGRPAR_AB = 278,
    AGRPAR_CE = 279,
    AGRCOR_AB = 280,
    AGRCOR_CE = 281,
    AGRLLAV_AB = 282,
    AGRLLAV_CE = 283,
    IF = 284,
    THEN = 285,
    ELSE = 286,
    WHILE = 287,
    DO = 288,
    INPUT = 289,
    OUTPUT = 290,
    RETURN = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 46 "AnalizadorS.y" /* yacc.c:1909  */

int entero;
char* tipo;
char* identificador;

#line 97 "AnalizadorS.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ANALIZADORS_TAB_H_INCLUDED  */
