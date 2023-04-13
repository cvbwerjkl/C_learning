#ifndef FUNC_H_
#define FUNC_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

/*
 *counting amount of substring in mainstring located between two spaces
*/
int32_t substring_count(const char* mainstring, const char* substring);

/*
 *search for first substring location in mainstring located between parenthesis, return NULL if not found, else return pointer for the begining and end of substring
*/
void substring_search(const char* mainstring, char** substring_start, char** substring_end);

#endif /* FUNC_H_ */