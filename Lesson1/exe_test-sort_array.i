# 0 "sort_array.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "sort_array.c"
# 1 "func.h" 1
void print_array(int * array);
void sort_array(int * array);
# 2 "sort_array.c" 2

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
