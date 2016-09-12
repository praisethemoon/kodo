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

#include <cstdlib>
#include <sys/stat.h>
#include <cstdio>
#include <cwchar>
#include <cstring>

#include "Engine.h"
#include "Parser.h"
#include "Grammar.h"

/* Load input file from disk into memory. */
wchar_t *LoadInputFile(const char *FileName) {
    FILE *Fin;
    char *Buf1;
    wchar_t *Buf2;
    struct stat statbuf;
    size_t BytesRead;
    unsigned long i;

    /* Sanity check. */
    if ((FileName == NULL) || (*FileName == '\0')) return(NULL);

    /* Open the file. */
    Fin = fopen(FileName, "rb");
    if (Fin == NULL) {
        printf("Could not open input file: %s\n", FileName);
        return(NULL);
    }

    /* Get the size of the file. */
    if (fstat(fileno(Fin), &statbuf) != 0) {
        printf("Could not stat() the input file: %s\n", FileName);
        fclose(Fin);
        return(NULL);
    }

    /* Allocate memory for the input. */
    Buf1 = (char *)malloc(statbuf.st_size + 1);
    Buf2 = (wchar_t *)malloc(sizeof(wchar_t) * (statbuf.st_size + 1));
    if ((Buf1 == NULL) || (Buf2 == NULL)) {
        printf("Not enough memory to load the file: %s\n", FileName);
        fclose(Fin);
        if (Buf1 != NULL) free(Buf1);
        if (Buf2 != NULL) free(Buf2);
        return(NULL);
    }

    /* Load the file into memory. */
    BytesRead = fread(Buf1, 1, statbuf.st_size, Fin);
    Buf1[BytesRead] = '\0';

    /* Close the file. */
    fclose(Fin);

    /* Exit if there was an error while reading the file. */
    if (BytesRead != statbuf.st_size) {
        printf("Error while reading input file: %s\n", FileName);
        free(Buf1);
        free(Buf2);
        return(NULL);
    }

    /* Convert from ASCII to Unicode. */
    for (i = 0; i <= BytesRead; i++) Buf2[i] = Buf1[i];
    free(Buf1);

    return(Buf2);
}




void ShowErrorMessage(TokenStruct *Token, int Result) {
    int Symbol;
    int i;
    wchar_t s1[BUFSIZ];

    switch (Result) {
    case PARSELEXICALERROR:
        printf("Lexical error");
        break;
    case PARSECOMMENTERROR:
        printf("Comment error");
        break;
    case PARSETOKENERROR:
        printf("Tokenizer error");
        break;
    case PARSESYNTAXERROR:
        printf("Syntax error");
        break;
    case PARSEMEMORYERROR:
        printf("Out of memory");
        break;
    }
    if (Token != NULL) printf(" at line %ld column %ld", Token->Line, Token->Column);
    printf(".\n");

    if (Result == PARSELEXICALERROR) {
        if (Token->Data != NULL) {
            ReadableString(Token->Data, s1, BUFSIZ);
            printf("The grammar does not specify what to do with '%S'.\n", s1);
        }
        else {
            printf("The grammar does not specify what to do.\n");
        }
    }
    if (Result == PARSETOKENERROR) {
        printf("The tokenizer returned a non-terminal.\n");
    }
    if (Result == PARSECOMMENTERROR) {
        printf("The comment has no end, it was started but not finished.\n");
    }
    if (Result == PARSESYNTAXERROR) {
        if (Token->Data != NULL) {
            ReadableString(Token->Data, s1, BUFSIZ);
            printf("Encountered '%S', but expected ", s1);
        }
        else {
            printf("Expected ");
        }
        for (i = 0; i < Grammar.LalrArray[Token->Symbol].ActionCount; i++) {
            Symbol = Grammar.LalrArray[Token->Symbol].Actions[i].Entry;
            if (Grammar.SymbolArray[Symbol].Kind == SYMBOLTERMINAL) {
                if (i > 0) {
                    printf(", ");
                    if (i >= Grammar.LalrArray[Token->Symbol].ActionCount - 2) printf("or ");
                }
                printf("'%S'", Grammar.SymbolArray[Symbol].Name);
            }
        }
        printf(".\n");
    }
}


int fileExists(char* name)
{
  FILE *file;
  if (file = fopen(name, "r"))
  {
      fclose(file);
      return 1;
  }
  return 0;
}
