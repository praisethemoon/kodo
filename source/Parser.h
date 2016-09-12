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

#ifndef BERSERKPARSER_H
#define BERSERKPARSER_H

#include <cwchar>
#include <vector>
#include <string>
#include "Engine.h"

class ContextStruct {
public:
    size_t id;
    wchar_t *ReturnValue;             /* In this template all rules return a string. */
    int Indent;                       /* For printing debug messages. */
    int Debug;
};

class Import;
class ImportExpr;
class ImportAllExpr;
class ImportAsExpr;
class ImportFromExpr;

class FunctionHeader;

class Function;
class FunctionBlock;
class FunctionExpr;

class ClassFunctionProto;
class ClassFunctionBodyImpl;
class ClassFunctionBlockImpl;

class ExternType;
class ExternFunctionProto;

class Param;

class Type;

class Id;

class ClassDecl;
class AbstractClassDecl;
class ClassExtend;
class ClassVarDecl;

class UsingExpr;

class OperatorHeader;

class OperatorOverloadExpr;
class OperatorOverloadBody;

class VarDecl;

class EnumDecl;
class SetDecl;

class Type;
class FnType;
class BaseType;
class ArrayType;
class TemplateType;

class Stm;
class VarDeclStm;
class IfStm;
class WhileStm;
class ForStm;
class ForeachStm;
class DoWhileStm;
class MatchStm;
class BlockStm;
class Expr;
class BreakStm;
class ContinueStm;
class ReturnStm;
class EmptyStm;

class CaseStm;
class CaseWhenStm;
class CaseElseStm;

class VarDeclInExpr;
class FuncDeclInExpr;
class MatchExpr;
class CommaExpr;

/*** case */
class CaseWhenExpr;
class CaseExpr;
class CaseElseExpr;

class OpBinary;
class OpAssign;
class OpAddAssign;
class OpSubAssign;
class OpMultAssign;
class OpDivAssign;
class OpModAssign;
class OpBXOrAssign;
class OpBAndAssign;
class OpBOrAssign;
class OpLShiftAssign;
class OpRShiftAssign;
class OpOr;
class OpAnd;
class OpBOr;
class OpBXor;
class OpBAnd;
class OpEq;
class OpNotEq;
class OpS;
class OpG;
class OpSEq;
class OpGEq;
class OpIs;
class OpIn;
class OpLShift;
class OpRShift;
class OpAdd;
class OpSub;
class OpMult;
class OpDiv;
class OpMod;

/* type casting */
class OpAs;

class OpUnary;
class OpNot;
class OpBNot; // ~ bitwise not
class OpUnarySub;
class OpLRInc; // Left to right ++x
class OpLRDec; // Left to right --x
class OpRLInc; // Right to left x++
class OpRLDec; // Right to left x--
class OpNew;
class OpDelete;
class OpSizeOf;

class OpDot; // .
class OpIndex; // x[y]
class OpFnCall;

class Value;
class OctNumber;
class HexNumber;
class DecNumber;
class BinNumber;
class FloatNumber;

class SQString;
class DQString;

class Null;

class Pkg;

class LambdaExpr;
class ArrayConstruct;

class LambdaBlock;
class LambdaExpr;

class OpNew_;
class OpNewClass;

/* this is the top level expr. */
class PackageExpr: public ContextStruct
{
public:
    std::vector<VarDecl*> vars;
    std::vector<Function*> funcs;
    std::vector<ClassDecl*> classes;
    std::vector<UsingExpr*> usings;
    std::vector<EnumDecl*> enums;
    std::vector<ExternType*> externTypes;
    std::vector<ExternFunctionProto*> externFuncs;
    std::vector<Import> imports;

    std::vector<std::string> currentPkg;
};

class Import: public ContextStruct{
public:
    /* make sure pkg exist */
    virtual bool verify() = 0;
};

class ImportExpr: public ContextStruct{
public:
    std::vector<std::string> pkg;
    virtual bool verify() {

    }
};

class ImportAllExpr: public ContextStruct{
public:
    std::vector<std::string> pkg;
};

class ImportAsExpr: public ContextStruct{
public:
    std::vector<std::string> pkg;
    std::string as;
};

class ImportFromsExpr: public ContextStruct{
public:
    std::vector<std::string> imports;
    std::string from;
};



extern void (*RuleJumpTable[])(struct TokenStruct *Token, struct ContextStruct *Context);
void ReadableString(wchar_t *Input, wchar_t *Output, long Width);

#endif // PARSER_H
