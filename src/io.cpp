#include <iostream>
#include <fstream>
#include "includes/io.hh"

using namespace std;

string inputFile(string input)
{
    string src;
    ifstream file(input);
    if (file.is_open())
    {
        std::getline(file, src, '\0');
    }
    else
    {
        std::cerr << "Error: El archivo de entrada no existe\n";
        exit(0);
    }
    file.close();
    return src;
}
