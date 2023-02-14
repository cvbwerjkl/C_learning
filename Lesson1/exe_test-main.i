# 0 "main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "main.c"
# 1 "func.h" 1
void print_array(int * array);
void sort_array(int * array);
# 2 "main.c" 2


int main() {
 int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
 print_array(array);
 sort_array(array);
 print_array(array);

 return 0;

}
