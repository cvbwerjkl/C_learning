#ifndef FUNC_H_
#define FUNC_H_

#include <inttypes.h>
#include <stddef.h>

void print_array(int32_t* array, size_t array_size);
/*sort_array: sort array with length array_size into increasing order by bubble sort*/
void sort_array(int32_t* array, size_t array_size);

#endif /* FUNC_H_ */
