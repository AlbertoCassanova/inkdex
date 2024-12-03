#ifndef TOKEN_INK
#define TOKEN_INK
#include <string>

typedef struct tokenStruct
{
    std::string value;
    enum tokenType{
        eof,
        identifierToken,
        leftBrace,
        leftParen,
        rightBrace,
        rightParen,
        statementToken,
    } type;
} token;

token init_token(std::string value, token::tokenType type);

#endif