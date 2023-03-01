#include "func.h"

int8_t strcmp(const char* str1, const char* str2) { 
    if (*str1 == '\0' && *str2 == '\0') return 0;
    while (1) {
        if (*str2 != '\0' && *str1 > *str2) {
            return -1;
        }
        else if (*str1 != '\0' && *str1 < *str2) {
            return 1;
        }
        else if (*str1 == '\0' && *str2 != '\0') return -1;
        else if (*str2 == '\0' && *str1 != '\0') return 1;
        else {
            ++str1;
            ++str2;
            if (*str1 == '\0' && *str2 == '\0') return 0;
            continue;
        }
    }

    return 0;
}