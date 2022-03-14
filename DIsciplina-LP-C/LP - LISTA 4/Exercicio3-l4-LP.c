#include <stdio.h>
#define maiuscula(c) ((c)>=65 && (c)<=90)

int main (void) 
{
	char x;
    printf("Este programa le um caractere e diz se eh maiusculo ou nao\n");
	printf("Digite um caractere: ");
	scanf("%c", &x);
	printf("Maiuscula? %s\n", maiuscula(x) ? "Sim eh maiuscula" : "Nao nao eh");

	return 0;
}
