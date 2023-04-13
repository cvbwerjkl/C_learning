#include "func.h"

void substring_search(const char* mainstring, char** substring_start, char** substring_end) {

    while (*mainstring != '\0') {
        if (*mainstring == '(' && *(mainstring + 1) != '\0' && *(mainstring + 1) != ')') {
            *substring_start = mainstring + 1;
        }
        else if (*mainstring == ')' && *substring_start != NULL) {
            *substring_end = mainstring - 1;
            return;
        }
        ++mainstring;
    }

    *substring_start = NULL;
    return;
}