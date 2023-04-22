#include "filo.h"

void push(char c) {
    extern struct Item* Filo;
    struct Item* new_i = (struct Item*)malloc(sizeof(struct Item));
    new_i -> data = c;
    new_i -> next = Filo;
    Filo = new_i;
}