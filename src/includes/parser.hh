#ifndef PARSER_INK
#define PARSER_INK
#include <vector>
#include "lexer.hh"
#include "token..hh"

typedef struct parserStruct
{
    lexer* lexer_src;
    std::vector<token> token_src;
} parser;

parser* initParser(lexer* lexer);
void startParse(parser* parser, std::string filename);

#endif