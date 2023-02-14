#include "func.h"

void swap(int* a, int* b);


void sort_array(int* array) {
	for (int i = 0; i < 9; ++i) {
		for (int k = 0; k < 9- i; ++k) {
			int temp;
			if (array[k] > array[k + 1]) {
				swap(&array[k], &array[k+1]);
			}
		}
	}
}

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


