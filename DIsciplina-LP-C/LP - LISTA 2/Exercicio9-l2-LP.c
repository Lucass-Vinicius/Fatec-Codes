#include <stdio.h>
int main(void)
{
    float sal, valImp; // Sal - Salário valImp - valor do Imposto de Renda. 
    printf("Salario: ");
    scanf("%f", &sal );
    if (sal <= 1903.98) 
    {
        puts("Isento de Impostos\n"); 
    }
    else if(sal <= 2826.65)
    {
        valImp = (sal * 7.5) /100;
        printf("Valor do imposto a pagar: %.0f", valImp);
    }
    else if (sal <= 3751.05)
    {
        valImp = (sal * 15) /100;
        printf("Valor do imposto a ser pago: %.0f", valImp);
    }
    else if (sal <= 4664.68)
    {
        valImp = (sal * 22.5) /100;
        printf("Valor do imposto a ser pago: %.0f", valImp);
    }
    else 
    {
        valImp = (sal * 27.5) /100;
        printf("Valor do imposto a ser pago: %.0f", valImp);
    }

    return 0;
}
