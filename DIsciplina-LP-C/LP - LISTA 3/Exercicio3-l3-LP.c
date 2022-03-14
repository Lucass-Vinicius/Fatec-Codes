#include <stdio.h>
int main(void) //Quadrado de um numero Natual. 
{
    int n = 0, q = 0, x = 1, c = 0;
    printf("Digite o valor: ");
    scanf("%d", &n);
    q = pow(n, 2);
    printf("Quadrado perfeito do numero: %d = ", n);
    for(x; x <= q; ++x){
        if(x % 2 == 1 && c < q){
            printf("%d ", x);
            c += x;
            if(c < q){
                printf("+ ");
            }
        }
    }
    printf("= %d", x);
    
    return 0;
    
}
