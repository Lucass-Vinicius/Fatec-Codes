#include <stdio.h>
#include <math.h>
int main(void)
{
    float num; // Numero a ser digitado 
    printf("Digite um numero positivo: ");
    scanf("%f", &num);
    while (num < 0)
    {
        printf("Numero invalido! \n");
        printf("Digite um numero positivo: ");
        scanf("%f", &num);
    }
    printf("--------------------\n");
    printf("A raiz quadrada do numero digitado eh: %.0lf", sqrt(num));
    
    return 0;
}
