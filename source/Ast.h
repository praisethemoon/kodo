#ifndef AST_H
#define AST_H

#include "Parser.h"

/* Mother of all life */
class Expr;

/* Main Entry */
class PkgExpr;

/* imports */
class ImportExpr;
class ImportAllExpr;
class ImportAsExpr;
class ImportFromExpr;
class FilePathExpr;
class FilePathAllExpr;
class FilePathListExpr;

/* function decl */
class FnHeaderProtoExpr;
class FnHeaderProtoParamsExpr;
class FnHeaderProtoTypesExpr;
class FnHeaderImplExpr;
class FuncDeclExpr;
class FuncBodyExpr;

/* class function decl/impl */
class CFuncProtoExpr;
class CFuncDeclExpr;
class VisibilityExpr;
class InheritedExpr;
class OperatorImplExpr;
class OperatorProtoExpr;
class OperatorHeaderProtoExpr;
class OperatorHeaderImplExpr;
class ClassVarDeclExpr;

/* generic */
class ParamsExpr;
class ParamExpr;
class IdListExpr;

/* class declaration */
class ClassExpr;
class ExtendClassNameListExpr;
class ExtendClassNameExpr;

class OperatorExpr;

/* var decl */

class VarDeclExpr;
class VarHeader;

/* enums */

class EnumDeclExpr;
class EnumDefListExpr;

/* types */
class TypeExpr;
class TypesExpr;
class BaseTypeExpr;
class FnTypeExpr;
class ArrayExpr;
class TupleExpr;
class PkgExpr;
class PkgTemplateExpr;


class AstStm;
class AstVarDeclStm;
class AstIfStm;
class AstWhileStm;
class AstForStm;
class AstForeachStm;
class AstDoWhileStm;
class AstMatchStm;
class AstBlockStm;
class AstExpr;
class AstBreakStm;
class AstContinueStm;
class AstReturnStm;
class AstEmptyStm;

class AstCaseStm;
class AstCaseWhenStm;
class AstCaseElseStm;

class AstVarDeclInExpr;
class AstFuncDeclInExpr;
class AstMatchExpr;
class AstCommaExpr;

/*** case */
class AstCaseWhenExpr;
class AstCaseExpr;
class AstCaseElseExpr;

class AstOpBinary;
class AstOpAssign;
class AstOpAddAssign;
class AstOpSubAssign;
class AstOpMultAssign;
class AstOpDivAssign;
class AstOpModAssign;
class AstOpBXOrAssign;
class AstOpBAndAssign;
class AstOpBOrAssign;
class AstOpLShiftAssign;
class AstOpRShiftAssign;
class AstOpOr;
class AstOpAnd;
class AstOpBOr;
class AstOpBXor;
class AstOpBAnd;
class AstOpEq;
class AstOpNotEq;
class AstOpS;
class AstOpG;
class AstOpSEq;
class AstOpGEq;
class AstOpIs;
class AstOpIn;
class AstOpLShift;
class AstOpRShift;
class AstOpAdd;
class AstOpSub;
class AstOpMult;
class AstOpDiv;
class AstOpMod;

/* type casting */
class AstOpAs;

class AstOpUnary;
class AstOpNot;
class AstOpBNot; // ~ bitwise not
class AstOpUnarySub;
class AstOpLRInc; // Left to right ++x
class AstOpLRDec; // Left to right --x
class AstOpRLInc; // Right to left x++
class AstOpRLDec; // Right to left x--
class AstOpNew;
class AstOpDelete;
class AstOpSizeOf;

class AstOpDot; // .
class AstOpIndex; // x[y]
class AstOpFnCall;

class AstValue;
class AstOctNumber;
class AstHexNumber;
class AstDecNumber;
class AstBinNumber;
class AstFloatNumber;

class AstSQString;
class AstDQString;

class AstNull;

class AstPkg;

class AstLambdaExpr;
class AstArrayConstruct;

class AstLambdaBlock;
class AstLambdaExpr;

class AstOpNew_;
class AstOpNewClass;


/* todo: use unordered set instead of vector */

/* this is the top level expr. */
class AstPackageExpr: public ContextStruct
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

class AstImport: public ContextStruct{
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



#endif // AST_H
