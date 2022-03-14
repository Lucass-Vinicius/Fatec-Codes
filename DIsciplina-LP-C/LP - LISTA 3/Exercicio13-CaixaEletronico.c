#include <stdio.h>
int main(void)
{
    int op; // op - opçao do cliente 
    float sal = 1000, mov; // sal - Saldo do cliente, mov - Movimentação a ser feita. 
    printf("| SEJA BEM VINDO(A) AO CAIXA ELETRONICO |\n");
    printf("-----------------------------------------\n");
    printf(" 1 - Deposito |   2 - Saque \n");
    printf(" 3 - Saldo    |   4 - Sair \n\n");
    printf("Digite sua escolha: ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:  
        printf("Valor do deposito: R$ ");
        scanf("%f", &mov);
        sal += mov;
        printf("\nDeposito realizado com sucesso!");

        break;
    case 2:
        printf("Valor do saque: R$ ");     
        scanf("%f", &mov);
        while ((sal - mov) < 0 )
        {
            printf("Saldo Insuficiente!\n");
            printf("Saldo: R$ %.2f", sal);
            printf("\nValor do saque: R$ ");
            scanf("%f", &mov);       
        }
        sal -= mov;
        printf("Saldo Restante: R$ %.2f", sal);
        break;
    case 3: 
        printf("Saldo da conta: R$ %.2f", sal);
        break;
    case 4:
        printf("Saindo...");
        break;
    }

    return 0;
}
