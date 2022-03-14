#include <stdio.h>
int main(void)
{
    int passo1, passo2, dia, mes, ano, resul;
    printf("A data deve ser digitada no seguinte formato dd/mm/aaaa");
    printf("\nDigite a data: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    passo1 = (dia * 100 + mes) + ano;
    passo2 = (passo1 / 100) + (passo1 % 100);
    resul = passo2 % 5;
    printf("Perfil: ");
    switch (resul)
    {
    case 0: puts("Timido"); break;
    case 1: puts("Sonhador"); break;
    case 2: puts("Paquerador"); break;
    case 3: puts("Atraente"); break;
    case 4: puts("Irresistivel"); break;
    default: puts("Invalido"); break;
    }

    return 0;
}
