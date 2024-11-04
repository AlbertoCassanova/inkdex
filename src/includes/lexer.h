#ifndef INK_LEXER_H
#define INK_LEXER_H
#include <stdio.h>
#include "token.h"

typedef struct LEXER_STRUCT
{
    char* src;
    size_t src_size;
    char c;
    unsigned int i;
} lexer_T;

/**
 * Build a Lexer structure from the processed file
 * @param char* src
 * @return lexer_T*
 */
lexer_T* init_lexer(char* src);
token_T* lexer_next_token(lexer_T* lexer);
void lexer_advance(lexer_T* lexer);
token_T* lexer_advance_with(lexer_T* lexer, token_T* token);
void lexer_skip_comment(lexer_T* lexer);
token_T* lexer_parse_id(lexer_T* lexer);
token_T* lexer_parse_string(lexer_T* lexer);
token_T* lexer_parse_number(lexer_T* lexer);
token_T* lexer_advance_current(lexer_T* lexer, int type);
void lexer_skip_whitespace(lexer_T* lexer);

#endif