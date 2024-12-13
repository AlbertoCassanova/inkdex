#include "includes/ast.hh"

AST::AST(parser* _parser_src)
{
    parser_src = _parser_src;
    ast_src = new ast_struct;
    ast_src->start = 0;
    ast_src->type = ast_struct::Program;
    ast_src->end = parser_src->lexer_src->src_size;
}

ast_struct* AST::Get_AST()
{
    return ast_src;
}

void AST::FunctionToAST()
{
    
}

AST::~AST()
{
    delete parser_src;
}