#include <stdio.h>
#include <math.h>
int main (void) 
{
	int n,d;
	float raiz;
	printf("Digite um numero para conferir se e primo ou nao: ");
	scanf("%d", &n);
    printf("--------------\n");
	raiz = sqrt(n);
	raiz = ceil(raiz);
	if (n == 2){
		puts("Numero Primo!");
	}else{
		for (d = 2;d<raiz; d++)
            if(n%d == 0) break;
        if(n%d == 0)puts("Numero Primo!");
		else puts("Numero nao Primo!");
	}

	return 0;
}
