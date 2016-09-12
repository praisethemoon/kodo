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

#include <vector>
#include <string>
#include <thread>
#include "CompilationHandler.h"
#include "FileUtils.h"
#include "Compiler.h"

/*
 * CompilationHandler
 */

CompilationHandler::CompilationHandler()
{

}

CompilationHandler::~CompilationHandler()
{

}

CompilationService* CompilationHandler::createFromMakefile(std::string makefile)
{
    /* TODO Feature */
    return NULL;
}

CompilationService* CompilationHandler::createFromSource(std::string source)
{
    return new FileCompilationService(this, source);
}

/*
 * CompilationService
 */

CompilationService::CompilationService(CompilationHandler *compilationHandler)
{
    this->compilationHandler = compilationHandler;
}

CompilationService::~CompilationService()
{

}

/*
 *  MakefileCompilationService
 */

MakefileCompilationService::MakefileCompilationService(CompilationHandler *compilationHandler): CompilationService(compilationHandler)
{

}

MakefileCompilationService::~MakefileCompilationService()
{

}

void MakefileCompilationService::run()
{

}

/*
 * FileCompilationService
 */

FileCompilationService::FileCompilationService(CompilationHandler * compilationHandler, std::string source): CompilationService(compilationHandler)
{
    this->filepath = source;
}

FileCompilationService::~FileCompilationService()
{
    delete compiler;
}

void FileCompilationService::run()
{
    compiler = new Compiler(filepath.c_str());
}
