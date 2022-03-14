#include <stdio.h>
#include <math.h>
int main(void)
{
	int n, s; // N- Numero digitado pela usuario, S - Soma do termial do nuemro digitado.
	printf("Digite um numero para exibicao de seu termial: ");
	scanf("%d", &n);
	for(s=0; n>=1; n--)
		s = s + n;
    printf("---------------------\n");
	printf("O termial eh: %d\n", s);

    return 0;
}
