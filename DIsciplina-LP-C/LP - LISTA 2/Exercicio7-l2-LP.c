#include <stdio.h>
#define VERMELHO "\x1b[31m"
#define VERDE "\x1b[32m"
#define AZUL "\x1b[36m"
#define RESET "\x1b[0m"
int main(void) 
{
    float media;
    int faltas; 
    printf("Digite as faltas e media do Aluno: ");
    scanf("%d %f", &faltas, &media);
    if((media < 4) || (faltas > 5)) {puts(VERMELHO "Reprovado" RESET "\n");}
    else 
    {
        if (media >= 6) {puts( AZUL "Aprovado!" RESET "\n");}
        else {puts(VERDE "Recuperacao!"  RESET "\n");}
    }

    return 0;
}