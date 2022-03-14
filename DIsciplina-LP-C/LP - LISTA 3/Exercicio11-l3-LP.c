#include <stdio.h>
int main(void)
{
  int n, x, i;
  int max = -1, min = 101;
  printf("Quantos numeros deseja digitar: ");
  scanf("%d", &n);
  printf("------------------------------\n");
  printf("Numeros (Ex: x x x x): ");
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    if (x > max) max = x;
    if (x < min) min = x;
  }
   printf("------------------------------\n");
  printf("max = %d, min = %d\n", max, min);

  return 0;
}