#include "func.h"

const char* strchr (const char* str, char character) {
    while (*str != '\0') {
        if (*str == character) break;
        ++str;
    }

    return str;
}