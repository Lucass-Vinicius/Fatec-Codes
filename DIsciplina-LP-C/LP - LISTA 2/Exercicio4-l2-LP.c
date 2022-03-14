#include <stdio.h>
int main(void)
{
    float n1, n2, M;
    printf("Digite as notas do aluno: ");
    scanf("%f %f", &n1, &n2);
    M = (n1 + n2) / 2;
    if(M >=6) puts("Aluno Aprovado!");
    else puts("Aluno Reprovado!");
     
    return 0;
}
