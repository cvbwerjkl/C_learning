#include "fifo.h"

struct Item* push(struct Item* Fifo_tail, char c) {
    struct Item* new_i = (struct Item*)malloc(sizeof(struct Item));
    new_i -> data = c;
    new_i -> next = NULL;
    new_i -> prev = Fifo_tail;
    Fifo_tail -> next = new_i;
    Fifo_tail = new_i;
    return Fifo_tail;
}
