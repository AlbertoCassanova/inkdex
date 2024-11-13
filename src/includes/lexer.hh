#ifndef LEXER_INK
#define LEXER_INK
#include <iostream>

typedef struct lexerStruct
{
    std::string src;
    size_t src_size;
    char c;
    unsigned int i;
} lexer;

class Lexer
{
    private:
        lexer *lexer_src;
    public:
        Lexer(std::string src);
        //~lexer();
};

#endif