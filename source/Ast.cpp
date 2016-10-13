
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

ImportNormalExpr::ImportNormalExpr(FilePathExpr* pkg){
    this->pkg = pkg;
}

std::string ImportNormalExpr::toString(){
    return "ImportNormalExpr [pkg: "+pkg->toString()+"]";
}

bool ImportNormalExpr::verify(){
    /* TODO: make sure package exists physically */
    return true;
}

ImportAllExpr::ImportAllExpr(FilePathExpr* pkg){
    this->pkg = pkg;
}

std::string ImportAllExpr::toString(){
    return "ImportAllExpr [pkg: "+pkg->toString()+".*]";
}

bool ImportAllExpr::verify(){
    /* TODO: make sure package exists physically */
    return true;
}

ImportAsExpr::ImportAsExpr(FilePathExpr* pkg, std::string as){
    this->pkg = pkg;
    this->as = as;
}

std::string ImportAsExpr::toString(){
    return "ImportAsExpr [pkg: " + pkg->toString() + " as " + as + "]";
}

bool ImportAsExpr::verify(){
    /* TODO: make sure package exists physically */
    return true;
}