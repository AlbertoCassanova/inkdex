#include <stdio.h>
#include "includes/args.h"

int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        printf("Error: No input file or argument \n");
        return 1;
    }
    read_arg(argc,argv);
    return 0;
}
