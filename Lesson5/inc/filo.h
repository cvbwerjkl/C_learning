#ifndef FILO_H_
#define FILO_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

struct Item {
    int data;
    struct Item* next;
};

uint8_t isEmpty(void);

void push(char c);

uint8_t pop(char* c);

#endif /* FILO_H_ */