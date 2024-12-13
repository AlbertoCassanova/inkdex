#ifndef AST_INK
#define AST_INK
#include "parser.hh"

typedef struct AST_STRUCT{
    enum astType {
        Program
    } type;
    unsigned int start;
    unsigned int end;
} ast_struct;

class AST
{
    private:
        parser *parser_src;
        ast_struct *ast_src;
    public:
        AST(parser* _parser_src);
        void FunctionToAST();
        ast_struct *Get_AST();
        ~AST();
};

#endif