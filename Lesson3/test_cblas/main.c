#include <stdio.h>

int main () {
  double m[3], n[3];
  int i;
  int result;

  printf("Enter the elements into first vector.\n");
  for (i = 0; i < 3; i++)
    scanf("%lf", &m[i]);

  printf("Enter the elements into second vector.\n");
  for (i = 0; i < 3; i++)
    scanf("%lf", &n[i]);
  result = cblas_ddot(3, m, 1, n, 1);

  printf("The result is %d\n", result);

  return 0;
}