#include "includes/ast.hh"

AST::AST(parser* _parser_src)
{
    parser_src = _parser_src;
    ast_src = new ast_struct;
    ast_src->start = 0;
    ast_src->type = Program;
    ast_src->end = parser_src->lexer_src->src_size;
}

ast_struct* AST::Get_AST()
{
    return ast_src;
}

void AST::FunctionToAST(std::string functionName, int _startId)
{
    ast_struct functionAst;
    functionAst.type = FunctionDeclaration;
    functionAst.id.name = functionName;
    functionAst.id.start = _startId;
    ast_src->body.push_back(functionAst);
}

AST::~AST()
{
    delete parser_src;
}