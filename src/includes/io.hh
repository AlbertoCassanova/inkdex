#ifndef IO_INK
#define IO_INK
#include <iostream>

class IO
{
    private:
        std::string src;
    public:
        IO(std::string input);
        std::string getSrc();
        //~IO();
};

void compile(std::string src);

#endif