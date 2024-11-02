#include <stdio.h>
#include "includes/args.h"
#include "includes/io.h"

void read_arg(int argc, char const *argv[])
{
    compile_file(argv[1]);
}

void compile_file(const char* filename)
{
    read_file(filename);
}