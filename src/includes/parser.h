#ifndef INK_PARSER_H
#define INK_PARSER_H
#include "lexer.h"
#include "token.h"

typedef struct PARSER_STRUCT
{
    lexer_T* lexer;
    token_T* token;
} parser_T;

parser_T* init_parser(lexer_T* lexer);

#endif