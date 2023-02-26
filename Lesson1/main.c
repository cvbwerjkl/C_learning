#include "func.h"


int main() {
	size_t array_size;
	int32_t array[] = {10, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	array_size = sizeof(array) / sizeof(int32_t);

	print_array(array, array_size);
	sort_array(array, array_size);
	print_array(array, array_size);

	return 0;
}
