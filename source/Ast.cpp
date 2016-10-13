
#include <string>
#include <vector>

#include "Defines.h"
#include "Parser.h"
#include "Ast.h"


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

ImportFromExpr::ImportFromExpr(FilePathExpr *from, FilePathExpr *import){
    this->from = from;
    this->import = import;
}

bool ImportFromExpr::verify(){
    /* TODO: make sure package exists physically */
    return true;
}

std::string ImportFromExpr::toString(){
    return "ImportFromExpr[from: "+from->toString()+", import: "+import->toString()+"]";
}

FilePathExpr::FilePathExpr(std::vector<std::string> path){
    this->path = path;
}

std::string FilePathExpr::toString(){
    std::string str = "FilePathExpr[";
    
    for(size_t i = 0; i < path.size()-1; i++)
    {
        str += path[i] + ".";
    }

    str += path[path.size()-1];

    return str;
}

FilePathListExpr::FilePathListExpr(std::vector<FilePathExpr*> list){
    this->list = list;
}

std::string FilePathListExpr::toString(){
    std::string str = "FilePathListExpr[";
    
    for(size_t i = 0; i < list.size()-1; i++)
    {
        str += list[i]->toString() + ".";
    }

    str += path[path.size()-1]->toString();

    return str;
}

/* functions */

/* FnHeaderProtoExpr */
FnHeaderProtoExpr::FnHeaderProtoExpr(std::string id){
    this->id = id;
}

/* FnHeaderProtoParamsExpr */

FnHeaderProtoParamsExpr::FnHeaderProtoParamsExpr(std::string id, ParamExpr* params): FnHeaderProtoExpr(id) {
    this->params = params;
}

std::string FnHeaderProtoParamsExpr::toString(){
    return "FnHeaderProtoParamsExpr[id: "+id+", params: "+params->toString()+"]";
}


/* FnHeaderProtoTypesExpr */

FnHeaderProtoTypesExpr::FnHeaderProtoTypesExpr(std::string id, TypesExpr* types): FnHeaderProtoExpr(id) {
    this->types = types;
}

std::string FnHeaderProtoTypesExpr::toString(){
    return "FnHeaderProtoTypesExpr[id: "+id+", types: "+types->toString()+"]";
}