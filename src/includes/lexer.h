#ifndef INK_LEXER_H
#define INK_LEXER_H
#include <stdio.h>
#include "token.h"

/**
 * Estructura para el analizador lexico
 */
typedef struct LEXER_STRUCT
{
    char* src; // Puntero al código fuente en forma de cadena.
    size_t src_size;  // Tamaño del código fuente.
    char c; // Caracter actual que está siendo procesado
    unsigned int i; // Índice actual en el código fuente.
} lexer_T;

/**
 * Build a Lexer structure from the processed file
 * @param char* src
 * @return lexer_T*
 */
lexer_T* init_lexer(char* src);
token_T* lexer_next_token(lexer_T* lexer);

/**
 * La función `lexer_advance` es responsable de avanzar el lexer al siguiente carácter en el código fuente. 
 */
void lexer_advance(lexer_T* lexer);
token_T* lexer_advance_with(lexer_T* lexer, token_T* token);
void lexer_skip_comment(lexer_T* lexer);
token_T* lexer_parse_id(lexer_T* lexer);
token_T* lexer_parse_string(lexer_T* lexer);
token_T* lexer_parse_number(lexer_T* lexer);
token_T* lexer_advance_current(lexer_T* lexer, int type);
void lexer_skip_whitespace(lexer_T* lexer);

#endif