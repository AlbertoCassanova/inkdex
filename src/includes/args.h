#ifndef INK_ARGS_H
#define INK_ARGS_H

/**
 * Proces the arguments of the input
 * @param int argc
 * @param char* argv[]
 */
void read_arg(int argc, char const *argv[]);

/**
 * Run each build process in phases
 * @param char* src
 */
void compile(char* src);

/**
 * Run each build process in phases
 * @param char *filename
 */
void compile_file(const char* filename);
void print_help();

#endif