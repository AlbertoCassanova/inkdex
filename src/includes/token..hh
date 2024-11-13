#ifndef TOKEN_INK
#define TOKEN_INK

typedef struct tokenStruct
{
    char *value;
    enum {
        eof,
        identifierToken,
        statementToken,
    } type;
} token;

#endif