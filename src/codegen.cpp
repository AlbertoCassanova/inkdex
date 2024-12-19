#include "includes/codegen.hh"
#include "includes/utils.hh"
#include <string>
#include <iostream>
#include <fstream>

void codeGen(std::string outFile)
{
    std::vector<std::string> o = split(outFile, '.');
    std::string asmFileName = o[0] + ".asm";
    std::ofstream outPut(asmFileName);
    outPut.close();
}