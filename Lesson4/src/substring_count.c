#include "func.h"

int32_t substring_count (char* mainstring, char* substring) {
    int32_t i;
    int32_t j;

    i = 0;
    j = 0;

    /*check for not emty of mainstring and substring*/
    if (*mainstring == '\0' || *substring == '\0') return i;

    while (*mainstring != '\0') {
        if (*substring == '\0') {
            substring -= j;
            ++i;
            j = 0;
        }
        else if (*mainstring == *substring) {
            ++mainstring;
            ++substring;
            ++j;
        }
        else {
            substring -= j;
            ++mainstring;
            j = 0;
        }
    }

    return i;
}