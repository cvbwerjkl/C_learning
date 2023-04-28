#include "fifo.h"

uint8_t isEmpty(struct Item* Fifo_head){
    if (Fifo_head -> next == NULL) return 1;
    return 0;
}
