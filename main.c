#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "lexer.h"

int main(){
    FILE* file;
    file = fopen("test.unn" , "r");

    Token *tokens = lexer(file);
    for(size_t i=0 ; tokens[i].type != END_OF_TOKENS; i++){
        printf("%p\n" , tokens[i].value);
        print_tokens(tokens[i]);
    }
}