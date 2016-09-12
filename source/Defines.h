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
#define PS_LBRACE 32 // '{'
#define PS_PIPE 33 // '|'
#define PS_PIPEPIPE 34 // '||'
#define PS_PIPEEQ 35 // '|='
#define PS_RBRACE 36 // '}'
#define PS_TILDE 37 // '~'
#define PS_PLUS 38 // '+'
#define PS_PLUSPLUS 39 // '++'
#define PS_PLUSEQ 40 // '+='
#define PS_LT 41 // '<'
#define PS_LTLT 42 // '<<'
#define PS_LTLTEQ 43 // '<<='
#define PS_LTEQ 44 // '<='
#define PS_EQ 45 // '='
#define PS_MINUSEQ 46 // '-='
#define PS_EQEQ 47 // '=='
#define PS_EQGT 48 // '=>'
#define PS_GT 49 // '>'
#define PS_MINUSGT 50 // '->'
#define PS_GTEQ 51 // '>='
#define PS_GTGT 52 // '>>'
#define PS_GTGTEQ 53 // '>>='
#define PS_ABSTRACT 54 // abstract
#define PS_AS 55 // as
#define PS_BINLITERAL 56 // BinLiteral
#define PS_BREAK 57 // break
#define PS_BYTE 58 // byte
#define PS_CASE 59 // case
#define PS_CHAR 60 // char
#define PS_CHARLITERAL 61 // CharLiteral
#define PS_CLASS 62 // class
#define PS_CONTINUE 63 // continue
#define PS_DECLITERAL 64 // DecLiteral
#define PS_DELETE 65 // delete
#define PS_DO 66 // do
#define PS_DOUBLE 67 // double
#define PS_ELSE 68 // else
#define PS_ENUM 69 // enum
#define PS_EXTENDS 70 // extends
#define PS_EXTERN 71 // extern
#define PS_FINAL 72 // final
#define PS_FLOAT 73 // float
#define PS_FLOATLITERAL 74 // FloatLiteral
#define PS_FN 75 // fn
#define PS_FOR 76 // for
#define PS_FOREACH 77 // foreach
#define PS_FROM 78 // from
#define PS_FUNCTION 79 // function
#define PS_HEXLITERAL 80 // HexLiteral
#define PS_ID 81 // Id
#define PS_IF 82 // if
#define PS_IMPORT 83 // import
#define PS_IN 84 // in
#define PS_INHERITED 85 // inherited
#define PS_INT 86 // int
#define PS_IS 87 // is
#define PS_LAMBDA 88 // lambda
#define PS_LET 89 // let
#define PS_LONG 90 // long
#define PS_MATCH 91 // match
#define PS_NEW 92 // new
#define PS_NULL 93 // null
#define PS_OCTLITERAL 94 // OctLiteral
#define PS_OPERATOR 95 // operator
#define PS_PRIVATE 96 // private
#define PS_RETURN 97 // return
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
#define PS_CSE 126 // <CSE>
#define PS_CVARDECL 127 // <CVar Decl>
#define PS_DECL 128 // <Decl>
#define PS_DECLS 129 // <Decls>
#define PS_ELSEMINUSIF 130 // <else-if>
#define PS_ENUMDECL 131 // <Enum Decl>
#define PS_ENUMDEF 132 // <Enum Def>
#define PS_EXPR 133 // <Expr>
#define PS_EXTENDCLASSNAME 134 // <Extend Class Name>
#define PS_EXTENDCLASSNAMELIST 135 // <Extend Class Name List>
#define PS_FILEPATH 136 // <File Path>
#define PS_FILEPATHALL 137 // <File Path All>
#define PS_FILEPATHLIST 138 // <File Path List>
#define PS_FNHEADERIMPL 139 // <Fn Header Impl>
#define PS_FNHEADERPROTO 140 // <Fn Header Proto>
#define PS_FNTYPE 141 // <Fn Type>
#define PS_FUNCDECL 142 // <Func Decl>
#define PS_IDLIST 143 // <Id List>
#define PS_IFSTM 144 // <If Stm>
#define PS_IMPORT2 145 // <Import>
#define PS_LAMBDAEXPR 146 // <Lambda Expr>
#define PS_NEWEXPR 147 // <New Expr>
#define PS_NORMALCLASS 148 // <Normal Class>
#define PS_NORMALSTM 149 // <Normal Stm>
#define PS_OPADD 150 // <Op Add>
#define PS_OPAND 151 // <Op And>
#define PS_OPASSIGN 152 // <Op Assign>
#define PS_OPBINAND 153 // <Op BinAND>
#define PS_OPBINOR 154 // <Op BinOR>
#define PS_OPBINXOR 155 // <Op BinXOR>
#define PS_OPCOMPARE 156 // <Op Compare>
#define PS_OPEQUATE 157 // <Op Equate>
#define PS_OPHEADERIMPL 158 // <Op Header Impl>
#define PS_OPHEADERPROTO 159 // <Op Header Proto>
#define PS_OPMULT 160 // <Op Mult>
#define PS_OPOR 161 // <Op Or>
#define PS_OPPOINTER 162 // <Op Pointer>
#define PS_OPSHIFT 163 // <Op Shift>
#define PS_OPUNARY 164 // <Op Unary>
#define PS_OPERATOR2 165 // <Operator>
#define PS_OPERATORIMPL 166 // <Operator Impl>
#define PS_OPERATORPROTO 167 // <Operator Proto>
#define PS_PARAM 168 // <Param>
#define PS_PARAMS 169 // <Params>
#define PS_PKG 170 // <Pkg>
#define PS_PRIVATEFINALSTATICINHERITED 171 // <private final static inherited>
#define PS_SCALAR 172 // <Scalar>
#define PS_SIGN 173 // <Sign>
#define PS_STM 174 // <Stm>
#define PS_STMLIST 175 // <Stm List>
#define PS_TYPE2 176 // <Type>
#define PS_TYPES 177 // <Types>
#define PS_USINGSTM 178 // <Using Stm>
#define PS_VALUE 179 // <Value>
#define PS_VARDECL 180 // <Var Decl>
#define PS_VARHEADER 181 // <Var Header>

#endif
