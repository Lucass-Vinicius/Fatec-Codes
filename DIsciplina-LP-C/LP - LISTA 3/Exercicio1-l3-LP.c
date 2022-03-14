#include <stdio.h>
int main(void){
    int n = 0;
    printf("Digite o valor: ");
    scanf("%d", &n);
    for(n ; n >= 0; n--){
        printf(" %d \n", n);
    }

    return 0;
}