#include <string> 
#include "includes/utils.hh"

void print_ast(ast_struct* ast_src)
{
    short i = 2;
    std::cout << "{\n";
    pretty(i, "type", get_ast_type(ast_src->type));
    pretty(i, "start", std::to_string(ast_src->start));
    pretty(i, "end", std::to_string(ast_src->end));
    std::cout << "}\n";
}

void pretty(short count, std::string key, std::string value)
{
    for (size_t i = 0; i < count; i++)
    {
        std::cout << " ";
    } 
    std::cout << key << ": " << value << ",\n";  
}

std::string get_ast_type(unsigned int t)
{
    switch (t)
    {
        case 0: return "Program";
        default: return "";
    }
}