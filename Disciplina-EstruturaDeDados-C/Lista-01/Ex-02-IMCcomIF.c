/* Exercício 2. Índice de massa corporal (continuação)
Pessoa com IMC inferior a 18.5 está magra, superior a 30 está obesa
e,caso contrário,está normal.Altereo programa com essa informação. */

#include <stdio.h>
#include <math.h>
int main(void)
{
    float p, a, i;
    printf("Peso e altura? ");
    scanf("%f %f", &p, &a);
    i = p / pow(a, 2);
    printf("IMC = %.2f\n", i);
    if (i < 18.5)
        puts("Magra");
    else if (i > 30)
        puts("Obesa");
    else
        puts("Normal");
    return 0;
}