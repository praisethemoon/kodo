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

#include <iostream>
#include <cstdio>
#include <cstring>

#include "Berserk.h"
#include "Defines.h"
#include "Engine.h"
#include "Parser.h"
#include "FileUtils.h"
#include "CompilationHandler.h"
#include "Compiler.h"

void parseCmd(int argc, char* argv[])
{
    if (argc == 1)
    {
        fprintf(stderr, "Invalid argument count\n");
    }
    else if (argc == 2)
    {
        if (strcmp(argv[1], "-x") == 0)
        {
            printf("%s", BERSERK_LOGO);
        }
        else
        {
            fprintf(stderr, "Invalid argument '%s'\n", argv[1]);
        }

    }
    else if (argc == 3)
    {
        if (strcmp(argv[1], "-c") == 0)
        {
            CompilationHandler *compilationHandler = new CompilationHandler();
            CompilationService* service = compilationHandler->createFromSource(argv[2]);
            service ->run();
            delete service;
            delete compilationHandler;
        }
        else if(strcmp(argv[1], "-lua") == 0)
        {
            CompilationHandler *compilationHandler = new CompilationHandler();
            CompilationService* service = compilationHandler->createFromMakefile(argv[2]);
            service->run();
            delete service;
            delete compilationHandler;
        }
    }
}

int main(int argc, char *argv[]){
    printf("%s", BERSERK_LOGO);
    parseCmd(argc, argv);

    return 0;
}
