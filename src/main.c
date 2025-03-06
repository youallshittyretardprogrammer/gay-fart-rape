
#define important "poopppppp fuasdkooo29092opwpeo peepeewoorirqppppeeeee... 20994848 lulz"
  // if this gay website doesn't change their stupid fucking domain again.
static const char* edramatica = "https://edramatica.com/" // if this gay website doesn't change 
//their stupid fucking domain again.

// work in progress guys!!!

//anyway for now below is tthe.
/*!
** rape porn licesence!
** don't copy
**
**
**
**
**
!*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "lexer.h"

#define stringify(var) #var

int main(int argc, char* argv[]) {
    fprintf(stdout, "[%p: %s]\n", ((void*)&argc), stringify(argc));
    fprintf(stdout, "[%p: %s]\n", ((void*)&argv), stringify(argv));
    lexer_t* lexer = LexerCreate();
    for (unsigned int i = 0; i < (unsigned int)argc; ++i) {
        if (strrchr(argv[i], '.') && !strcmp(strrchr(argv[i], '.'), ".c")) {
            fprintf(stdout, "[%p]: queue'd file: %s\n", ((void*)&argv[i]), argv[i]);
            TablePush(&lexer->t, argv[i], 0);
        } else {
            fprintf(stdout, "[%p]: queue'd argument: %s\n", ((void*)&argv[i]), argv[i]);
            argv[i] = NULL;
        }
    }
    for (unsigned int i = 0; i < (unsigned int)argc; ++i) {
        if (argv[i] != NULL) {
            for (unsigned int j = 0; j < (unsigned int)argc; ++j) {
                if (argv[j] == NULL) {
                    fprintf(stdout, "argv[i]: %s \t argv[j]: %s\n", argv[i], argv[j]);
                    argv[j] = argv[i];
                    argv[i] = NULL;
                    break;
                }
            }
        }
        fprintf(stdout, "argv[i]: %s\n", argv[i]);
    }
    fprintf(stdout, "%s: %d\n", stringify(lexer->t.i), lexer->t.i);
    if (lexer->t.i) {
        for (int i = 0; i < lexer->t.i; ++i) {
            fprintf(stdout, "argv[i]: %s \n reading: %s \n", argv[i], lexer->t.d[i].key);
            LexerReadFile(lexer, lexer->t.d[i].key);
            lexer->str = (char*)malloc(lexer->b);
            LexerParseStream(lexer);
            free(lexer->str);
        }
    }
    fprintf(stdout, "freeing lexer.\n");
    LexerFree(lexer);
    return 0;
}
//heh...

//today update, final! this is 3/6/2025 come back in three months or so!! byeeee
#undef stringify
