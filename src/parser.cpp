#include "includes/parser.hh"
#include "includes/lexer.hh"
#include "includes/ast.hh"
#include "includes/utils.hh"
#include "includes/codegen.hh"

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

void startParse(parser* parser, std::string filename)
{
    AST ast(parser);
    int charCounter = 0;
    std::string valueToken;
    for (int i=0;  i< parser->token_src.size(); ++i) {
        valueToken = parser->token_src[i].value;
        if (parser->token_src[i].type == token::statementToken)
        {
            charCounter = charCounter + valueToken.size() + 1;
            i = i+1;
            std::cout << parser->token_src[i].value << " ";
            ast.FunctionToAST(parser->token_src[i].value, charCounter);
        }
        
        //std::cout << parser->token_src[i].type << " ";
        
    }
    std::cout << charCounter << "\n";
    codeGen(filename);
    print_ast(ast.Get_AST());
}