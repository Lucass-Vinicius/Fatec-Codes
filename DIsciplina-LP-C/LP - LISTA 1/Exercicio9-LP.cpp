#include <iostream>;
int main()
{
    float F, C; // F - Fahrenheit C - Celsius 
	printf("CONVERSOR DE FAHRENHEIT PARA CELSIUS \n");
    printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f", &F);
	C = (F-32) * 5 / 9;
	printf("A temperatura em Graus Celsius e de:  %.2f", C);

    return 0;
}
