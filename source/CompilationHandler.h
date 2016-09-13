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


#ifndef COMPILATIONHANDLER_H
#define COMPILATIONHANDLER_H

#include <vector>
#include <string>
#include <thread>
#include "Compiler.h"

#include "lua/lua.hpp"

class CompilationService;

class CompilationHandler
{
    std::vector<std::string> files;
    std::vector<std::thread> threads;

    const short int maxThreads = 10;
public:
    CompilationHandler();
    CompilationService* createFromMakefile(std::string);
    CompilationService* createFromSource(std::string);
    ~CompilationHandler();
};

class CompilationService{
protected:
    CompilationHandler* compilationHandler;
public:
    CompilationService(CompilationHandler*);
    ~CompilationService();
    virtual void run() = 0;
};

class MakefileCompilationService: public CompilationService {
    std::string makefileSource;
    lua_State *L;
public:
    MakefileCompilationService(CompilationHandler*, std::string);
    ~MakefileCompilationService();
    virtual void run();
};

class FileCompilationService: public CompilationService {
public:
    Compiler *compiler;
    std::string filepath;

    FileCompilationService(CompilationHandler*, std::string);
    ~FileCompilationService();

    virtual void run();
};

#endif // COMPILATIONHANDLER_H
