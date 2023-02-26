#include <stdio.h>
#include "func.h"

void print_array(int32_t* array, size_t array_size) {
	size_t i;

	for (i = 0; i < array_size; ++i) {
		printf("%" PRId32 " ", array[i]);
	}
	
	printf("\n");
}
