#ifndef FUNC_H_
#define FUNC_H_

#include <stdio.h>
#include <inttypes.h>
#include <stddef.h>

/*
 *counting amount of substring in mainstring located between two spaces
*/
int32_t substring_count(const char* mainstring, const char* substring);

#endif /* FUNC_H_ */