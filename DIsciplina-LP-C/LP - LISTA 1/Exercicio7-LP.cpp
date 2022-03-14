#include <iostream>
using namespace std;
int main() {
	float nota1, nota2, media;
    printf(" CALCULO DA MEDIA \n");
	printf("Digite a primeira e segunda nota: ");
	scanf("%f %f", &nota1, &nota2);
	media = (nota1 + nota2) / 2;
	printf("Media:  %.1f", media);

	return 0;
}
