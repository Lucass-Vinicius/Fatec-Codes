#include <stdio.h>
int main(void) 
{
    int valor1, valor2;
    printf("Digite dois valores: ");
    scanf("%d %d", &valor1, &valor2);
    if(valor1 > valor2) printf("Maior valor: %d \nMenor Valor: %d",  valor1, valor2);
    else printf("Maior valor: %d \nMenor valor: %d ", valor2, valor1);

    return 0;
}