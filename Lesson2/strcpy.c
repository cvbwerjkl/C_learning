#include "func.h"

char* strcpy (char* destination, const char* source ) {
    size_t source_size;
    size_t i;
    
    source_size = sizeof(source) / sizeof(char);
    
     /*Copy source to distanation*/
    *destination = *source;
    for (i = 0; i < source_size; ++i) {
        ++destination;
        ++source;
        *destination = *source;
    }

    /*Return pointer to the beginning*/
    destination -= source_size;
    
    return destination;
}