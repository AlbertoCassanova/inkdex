#include <iostream>
#include "includes/io.hh"

void compile(std::string src)
{
    std::cout << src;
}

int main(int argc, char const *argv[])
{
    if (argc <= 1) {
        std::cerr << "Error: archivo de entrada no definido" << std::endl;
        return 1;
    }
    else {
        IO io((std::string) argv[1]);
        std::string src = io.getSrc();
        compile(src);
    }
    return 0;
}
