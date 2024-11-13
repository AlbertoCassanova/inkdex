#include <iostream>
#include <fstream>
#include "includes/io.hh"

using namespace std;

IO::IO(string input)
{
    string myText;
    ifstream file(input);
    if (file.is_open())
    {
        std::getline(file, src, '\0');
    }
    else
    {
        std::cerr << "Error: El archivo de entrada no existe";
        exit(0);
    }
    file.close();
}


std::string IO::getSrc()
{
    std::string _src = src;
    return _src;
}