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
#define PS_MINUS 8 // '-'
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
#define PS_DOTTIMES 23 // '.*'
#define PS_DIV 24 // '/'
#define PS_DIVEQ 25 // '/='
#define PS_COLON 26 // ':'
#define PS_SEMI 27 // ';'
#define PS_LBRACKET 28 // '['
#define PS_RBRACKET 29 // ']'
#define PS_CARET 30 // '^'
#define PS_CARETEQ 31 // '^='
#define PS__ 32 // '_'
#define PS_LBRACE 33 // '{'
#define PS_PIPE 34 // '|'
#define PS_PIPEPIPE 35 // '||'
#define PS_PIPEEQ 36 // '|='
#define PS_RBRACE 37 // '}'
#define PS_TILDE 38 // '~'
#define PS_PLUS 39 // '+'
#define PS_PLUSPLUS 40 // '++'
#define PS_PLUSEQ 41 // '+='
#define PS_LT 42 // '<'
#define PS_LTLT 43 // '<<'
#define PS_LTLTEQ 44 // '<<='
#define PS_LTEQ 45 // '<='
#define PS_EQ 46 // '='
#define PS_MINUSEQ 47 // '-='
#define PS_EQEQ 48 // '=='
#define PS_EQGT 49 // '=>'
#define PS_GT 50 // '>'
#define PS_MINUSGT 51 // '->'
#define PS_GTEQ 52 // '>='
#define PS_GTGT 53 // '>>'
#define PS_GTGTEQ 54 // '>>='
#define PS_ABSTRACT 55 // abstract
#define PS_AS 56 // as
#define PS_ATOMIC 57 // atomic
#define PS_BINLITERAL 58 // BinLiteral
#define PS_BOOL 59 // bool
#define PS_BREAK 60 // break
#define PS_BYTE 61 // byte
#define PS_CASE 62 // case
#define PS_CHAR 63 // char
#define PS_CHARLITERAL 64 // CharLiteral
#define PS_CLASS 65 // class
#define PS_CONTINUE 66 // continue
#define PS_DECLITERAL 67 // DecLiteral
#define PS_DELETE 68 // delete
#define PS_DO 69 // do
#define PS_DOUBLE 70 // double
#define PS_ELSE 71 // else
#define PS_ENUM 72 // enum
#define PS_EXTENDS 73 // extends
#define PS_EXTERN 74 // extern
#define PS_FALSE 75 // false
#define PS_FINAL 76 // final
#define PS_FLOAT 77 // float
#define PS_FLOATLITERAL 78 // FloatLiteral
#define PS_FN 79 // fn
#define PS_FOR 80 // for
#define PS_FOREACH 81 // foreach
#define PS_FROM 82 // from
#define PS_FUNCTION 83 // function
#define PS_HEXLITERAL 84 // HexLiteral
#define PS_ID 85 // Id
#define PS_IF 86 // if
#define PS_IMPORT 87 // import
#define PS_IN 88 // in
#define PS_INHERITED 89 // inherited
#define PS_INT 90 // int
#define PS_IS 91 // is
#define PS_LAMBDA 92 // lambda
#define PS_LET 93 // let
#define PS_LOCAL 94 // local
#define PS_LONG 95 // long
#define PS_MATCH 96 // match
#define PS_NEW 97 // new
#define PS_NULL 98 // null
#define PS_OCTLITERAL 99 // OctLiteral
#define PS_OPERATOR 100 // operator
#define PS_PRIVATE 101 // private
#define PS_PROTECTED 102 // protected
#define PS_PUBLIC 103 // public
#define PS_PURE 104 // pure
#define PS_RETURN 105 // return
#define PS_SHORT 106 // short
#define PS_SIGNED 107 // signed
#define PS_SIZE_T 108 // 'size_t'
#define PS_SIZEOF 109 // sizeof
#define PS_STATIC 110 // static
#define PS_STRINGLITERAL 111 // StringLiteral
#define PS_STRUCT 112 // struct
#define PS_SYNCHRONIZED 113 // synchronized
#define PS_TRUE 114 // true
#define PS_UNSIGNED 115 // unsigned
#define PS_USING 116 // using
#define PS_WHEN 117 // when
#define PS_WHILE 118 // while
#define PS_ABSTRACTCLASS 119 // <Abstract Class>
#define PS_ACDECL 120 // <ACDecl>
#define PS_ACDECLS 121 // <ACDecls>
#define PS_ARG 122 // <Arg>
#define PS_BASE 123 // <Base>
#define PS_BLOCK 124 // <Block>
#define PS_CASEEXPRS 125 // <Case Exprs>
#define PS_CASESTMS 126 // <Case Stms>
#define PS_CDECL 127 // <CDecl>
#define PS_CDECLS 128 // <CDecls>
#define PS_CDEFFUNCDECL 129 // <CDefFunc Decl>
#define PS_CDEFSTRUCT 130 // <CDefStruct>
#define PS_CFUNCDECL 131 // <CFunc Decl>
#define PS_CFUNCPROTO 132 // <CFunc Proto>
#define PS_CLASSDECL 133 // <Class Decl>
#define PS_CLASSNAME 134 // <Class Name>
#define PS_CSE 135 // <CSE>
#define PS_CVARDECL 136 // <CVar Decl>
#define PS_DECL 137 // <Decl>
#define PS_DECLLIST 138 // <Decl List>
#define PS_DECLS 139 // <Decls>
#define PS_ELSEMINUSIF 140 // <else-if>
#define PS_ENUMDECL 141 // <Enum Decl>
#define PS_ENUMDEF 142 // <Enum Def>
#define PS_EXPR 143 // <Expr>
#define PS_EXTENDCLASSNAME 144 // <Extend Class Name>
#define PS_EXTENDCLASSNAMELIST 145 // <Extend Class Name List>
#define PS_FILEPATH 146 // <File Path>
#define PS_FILEPATHALL 147 // <File Path All>
#define PS_FILEPATHLIST 148 // <File Path List>
#define PS_FNHEADERIMPL 149 // <Fn Header Impl>
#define PS_FNHEADERPROTO 150 // <Fn Header Proto>
#define PS_FNTYPE 151 // <Fn Type>
#define PS_FUNCBODY 152 // <Func Body>
#define PS_FUNCDECL 153 // <Func Decl>
#define PS_IDLIST 154 // <Id List>
#define PS_IFSTM 155 // <If Stm>
#define PS_IMPORT2 156 // <Import>
#define PS_IMPORTS 157 // <Imports>
#define PS_INHERITED2 158 // <Inherited>
#define PS_LAMBDAEXPR 159 // <Lambda Expr>
#define PS_NEWEXPR 160 // <New Expr>
#define PS_NORMALCLASS 161 // <Normal Class>
#define PS_NORMALSTM 162 // <Normal Stm>
#define PS_OPADD 163 // <Op Add>
#define PS_OPAND 164 // <Op And>
#define PS_OPASSIGN 165 // <Op Assign>
#define PS_OPBINAND 166 // <Op BinAND>
#define PS_OPBINOR 167 // <Op BinOR>
#define PS_OPBINXOR 168 // <Op BinXOR>
#define PS_OPCOMPARE 169 // <Op Compare>
#define PS_OPEQUATE 170 // <Op Equate>
#define PS_OPHEADERIMPL 171 // <Op Header Impl>
#define PS_OPHEADERPROTO 172 // <Op Header Proto>
#define PS_OPMULT 173 // <Op Mult>
#define PS_OPOR 174 // <Op Or>
#define PS_OPPOINTER 175 // <Op Pointer>
#define PS_OPSHIFT 176 // <Op Shift>
#define PS_OPUNARY 177 // <Op Unary>
#define PS_OPERATOR2 178 // <Operator>
#define PS_OPERATORIMPL 179 // <Operator Impl>
#define PS_OPERATORPROTO 180 // <Operator Proto>
#define PS_PARAM 181 // <Param>
#define PS_PARAMS 182 // <Params>
#define PS_PKG 183 // <Pkg>
#define PS_PKGLIST 184 // <Pkg List>
#define PS_PKGTEMPLATE 185 // <Pkg Template>
#define PS_SCALAR 186 // <Scalar>
#define PS_SIGN 187 // <Sign>
#define PS_STM 188 // <Stm>
#define PS_STMLIST 189 // <Stm List>
#define PS_TYPE 190 // <Type>
#define PS_TYPES 191 // <Types>
#define PS_USINGSTM 192 // <Using Stm>
#define PS_USINGSTMS 193 // <Using Stms>
#define PS_VALUE 194 // <Value>
#define PS_VARDECL 195 // <Var Decl>
#define PS_VARHEADER 196 // <Var Header>
#define PS_VISIBILITY 197 // <Visibility>


#endif
