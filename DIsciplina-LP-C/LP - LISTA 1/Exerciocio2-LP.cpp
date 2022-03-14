/*Informar o perimetro da circunferencia*/
#include <stdio.h>
int main(void) {
	float raio;
	printf("Qual o raio? ");
	scanf("%f", &raio);
	float perim = 2 * 3.14 * raio;
	printf("Perimetro %.1f\n", perim);
	return 0;
}
