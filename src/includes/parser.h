#ifndef INK_PARSER_H
#define INK_PARSER_H
#include "ast.h"
#include "lexer.h"
#include "token.h"

typedef struct PARSER_STRUCT
{
    lexer_T* lexer;
    token_T* token;
} parser_T;

parser_T* init_parser(lexer_T* lexer);

/**
 * Se procesa un flujo de tokens. El propósito de esta función es consumir un token esperado y avanzar al siguiente token.
 */
token_T* parser_eat(parser_T* parser, int type);
AST_T* parser_parse(parser_T* parser);
AST_T* parser_parse_expr(parser_T* parser);
AST_T* parser_parse_int(parser_T* parser);
AST_T* parser_parse_statement(parser_T* parser);
AST_T* parser_parse_factor(parser_T* parser);
AST_T* parser_parse_list(parser_T* parser);
AST_T* parser_parse_id(parser_T* parser);
AST_T* parser_parse_string(parser_T* parser);

/**
 * Tiene el propósito de analizar y construir un nodo de "compound" (o compuesto) en el Árbol de Sintaxis Abstracta (AST). Un "compound" suele representar un bloque de código que contiene múltiples declaraciones o expresiones dentro de llaves { ... } en el código fuente. Vamos a desglosar cada parte para entender cómo funciona en el contexto de un compilador.
 */
AST_T* parser_parse_compound(parser_T* parser);
AST_T* parser_parse_term(parser_T* parser);

#endif