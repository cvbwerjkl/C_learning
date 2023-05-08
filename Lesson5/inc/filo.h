#ifndef FILO_H_
#define FILO_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>
#include <stdlib.h>

/*
 stack realization with linked list implementation
*/

struct Item {
    char data;
    struct Item* next;
};

/*adding element at the end of stack*/
void push(char c);

/*extract last element from stack with check is stack empty*/
uint8_t pop(char* c);

#endif /* FILO_H_ */
