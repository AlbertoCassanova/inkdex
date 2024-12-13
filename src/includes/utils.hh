#ifndef UTILS_INK
#define UTILS_INK
#include "ast.hh"

void print_ast(ast_struct* ast_src);
void pretty(short count, std::string key, std::string value);
std::string get_ast_type(unsigned int t);

#endif