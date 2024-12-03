#include "includes/parser.hh"
#include "includes/lexer.hh"

parser* initParser(lexer* lexer)
{
    parser *parser_src = new parser;
    parser_src->lexer_src = lexer;
    token currentToken = lexerNextToken(lexer);
    while (currentToken.type != token::eof) {
        parser_src->token_src.push_back(currentToken);
        currentToken = lexerNextToken(lexer);
    }
    return parser_src;
}

void startParse(parser* parser)
{
    for (int i=0;  i< parser->token_src.size(); ++i) {
        std::cout << parser->token_src[i].type << " ";
        std::cout << parser->token_src[i].value << "\n";
    }
}