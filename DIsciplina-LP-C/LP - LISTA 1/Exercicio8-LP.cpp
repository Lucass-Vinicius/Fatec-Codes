#include <iostream>
using namespace std;
int main() {
	float km, L, M; // Km - quilometros L - Litros M - Media 
	printf("Digite os KM percorridos: ");
	scanf("%f", &km);
	printf("Digite o total de litros gastos: ");
	scanf("%f", &L);
	M = km / L;
	printf("O consumo medio foi de: %.2f", M);

	return 0;
}
