#include <stdio.h>
#include <stdlib.h>
#include "includes/args.h"
#include "includes/io.h"
#include "includes/lexer.h"
#include "includes/parser.h"
#include "includes/ast.h"

void read_arg(int argc, char const *argv[])
{

    compile_file(argv[1]);
}

void compile(char* src)
{
    lexer_T* lexer = init_lexer(src);
    parser_T* parser = init_parser(lexer);
    AST_T* root = parser_parse(parser);

}

void compile_file(const char* filename)
{
    char *src = read_file(filename);
    compile(src);
    free(src);
}

void print_help()
{
    printf("Inkdex compier \n");
}