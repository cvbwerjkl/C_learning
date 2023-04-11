#include "func.h"

/*check if substring equal to begin_iter return 1, otherwise return 0*/
int32_t substring_equi_check(const char* begin_iter, const char* substring);

int32_t substring_count(const char* mainstring, const char* substring) {
    char* begin_iter;
    char* end_iter;

    int32_t quantity;
    int32_t substring_length;

    begin_iter = mainstring;
    end_iter = NULL;

    quantity = 0;
    substring_length = 0;

    printf("%s \n", "OPTION 2 REALISATION");

    /*check for not emty of substring and mainstring*/
    if (substring == NULL || mainstring == NULL || *substring == '\0') return quantity;

    /*substring length evaluation for substrings comparsion on next step*/
    while (*substring != '\0') {
        ++substring_length;
        ++substring;
    }
    substring -= substring_length;

    /*check a length between two space in mainstring and if it's equal to substring length check for content equality*/
    while (*mainstring != '\0') {
        if (*mainstring == ' ') {
            end_iter = mainstring;
        }
        if (begin_iter != NULL && end_iter != NULL) {
            if (end_iter - begin_iter == substring_length) {
                quantity += substring_equi_check(begin_iter, substring);
            }
            begin_iter = end_iter + 1;
            end_iter = NULL;
        }
        ++mainstring;
    }
    if (mainstring - begin_iter == substring_length) {
        quantity += substring_equi_check(begin_iter, substring);
    }

    return quantity;
}

int32_t substring_equi_check(const char* begin_iter, const char* substring) {
    while (*substring != '\0') {
        if (*begin_iter != *substring) return 0;
        ++begin_iter;
        ++substring;
    }

    return 1;
}