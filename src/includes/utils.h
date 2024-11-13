#ifndef INK_UTILS_H
#define INK_UTILS_H

/**
 * The str_format function aims to take an input string and process it, interpreting escape sequences.
 * The str_format function transforms a text string, interpreting the escape sequences and constructing a new string with the corresponding characters.
 * @param char *instr
 * @return formatted string.
 */
char* str_format(char* instr);

/**
 * The str_to_escape_seq function is intended to convert an escape sequence represented as a character string into its corresponding value.
 * The function converts a string representing an escape sequence into its actual character. If the string is invalid or does not represent an escape sequence, it returns 0.
 * @param char *instr
 * @return char 
 */
char str_to_escape_seq(const char* instr);

char* mkstr(const char* str);

#define true 1
#define false 0

#endif