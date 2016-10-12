
#include "Defines.h"
#include "Parser.h"
#include "Ast.h"

#include <string>

EntryExpr::EntryExpr(std::string name){
    this->name = name;
}

std::string EntryExpr::toString() {
    return "Package Entry [name: " + this->name +"]";
}

ImportNormalExpr::ImportNormalExpr(PkgExpr pkg){
    this->pkg = pkg;
}

std::string ImportNormalExpr::toString(){
    return "ImportNormalExpr [pkg: "+pkg.toString()+"]";
}

bool ImportNormalExpr::verify(){
    /* TODO: make sure package exists physically */
    return true;
}

ImportAllExpr::ImportAllExpr(PkgExpr pkg){
    this->pkg = pkg;
}

std::string Impo
