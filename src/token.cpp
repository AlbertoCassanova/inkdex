#include "includes/token..hh"
#include <string>

token init_token(std::string value, token::tokenType type)
{
    token token_src;
    token_src.value = value;
    token_src.type = type;
    return token_src;
}