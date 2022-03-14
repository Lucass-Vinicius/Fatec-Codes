#include <stdio.h>
int main(void)
{
    float M, A, IMC;
    printf("Massa(Kg) e Altura (M): "); 
    scanf("%f %f", &M, &A);
    IMC = M / (A*A); 
    printf("IMC: %.1f\n", IMC);
    if (IMC < 18.5) {
        puts("Situacao: Magra (Abaixo de seu peso ideal)");
    }
    else if (IMC <= 30){
        puts("Situacao: Normal (Em seu peso ideal)");
    }
    else if (IMC > 30) {
        puts("Situacao: Obesa (Acima de seu peso ideal)");
    }

    return 0;
}

