#include <stdio.h>
int main(void)
{
int f, n; // F - Fatorial, N - Numero a ser digitado.
printf("Este programa mostra o fatorial do numero digitado!\n");
printf("Digite um valor: ");
scanf("%d", &n);
for(f = 1; n > 1; n = n - 1)
f = f * n;
printf("\nFatorial calculado: %d", f);

return 0;
}