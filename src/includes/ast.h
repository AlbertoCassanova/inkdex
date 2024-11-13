#ifndef INK_AST_H
#define INK_AST_H
#include "list.h"
#include "stack_frame.h"
#include "types.h"

typedef struct AST_STRUCT
{
    enum 
    {
        AST_COMPOUND,
        AST_FUNCTION,
        AST_CALL,
        AST_ASSIGNMENT = 99,
        AST_BINOP,
        AST_ACCESS,
        AST_STRING,
        AST_INT,
        AST_STATEMENT_RETURN,
        AST_VARIABLE
    } type;
    data_type dtype;
    list_T* children;
    char* name;
    char* string_value;
    struct AST_STRUCT* value;
    struct AST_STRUCT* left;
    struct AST_STRUCT* right;
    int op;
    int int_value;
    int multiplier;
    stack_frame_T* stack_frame;
} AST_T;

AST_T* init_ast(int type);
#endif