/* Exercício 6. A função fatorial
Crie e execute o programa a seguir, que usa a função fatorial. */

#include <stdio.h>
int fat(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main(void)
{
    printf("Fatorial do 5: %d\n", fat(5));
    return 0;
}