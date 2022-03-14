#include <stdio.h>

int main (void) 
{
	char x;
	printf("Digite um caractere: ");
	scanf("%c", &x);
	printf("O caractere digitado em minusculo seria: %c\n", minuscula(x));
	return 0;
}

int minuscula(c){
	if ((c)>=65 && (c)<=90){
		(c) += 32;
		return (c);
	}
	if ((c)>=97 && (c)<=122)
		return (c);
}
