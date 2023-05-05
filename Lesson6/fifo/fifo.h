#ifndef FIFO_H_
#define FIFO_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdlib.h>

/*
 queue realization with linked list implementation
*/

struct Item {
    char data;
    struct Item* next;
    struct Item* prev;
};


/*adding element at the end of queue*/
struct Item* push(struct Item* Fifo_tail, char c);

/*
 extract first element from queue with check is queue empty
 pointer on pointer Fifo_tail used for check is Fifo_tail == Filo -> next
*/
uint8_t pop(struct Item* Fifo_head, struct Item** Fifo_tail, char* c);

/*check is queue empty*/
uint8_t isEmpty(struct Item* Fifo_head);

#endif /* FIFO_H_ */
