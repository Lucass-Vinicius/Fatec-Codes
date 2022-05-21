/* Exercício 3. Fatorial de número natural
Crie e execute o programa a seguir, que calcula fatorial. */

#include <stdio.h>
int main(void)
{
    int n, f;
    printf("Numero? ");
    scanf("%d", &n);
    f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    printf("Fatorial: %d\n", f);
    return 0;
}