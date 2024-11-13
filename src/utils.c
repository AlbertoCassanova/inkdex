#include <string.h>
#include <stdlib.h>
#include "includes/macros.h"
#include "includes/utils.h"

char* str_format(char* instr)
{
    char* newstr = calloc(1, sizeof(char)); //A new string newstr is created initialized to an empty string. calloc is used to ensure that all bytes are initialized to 0.

    unsigned int len = strlen(instr); // The length of the input string instr is calculated.
    unsigned int i = 0;
    
    // A while loop iterates through each character in instr until the end of the string is reached ('\0') or index i is less than the length of the string.
    while (instr[i] != '\0' && i < len)
    {
        newstr = realloc(newstr, (strlen(newstr) + 2) * sizeof(char)); // The memory assigned to `newstr` is increased to add space for the new character (and a null terminator). `strlen(newstr) + 2` ensures that there is enough space for the new character and the null terminator.
        if (instr[i] == '\\')
        {
            char escape = str_to_escape_seq((char[]){ instr[i], instr[MIN(i+1, len)], 0 }); // It is called `str_to_escape_seq` to obtain the character corresponding to the exhaust sequence. `instr[i]` is `'\\'` and `instr[MIN(i+1, Len)]` try to obtain the following character, ensuring that it does not exceed the length of the chain.
            strcat(newstr, (char[]){escape, 0}); // The character interpreted in `newstr` is concaten.
            i += 2; //I increase in 2 because two characters have been processed (the backslash and the character of the exhaust sequence).
        }
        else
        {
            strcat(newstr, (char[]){instr[i], 0}); //If it is not an escape sequence, the current character (`instr[i]`) is concatenous to `newstr` using `strcat`.
            i += 1;
        }
    }
    return newstr;
}

char str_to_escape_seq(const char* instr)
{
    if (strlen(instr) <= 1) return 0;
    if (instr[0] != '\\') return 0;
    char in_c = instr[1];
    switch (in_c)
    {
        case 'n': return '\n';
        case 't': return '\t';
        case 'r': return '\r';
        case '\\': return in_c;
        default: return in_c;
    }
    return in_c;
}

char* mkstr(const char* str)
{
    char* outstr = (char*) calloc(strlen(str) + 1, sizeof(char));
    strcpy(outstr, str);
    return outstr;
}