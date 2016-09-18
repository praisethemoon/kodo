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
#define PS_TYPE 115 // type
#define PS_UNSIGNED 116 // unsigned
#define PS_USING 117 // using
#define PS_WHEN 118 // when
#define PS_WHILE 119 // while
#define PS_ABSTRACTCLASS 120 // <Abstract Class>
#define PS_ACDECL 121 // <ACDecl>
#define PS_ACDECLS 122 // <ACDecls>
#define PS_ARG 123 // <Arg>
#define PS_BASE 124 // <Base>
#define PS_BLOCK 125 // <Block>
#define PS_CASEEXPRS 126 // <Case Exprs>
#define PS_CASESTMS 127 // <Case Stms>
#define PS_CDECL 128 // <CDecl>
#define PS_CDECLS 129 // <CDecls>
#define PS_CDEFFUNCDECL 130 // <CDefFunc Decl>
#define PS_CDEFSTRUCT 131 // <CDefStruct>
#define PS_CFUNCDECL 132 // <CFunc Decl>
#define PS_CFUNCPROTO 133 // <CFunc Proto>
#define PS_CLASSDECL 134 // <Class Decl>
#define PS_CLASSNAME 135 // <Class Name>
#define PS_CSE 136 // <CSE>
#define PS_CVARDECL 137 // <CVar Decl>
#define PS_DECL 138 // <Decl>
#define PS_DECLLIST 139 // <Decl List>
#define PS_DECLS 140 // <Decls>
#define PS_ELSEMINUSIF 141 // <else-if>
#define PS_ENUMDECL 142 // <Enum Decl>
#define PS_ENUMDEF 143 // <Enum Def>
#define PS_EXPR 144 // <Expr>
#define PS_EXTENDCLASSNAME 145 // <Extend Class Name>
#define PS_EXTENDCLASSNAMELIST 146 // <Extend Class Name List>
#define PS_FILEPATH 147 // <File Path>
#define PS_FILEPATHALL 148 // <File Path All>
#define PS_FILEPATHLIST 149 // <File Path List>
#define PS_FNHEADERIMPL 150 // <Fn Header Impl>
#define PS_FNHEADERPROTO 151 // <Fn Header Proto>
#define PS_FNTYPE 152 // <Fn Type>
#define PS_FUNCBODY 153 // <Func Body>
#define PS_FUNCDECL 154 // <Func Decl>
#define PS_IDLIST 155 // <Id List>
#define PS_IFSTM 156 // <If Stm>
#define PS_IMPORT2 157 // <Import>
#define PS_IMPORTS 158 // <Imports>
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
#define PS_PKGTEMPLATE 184 // <Pkg Template>
#define PS_SCALAR 185 // <Scalar>
#define PS_SIGN 186 // <Sign>
#define PS_STM 187 // <Stm>
#define PS_STMLIST 188 // <Stm List>
#define PS_TYPE2 189 // <Type>
#define PS_TYPES 190 // <Types>
#define PS_USINGSTM 191 // <Using Stm>
#define PS_USINGSTMS 192 // <Using Stms>
#define PS_VALUE 193 // <Value>
#define PS_VARDECL 194 // <Var Decl>
#define PS_VARHEADER 195 // <Var Header>
#define PS_VISIBILITY 196 // <Visibility>
