/*

     ***** **                                                              *
  ******  ***                                                            **
 **   *  * **                                                            **
*    *  *  **                                                            **
    *  *   *              ***  ****       ****              ***  ****    **
   ** **  *        ***     **** **** *   * **** *    ***     **** **** * **  ***
   ** ** *        * ***     **   ****   **  ****    * ***     **   ****  ** * ***
   ** ***        *   ***    **         ****        *   ***    **         ***   *
   ** ** ***    **    ***   **           ***      **    ***   **         **   *
   ** **   ***  ********    **             ***    ********    **         **  *
   *  **     ** *******     **               ***  *******     **         ** **
      *      ** **          **          ****  **  **          **         ******
  ****     ***  ****    *   ***        * **** *   ****    *   ***        **  ***
 *  ********     *******     ***          ****     *******     ***       **   *** *
*     ****        *****                             *****                 **   ***
*
 **

Written by Soulaymen Chouri
Contact me @ akaisora@tuta.io

Copyright (c) 2016,Soulaymen Chouri (akaisora@tuta.io). All rights reserved.
Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the author nor the names of other contributors may be used to endorse or promote products derived from this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE AUTHORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BERSERK_DEFINES
#define BERSERK_DEFINES

#define PS_EOF 0 // (EOF)
#define PS_ERROR 1 // (Error)
#define PS_COMMENT 2 // Comment
#define PS_NEWLINE 3 // NewLine
#define PS_WHITESPACE 4 // Whitespace
#define PS_TIMESDIV 5 // '*/'
#define PS_DIVTIMES 6 // '/*'
#define PS_DIVDIV 7 // '//'
#define PS_MINUS 8 // GrammarCharset0'-'
#define PS_MINUSMINUS 9 // '--'
#define PS_EXCLAM 10 // '!'
#define PS_EXCLAMEQ 11 // '!='
#define PS_PERCENT 12 // '%'
#define PS_PERCENTEQ 13 // '%='
#define PS_AMP 14 // '&'
#define PS_AMPAMP 15 // '&&'
#define PS_AMPEQ 16 // '&='
#define PS_LPAREN 17 // '('
#define PS_RPAREN 18 // ')'
#define PS_TIMES 19 // '*'
#define PS_TIMESEQ 20 // '*='
#define PS_COMMA 21 // ','
#define PS_DOT 22 // '.'
#define PS_DIV 23 // '/'
#define PS_DIVEQ 24 // '/='
#define PS_COLON 25 // ':'
#define PS_SEMI 26 // ';'
#define PS_LBRACKET 27 // '['
#define PS_RBRACKET 28 // ']'
#define PS_CARET 29 // '^'
#define PS_CARETEQ 30 // '^='
#define PS_LBRACE 31 // '{'
#define PS_PIPE 32 // '|'
#define PS_PIPEPIPE 33 // '||'
#define PS_PIPEEQ 34 // '|='
#define PS_RBRACE 35 // '}'
#define PS_TILDE 36 // '~'
#define PS_PLUS 37 // '+'
#define PS_PLUSPLUS 38 // '++'
#define PS_PLUSEQ 39 // '+='
#define PS_LT 40 // '<'
#define PS_LTLT 41 // '<<'
#define PS_LTLTEQ 42 // '<<='
#define PS_LTEQ 43 // '<='
#define PS_EQ 44 // '='
#define PS_MINUSEQ 45 // '-='
#define PS_EQEQ 46 // '=='
#define PS_EQGT 47 // '=>'
#define PS_GT 48 // '>'
#define PS_MINUSGT 49 // '->'
#define PS_GTEQ 50 // '>='
#define PS_GTGT 51 // '>>'
#define PS_GTGTEQ 52 // '>>='
#define PS_ABSTRACT 53 // abstract
#define PS_AS 54 // as
#define PS_BINLITERAL 55 // BinLiteral
#define PS_BREAK 56 // break
#define PS_BYTE 57 // byte
#define PS_CASE 58 // case
#define PS_CHAR 59 // char
#define PS_CHARLITERAL 60 // CharLiteral
#define PS_CLASS 61 // class
#define PS_CONTINUE 62 // continue
#define PS_DECLITERAL 63 // DecLiteral
#define PS_DELETE 64 // delete
#define PS_DO 65 // do
#define PS_DOUBLE 66 // double
#define PS_ELSE 67 // else
#define PS_ENUM 68 // enum
#define PS_EXTENDS 69 // extends
#define PS_EXTERN 70 // extern
#define PS_FINAL 71 // final
#define PS_FLOAT 72 // float
#define PS_FLOATLITERAL 73 // FloatLiteral
#define PS_FN 74 // fn
#define PS_FOR 75 // for
#define PS_FOREACH 76 // foreach
#define PS_FROM 77 // from
#define PS_FUNCTION 78 // function
#define PS_HEXLITERAL 79 // HexLiteral
#define PS_ID 80 // Id
#define PS_IF 81 // if
#define PS_IMPORT 82 // import
#define PS_IN 83 // in
#define PS_INHERITED 84 // inherited
#define PS_INT 85 // int
#define PS_IS 86 // is
#define PS_LAMBDA 87 // lambda
#define PS_LET 88 // let
#define PS_LONG 89 // long
#define PS_MATCH 90 // match
#define PS_NEW 91 // new
#define PS_NULL 92 // null
#define PS_OCTLITERAL 93 // OctLiteral
#define PS_OPERATOR 94 // operator
#define PS_PRIVATE 95 // private
#define PS_RETURN 96 // return
#define PS_SET 97 // set
#define PS_SHORT 98 // short
#define PS_SIGNED 99 // signed
#define PS_SIZE_T 100 // 'size_t'
#define PS_SIZEOF 101 // sizeof
#define PS_STATIC 102 // static
#define PS_STRINGLITERAL 103 // StringLiteral
#define PS_STRUCT 104 // struct
#define PS_TYPE 105 // type
#define PS_UNSIGNED 106 // unsigned
#define PS_USING 107 // using
#define PS_WHEN 108 // when
#define PS_WHILE 109 // while
#define PS_ABSTRACTCLASS 110 // <Abstract Class>
#define PS_ACDECL 111 // <ACDecl>
#define PS_ACDECLS 112 // <ACDecls>
#define PS_ARG 113 // <Arg>
#define PS_BASE 114 // <Base>
#define PS_BLOCK 115 // <Block>
#define PS_CASEEXPRS 116 // <Case Exprs>
#define PS_CASESTMS 117 // <Case Stms>
#define PS_CDECL 118 // <CDecl>
#define PS_CDECLS 119 // <CDecls>
#define PS_CDEFFUNCDECL 120 // <CDefFunc Decl>
#define PS_CDEFSTRUCT 121 // <CDefStruct>
#define PS_CFUNCDECL 122 // <CFunc Decl>
#define PS_CFUNCPROTO 123 // <CFunc Proto>
#define PS_CLASSDECL 124 // <Class Decl>
#define PS_CLASSNAME 125 // <Class Name>
#define PS_CVARDECL 126 // <CVar Decl>
#define PS_DECL 127 // <Decl>
#define PS_DECLS 128 // <Decls>
#define PS_ELSEMINUSIF 129 // <else-if>
#define PS_ENUMDECL 130 // <Enum Decl>
#define PS_ENUMDEF 131 // <Enum Def>
#define PS_EXPR 132 // <Expr>
#define PS_EXTENDCLASSNAME 133 // <Extend Class Name>
#define PS_EXTENDCLASSNAMELIST 134 // <Extend Class Name List>
#define PS_FILEPATH 135 // <File Path>
#define PS_FILEPATHLIST 136 // <File Path List>
#define PS_FNHEADER 137 // <Fn Header>
#define PS_FNTYPE 138 // <Fn Type>
#define PS_FUNCDECL 139 // <Func Decl>
#define PS_IDLIST 140 // <Id List>
#define PS_IFSTM 141 // <If Stm>
#define PS_IMPORT2 142 // <Import>
#define PS_LAMBDAEXPR 143 // <Lambda Expr>
#define PS_NEWEXPR 144 // <New Expr>
#define PS_NORMALCLASS 145 // <Normal Class>
#define PS_NORMALSTM 146 // <Normal Stm>
#define PS_OPADD 147 // <Op Add>
#define PS_OPAND 148 // <Op And>
#define PS_OPASSIGN 149 // <Op Assign>
#define PS_OPBINAND 150 // <Op BinAND>
#define PS_OPBINOR 151 // <Op BinOR>
#define PS_OPBINXOR 152 // <Op BinXOR>
#define PS_OPCOMPARE 153 // <Op Compare>
#define PS_OPEQUATE 154 // <Op Equate>
#define PS_OPHEADER 155 // <Op Header>
#define PS_OPMULT 156 // <Op Mult>
#define PS_OPOR 157 // <Op Or>
#define PS_OPPOINTER 158 // <Op Pointer>
#define PS_OPSHIFT 159 // <Op Shift>
#define PS_OPUNARY 160 // <Op Unary>
#define PS_OPERATOR2 161 // <Operator>
#define PS_OPERATORSTM 162 // <Operator Stm>
#define PS_PARAM 163 // <Param>
#define PS_PARAMS 164 // <Params>
#define PS_PKG 165 // <Pkg>
#define PS_PRIVATEFINALSTATICINHERITED 166 // <private final static inherited>
#define PS_SCALAR 167 // <Scalar>
#define PS_SETDECL 168 // <Set Decl>
#define PS_SIGN 169 // <Sign>
#define PS_STM 170 // <Stm>
#define PS_STMLIST 171 // <Stm List>
#define PS_TYPE2 172 // <Type>
#define PS_TYPECONSTRUCTOR 173 // <Type Constructor>
#define PS_TYPES 174 // <Types>
#define PS_USINGSTM 175 // <Using Stm>
#define PS_VALUE 176 // <Value>
#define PS_VARDECL 177 // <Var Decl>
#define PS_VARHEADER 178 // <Var Header>

#endif
