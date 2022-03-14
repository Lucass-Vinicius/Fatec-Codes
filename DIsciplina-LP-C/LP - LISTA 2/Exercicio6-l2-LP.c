#include <stdio.h>
#define VERMELHO "\x1b[31m"
#define VERDE "\x1b[32m"
#define RESET "\x1b[0m"
int main(void) 
{
    float media;
    int faltas; 
    printf("Digite as faltas e media do Aluno: ");
    scanf("%d %f", &faltas, &media);
    if((media >= 6) && (faltas <= 5)) puts(VERDE "Aprovado!" RESET "\n");
    else puts(VERMELHO "Reprovado" RESET "\n");

    return 0;
}
