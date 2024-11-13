#include "includes/ast.h"
#include <stdio.h>
#include <stdlib.h>

AST_T* init_ast(int type)
{
    printf("Init AST\n");
    AST_T* ast = calloc(1, sizeof(struct AST_STRUCT));
    ast->type = type;
    if (type == AST_COMPOUND)
        ast->children = init_list(sizeof(struct AST_STRUCT*));
    ast->stack_frame = (void*)0;
    ast->multiplier = 1;
    ast->dtype = DATA_TYPE_UNKNOWN;
    return ast;
}