#include "includes/token..hh"
#include "includes/lexer.hh"

Lexer::Lexer(std::string src)
{
    lexer_src->src = src;
    lexer_src->c = src[0];
    lexer_src->src_size = src.length();
    lexer_src->i = 0;
}

