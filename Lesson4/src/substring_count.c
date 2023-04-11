#include "func.h"

int32_t substring_count(const char* mainstring, const char* substring) {
    int32_t quantity;
    int8_t flag;
    int32_t j;

    quantity = 0;
    flag = 1; // flag = 1 means that there is a space in the beggining of the substring
    j = 0;

    printf("%s \n", "OPTION 1 REALISATION");

    /*check for not emty of substring and mainstring*/
    if (substring == NULL || mainstring == NULL || *substring == '\0') return quantity;

    while (*mainstring != '\0') {
        if (*substring == '\0' && *mainstring == ' ') {
            substring -= j;
            ++quantity;
            j = 0;
        }
        else if (*mainstring == *substring && flag == 1) {
            ++substring;
            ++j;
        }
        else {
            substring -= j;
            j = 0;
            flag = 0;
        }
        if (*mainstring == ' ') {
            flag = 1; 
        }
        ++mainstring;
    }

    /*additional if for checking equivalence at the end of the string*/
    if (*substring == '\0') ++quantity;

    return quantity;
}