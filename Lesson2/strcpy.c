#include "func.h"

char* strcpy (char* destination, const char* source ) {
    char* output;
    
    /*Save beggining ponter of distanation*/
    output = destination;
              
     /*Copy source to distanation*/
    *destination = *source;
    while (*source != '\0') {
        ++destination;
        ++source;
        *destination = *source;
    }

    return output;
}