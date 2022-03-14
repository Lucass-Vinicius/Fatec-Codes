#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	float xp, yp, xq, yq, ab;
	printf("Digite as coodernadas (xp, yp) e (xq, yq): ");
	scanf("%f %f %f %f", &xp, &yp, &xq, &yq);
	ab = sqrt(pow((xp - xq),2) + pow((yp - yq),2));
	printf("A distancia entre os pontos eh %.0f",ab);

	return 0;
}

