#ifndef AST_H
#define AST_H

#include <string>
#include <vector>

#include "Parser.h"

typedef enum FnFlags{
    LOCAL = 1 << 0,
    SYNC  = 1 << 1,
    PURE  = 1 << 2,
}FnFlags;

/* Mother of all life */
class Expr;

/* Main Entry */
class EntryExpr;

/* imports */
class ImportExpr;
class ImportNormalExpr;
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

class Expr
{
public:
    virtual std::string toString() = 0;
};

class EntryExpr: public Expr{
public:
    /* @param name file name */
    EntryExpr(std::string name);
    virtual std::string toString();

    std::string name;
};

class ImportExpr: public Expr{
public:
    virtual bool verify() = 0;
};

class ImportNormalExpr: public ImportExpr{
public:
    ImportNormalExpr(FilePathExpr* pkg);
    virtual std::string toString();

    FilePathExpr* pkg;
};

class ImportAllExpr: public ImportExpr{
public:
    ImportAllExpr(FilePathExpr* pkg);
    virtual std::string toString();
    virtual bool verify();

    FilePathExpr* pkg;
};

class ImportAsExpr: public ImportExpr{
public:
    ImportAsExpr(FilePathExpr* pkg, std::string as);
    virtual std::string toString();
    virtual bool verify();

    FilePathExpr* pkg;
    std::string as;
};

class ImportFromExpr: public ImportExpr{
public:
    ImportFromExpr(FilePathExpr* from, FilePathExpr* import);
    virtual bool verify();
    virtual std::string toString();

    FilePathExpr *from, *import;
};

class FilePathExpr: public Expr{
public:
    FilePathExpr(std::vector<std::string> path);
    virtual std::string toString();

    std::vector<std::string> path;
};

class FilePathListExpr: public Expr {
public:
    FilePathListExpr(std::vector<FilePathExpr*> list);
    virtual std::string toString();

    std::vector<FilePathExpr*> list;
};

/* functions */
class FnHeaderProtoExpr: public Expr{
public:
    std::string id;

    FnHeaderProtoExpr(std::string id);
};

/* this is the same as FnHeaderImplExpr */
class FnHeaderProtoParamsExpr: public FnHeaderProtoExpr{
public:
    ParamsExpr* params;

    FnHeaderProtoParamsExpr(std::string id, ParamExpr* params);
    virtual std::string toString();
};

class FnHeaderProtoTypesExpr: public FnHeaderProtoExpr{
public:
    TypesExpr* types;

    FnHeaderProtoTypesExpr(std::string id, TypesExpr* types);
    virtual std::string toString();
};

class FuncDeclExpr: public Expr{
public:
    FnHeaderProtoParamsExpr *header;
    FuncBodyExpr *body;
    // FnFlags enum bitflag
    int fnFlags;

    
    FnHeaderProtoParamsExpr(FnHeaderProtoParamsExpr *header,
        FuncBodyExpr *body,
        int fnFlags;
    );
 
    virtual std::string toString();
};
class FuncBodyExpr;

#endif // AST_H
