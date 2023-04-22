#include "filo.h"

uint8_t pop(char* c) {
    extern struct Item* Filo;
    if (Filo == NULL) return 0;
    *c = Filo -> data;
    struct Item* tmp;
    tmp = Filo;
    Filo = Filo -> next;
    free(tmp);
    return 1;      
}
