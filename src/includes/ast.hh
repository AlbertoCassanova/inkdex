#ifndef AST_INK
#define AST_INK
#include "parser.hh"

enum astType {
    Program,
    FunctionDeclaration,
    Identifier
};

struct id_ast {
    std::string name;
    unsigned int start;
};

typedef struct AST_STRUCT{
    astType type;
    unsigned int start;
    unsigned int end;
    id_ast id;
    std::vector<AST_STRUCT> body;
} ast_struct;

class AST
{
    private:
        parser *parser_src;
        ast_struct *ast_src;
    public:
        AST(parser* _parser_src);
        void FunctionToAST(std::string functionName, int _startId);
        ast_struct *Get_AST();
        ~AST();
};

#endif