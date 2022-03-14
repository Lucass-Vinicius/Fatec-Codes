#include <stdio.h>
int main(void)
{
float n1, n2;
char op;
printf("Digite um calculo basico: ");
scanf("%f %c %f", &n1, &op, &n2);
switch(op) {
    case '+' : printf("Valor = %.1f\n", n1+n2); break;
    case '-' : printf("Valor = %.1f\n", n1-n2); break;
    case '*' : printf("Valor = %.1f\n", n1*n2); break;
    case 'x' : printf("Valor = %.1f\n", n1*n2); break;
    case ':' :
        if ((n1 == 0) || (n2 == 0)) {
            puts("Operacao invalida: numero 0 nao eh divisivel");
        }
        else {
            printf("Valor = %.1f\n", n1/n2); 
        }
        break;
    case '/' :
        if ((n1 == 0) || (n2 == 0)) {
            puts("Operacao invalida: numero 0 nao eh divisivel");
        }
        else {
            printf("Valor = %.1f\n", n1/n2); 
        }
        break;
    defalut : printf("Operador invalido: %c\n", op);
}

    return 0;
}
