#include <iostream>
#include "includes/io.hh"
#include "includes/lexer.hh"
#include "includes/parser.hh"

void compile(std::string filename)
{
    std::string src = inputFile(filename);
    lexer* lexer = initLexer(src);
    parser* parser = initParser(lexer);
    startParse(parser);
}

int main(int argc, char const *argv[])
{
    if (argc <= 1) {
        std::cerr << "Error: archivo de entrada no definido" << std::endl;
        return 1;
    }
    else {
        compile((std::string) argv[1]);
        //std::string src = io.getSrc();
       //compile(src);
    }
    return 0;
}
