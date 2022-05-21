/* Exercício 1. Índice de massa corporal
O índice de massa corporal de uma pessoa é o seu peso dividido pelo quadrado
de sua altura. Crie e execute o programa a seguir, que calcula IMC. */

#include <stdio.h>
#include <math.h>
int main(void)
{
    float p, a, i;
    printf("Peso e altura? ");
    scanf("%f %f", &p, &a);
    i = p / pow(a, 2);
    printf("IMC = %.2f\n", i);
    return 0;
}