#include <stdio.h>
#include <stdlib.h>
#include "cblas.h"

int main () {
   double a[3] = {1, 2, 3};
   double b[3] = {1, 5, 6};
   double dot_product;

   dot_product = cblas_ddot(3, a, 1, b, 1);

   printf ("Result is %f\n", dot_product);
   
   return 0;
}