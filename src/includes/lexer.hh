#ifndef LEXER_INK
#define LEXER_INK
#include <iostream>
#include "token..hh"

typedef struct lexerStruct
{
    std::string src;
    size_t src_size;
    char c;
    unsigned int i;
} lexer;

lexer* initLexer(std::string src);
void lexerAdvance(lexer* lexer);
token lexerAdvanceCurrent(lexer* lexer, token::tokenType type);
void lexerSkipWhitespace(lexer* lexer);
token lexerParseId(lexer* lexer);
token lexerNextToken(lexer* lexer);

#endif