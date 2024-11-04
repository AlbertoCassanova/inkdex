#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/parser.h"
#include "includes/lexer.h"

parser_T* init_parser(lexer_T* lexer)
{
    parser_T* parser = calloc(1, sizeof(struct PARSER_STRUCT));
    parser->lexer = lexer;
    parser->token = lexer_next_token(lexer);
    return parser;
}