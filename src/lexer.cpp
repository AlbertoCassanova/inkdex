#include "includes/token..hh"
#include "includes/lexer.hh"
#include <sstream>

lexer* initLexer(std::string src)
{
    lexer *lexer_src = new lexer;
    lexer_src->src = src;
    lexer_src->c = src[0];
    lexer_src->src_size = src.length();
    lexer_src->i = 0;
    return lexer_src;
}

void lexerAdvance(lexer* lexer)
{
    if (lexer->i < lexer->src_size && lexer->c != '\0')
    {
        lexer->i += 1;
        lexer->c = lexer->src[lexer->i];
    }
}

token lexerAdvanceCurrent(lexer* lexer, token::tokenType type)
{
    std::string value(1, lexer->c);
    token token_src = init_token(value, type);
    lexerAdvance(lexer);
    return token_src;
}

void lexerSkipWhitespace(lexer* lexer)
{
    while (lexer->c == 13 || lexer->c == 10 || lexer->c == ' ' || lexer->c == '\t'){
        lexerAdvance(lexer);
    }
}

token lexerParseId(lexer* lexer)
{
    int t;
    std::string value = "";
    while (isalpha(lexer->c))
    {
        value += lexer->c;
        lexerAdvance(lexer);
    }
    if (value == "function")
    {
        return init_token(value, token::statementToken);
    }
    else {
        return init_token(value, token::identifierToken);
    }
}

token lexerNextToken(lexer* lexer)
{
    while (lexer->c != '\0')
    {
        lexerSkipWhitespace(lexer);
        if (isalpha(lexer->c))
        {
            return lexerParseId(lexer);
        }
        switch (lexer->c)
        {
            case '(': return lexerAdvanceCurrent(lexer, token::leftParen);
            case ')': return lexerAdvanceCurrent(lexer, token::rightParen);
            case '{': return lexerAdvanceCurrent(lexer, token::leftBrace);
            case '}': return lexerAdvanceCurrent(lexer, token::rightBrace);
            default: lexerAdvance(lexer); break;
        }
        
    }
    return init_token("", token::eof);
}