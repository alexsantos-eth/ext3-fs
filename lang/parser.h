/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 34 "parser.y" /* yacc.c:1909  */

    struct PropVariant {
        char *value;
        char *name;
    };

#line 51 "parser.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    equals = 258,
    mkdisk = 259,
    rmdisk = 260,
    fdisk = 261,
    mount = 262,
    unmount = 263,
    mkfs = 264,
    login = 265,
    logout = 266,
    mkgrp = 267,
    rmgrp = 268,
    mkusr = 269,
    rmusr = 270,
    chmod = 271,
    touch = 272,
    cat = 273,
    mkdir = 274,
    execR = 275,
    repR = 276,
    sizeP = 277,
    path = 278,
    unit = 279,
    fit = 280,
    type = 281,
    name = 282,
    add = 283,
    del = 284,
    idP = 285,
    pPr = 286,
    fs = 287,
    pwd = 288,
    user = 289,
    usr = 290,
    grp = 291,
    ugo = 292,
    rPr = 293,
    cont = 294,
    stdinR = 295,
    filePr = 296,
    rootR = 297,
    ruta = 298,
    mbr = 299,
    sp = 300,
    likepath = 301,
    strtext = 302,
    letter = 303,
    number = 304,
    word = 305,
    comment = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 50 "parser.y" /* yacc.c:1909  */

    struct PartitionCommandsProps *PTCMDPROPS;
    struct DiskCommandsProps *DKCMDPROPS;
    struct PartitionFsProps *FSCMDPROPS;
    struct UserCommandsProps *USRCMDPROPS;
    struct MkUserProps *MKUSRCMDPROPS;
    struct ChmodProps *CHMODCMDPROPS;
    struct TouchProps *TOUCHCMDPROPS;
    struct RepProps *REPCMDPROPS;
    struct ListProp *FILELIST;
    struct PropVariant PROP;
    char *TEXT;

#line 129 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
