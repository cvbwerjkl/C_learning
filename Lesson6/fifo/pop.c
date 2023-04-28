#include "fifo.h"

uint8_t pop(struct Item* Fifo_head, struct Item* Fifo_tail, char* c) {
    if (Fifo_head -> next == NULL) return 0;
    *c = Fifo_head -> next -> data;
    struct Item* tmp;
    tmp = Fifo_head -> next;
    Fifo_head -> next = Fifo_head -> next -> next;
    free(tmp);
    return 1;      
}
