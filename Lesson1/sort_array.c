#include "func.h"

void swap(int32_t* a, int32_t* b);


void sort_array(int32_t* array, size_t array_size) {

	size_t i;
	size_t k;
	
	for (i = 0; i < array_size - 1; ++i) {
		for (k = 0; k < array_size - i - 1; ++k) {
			if (array[k] > array[k + 1]) {
				swap(&array[k], &array[k + 1]);
			}
		}
	}
}

void swap(int32_t* a, int32_t* b) {
	
	int32_t tmp = *a;

	*a = *b;
	*b = tmp;
}


