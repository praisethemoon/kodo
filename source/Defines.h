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
#define PS_BINLITERAL 57 // BinLiteral
#define PS_BREAK 58 // break
#define PS_BYTE 59 // byte
#define PS_CASE 60 // case
#define PS_CHAR 61 // char
#define PS_CHARLITERAL 62 // CharLiteral
#define PS_CLASS 63 // class
#define PS_CONTINUE 64 // continue
#define PS_DECLITERAL 65 // DecLiteral
#define PS_DELETE 66 // delete
#define PS_DO 67 // do
#define PS_DOUBLE 68 // double
#define PS_ELSE 69 // else
#define PS_ENUM 70 // enum
#define PS_EXTENDS 71 // extends
#define PS_EXTERN 72 // extern
#define PS_FINAL 73 // final
#define PS_FLOAT 74 // float
#define PS_FLOATLITERAL 75 // FloatLiteral
#define PS_FN 76 // fn
#define PS_FOR 77 // for
#define PS_FOREACH 78 // foreach
#define PS_FROM 79 // from
#define PS_FUNCTION 80 // function
#define PS_HEXLITERAL 81 // HexLiteral
#define PS_ID 82 // Id
#define PS_IF 83 // if
#define PS_IMPORT 84 // import
#define PS_IN 85 // in
#define PS_INHERITED 86 // inherited
#define PS_INT 87 // int
#define PS_IS 88 // is
#define PS_LAMBDA 89 // lambda
#define PS_LET 90 // let
#define PS_LOCAL 91 // local
#define PS_LONG 92 // long
#define PS_MATCH 93 // match
#define PS_NEW 94 // new
#define PS_NULL 95 // null
#define PS_OCTLITERAL 96 // OctLiteral
#define PS_OPERATOR 97 // operator
#define PS_PRIVATE 98 // private
#define PS_RETURN 99 // return
#define PS_SHORT 100 // short
#define PS_SIGNED 101 // signed
#define PS_SIZE_T 102 // 'size_t'
#define PS_SIZEOF 103 // sizeof
#define PS_STATIC 104 // static
#define PS_STRINGLITERAL 105 // StringLiteral
#define PS_STRUCT 106 // struct
#define PS_TYPE 107 // type
#define PS_UNSIGNED 108 // unsigned
#define PS_USING 109 // using
#define PS_WHEN 110 // when
#define PS_WHILE 111 // while
#define PS_ABSTRACTCLASS 112 // <Abstract Class>
#define PS_ACDECL 113 // <ACDecl>
#define PS_ACDECLS 114 // <ACDecls>
#define PS_ARG 115 // <Arg>
#define PS_BASE 116 // <Base>
#define PS_BLOCK 117 // <Block>
#define PS_CASEEXPRS 118 // <Case Exprs>
#define PS_CASESTMS 119 // <Case Stms>
#define PS_CDECL 120 // <CDecl>
#define PS_CDECLS 121 // <CDecls>
#define PS_CDEFFUNCDECL 122 // <CDefFunc Decl>
#define PS_CDEFSTRUCT 123 // <CDefStruct>
#define PS_CFUNCDECL 124 // <CFunc Decl>
#define PS_CFUNCPROTO 125 // <CFunc Proto>
#define PS_CLASSDECL 126 // <Class Decl>
#define PS_CLASSNAME 127 // <Class Name>
#define PS_CSE 128 // <CSE>
#define PS_CVARDECL 129 // <CVar Decl>
#define PS_DECL 130 // <Decl>
#define PS_DECLS 131 // <Decls>
#define PS_ELSEMINUSIF 132 // <else-if>
#define PS_ENUMDECL 133 // <Enum Decl>
#define PS_ENUMDEF 134 // <Enum Def>
#define PS_EXPR 135 // <Expr>
#define PS_EXTENDCLASSNAME 136 // <Extend Class Name>
#define PS_EXTENDCLASSNAMELIST 137 // <Extend Class Name List>
#define PS_FILEPATH 138 // <File Path>
#define PS_FILEPATHALL 139 // <File Path All>
#define PS_FILEPATHLIST 140 // <File Path List>
#define PS_FNHEADERIMPL 141 // <Fn Header Impl>
#define PS_FNHEADERPROTO 142 // <Fn Header Proto>
#define PS_FNTYPE 143 // <Fn Type>
#define PS_FUNCDECL 144 // <Func Decl>
#define PS_IDLIST 145 // <Id List>
#define PS_IFSTM 146 // <If Stm>
#define PS_IMPORT2 147 // <Import>
#define PS_LAMBDAEXPR 148 // <Lambda Expr>
#define PS_NEWEXPR 149 // <New Expr>
#define PS_NORMALCLASS 150 // <Normal Class>
#define PS_NORMALSTM 151 // <Normal Stm>
#define PS_OPADD 152 // <Op Add>
#define PS_OPAND 153 // <Op And>
#define PS_OPASSIGN 154 // <Op Assign>
#define PS_OPBINAND 155 // <Op BinAND>
#define PS_OPBINOR 156 // <Op BinOR>
#define PS_OPBINXOR 157 // <Op BinXOR>
#define PS_OPCOMPARE 158 // <Op Compare>
#define PS_OPEQUATE 159 // <Op Equate>
#define PS_OPHEADERIMPL 160 // <Op Header Impl>
#define PS_OPHEADERPROTO 161 // <Op Header Proto>
#define PS_OPMULT 162 // <Op Mult>
#define PS_OPOR 163 // <Op Or>
#define PS_OPPOINTER 164 // <Op Pointer>
#define PS_OPSHIFT 165 // <Op Shift>
#define PS_OPUNARY 166 // <Op Unary>
#define PS_OPERATOR2 167 // <Operator>
#define PS_OPERATORIMPL 168 // <Operator Impl>
#define PS_OPERATORPROTO 169 // <Operator Proto>
#define PS_PARAM 170 // <Param>
#define PS_PARAMS 171 // <Params>
#define PS_PKG 172 // <Pkg>
#define PS_PRIVATEFINALSTATICINHERITED 173 // <private final static inherited>
#define PS_SCALAR 174 // <Scalar>
#define PS_SIGN 175 // <Sign>
#define PS_STM 176 // <Stm>
#define PS_STMLIST 177 // <Stm List>
#define PS_TYPE2 178 // <Type>
#define PS_TYPES 179 // <Types>
#define PS_USINGSTM 180 // <Using Stm>
#define PS_VALUE 181 // <Value>
#define PS_VARDECL 182 // <Var Decl>
#define PS_VARHEADER 183 // <Var Header>

#endif
