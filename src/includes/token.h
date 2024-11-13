#ifndef INK_TOKEN
#define INK_TOKEN

typedef struct TOKEN_STRUCT
{
    char *value; // Un puntero a un `char` que representa el valor del token
    enum // Un `int` que indica el tipo de token (por ejemplo, palabra clave, operador, identificador).
    {
        TOKEN_ID,
        TOKEN_EQUALS,
        TOKEN_LPAREN,
        TOKEN_RPAREN,
        TOKEN_RBRACE,
        TOKEN_LBRACE,
        TOKEN_RDT3LDT3LBRACE,
        TOKEN_LBRACKET,
        TOKEN_RBRACKET,
        TOKEN_COLON,
        TOKEN_COMMA,
        TOKEN_LT,
        TOKEN_GT,
        TOKEN_ARROW_RIGHT,
        TOKEN_INT,
        TOKEN_STRING,
        TOKEN_STATEMENT,
        TOKEN_SEMI,
        TOKEN_PLUS,
        TOKEN_MINUS,
        TOKEN_DIV,
        TOKEN_MUL,
        TOKEN_EOF,
    } type;
} token_T;

/**
 * La función `init_token` se utiliza para crear e inicializar un nuevo token en el compilador.
 */
token_T* init_token(char* value, int type);
const char* token_type_to_str(int type);
char* token_to_str(token_T* token);

#endif