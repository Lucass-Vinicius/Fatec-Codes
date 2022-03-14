#include <stdio.h>
int main(void)
{
    int n,soma,resto,aux;  // n - Numero da conta, s - Soma dos digitos da conta.
	printf("Digite um numero: ");
  	scanf("%d",&n);
	aux = n;
	soma=0;
  	while(n>0)
  	{
    	soma+=n%10;
    	n/=10;
 	}
	resto = soma %10;
	printf("Numero da conta : %06d-%d\n",aux,resto);

    return 0;
}
