#ifndef INK_ARGS_H
#define INK_ARGS_H

/**
 * Proces the arguments of the input
 */
void read_arg(int argc, char const *argv[]);

/**
 * Run each build process in phases
 */
void compile(char* src);

/**
 * Run each build process in phases
 */
void compile_file(const char* filename);
void print_help();

#endif