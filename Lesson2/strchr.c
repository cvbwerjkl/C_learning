#include "func.h"

const char* strchr (const char* str, char character) {
    size_t str_size;
    size_t i;
    
    str_size = sizeof(str) / sizeof(char);

    for (i = 0; i < str_size; ++i) {
        if (*str == character) break;
        ++str;
    }

    return str;
}