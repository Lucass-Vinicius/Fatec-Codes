#include <stdio.h>
#include <math.h>
int main(void)
{
float a, b, c, delta, x1, x2;
printf ("A: "); scanf("%f", &a);
printf ("B: "); scanf("%f", &b);
printf ("C: "); scanf("%f", &c);
delta = b*b - 4 * a *c;
if(delta < 0) 
{
   printf("Para delta: %8.2f\nNao possui raizes reais!\n\n", delta);
}
else
{
   if(delta == 0)
   {
	x1 = -b / (2*a);
	printf("\nDelta = %8.2f \nx' = %8.2f\n\n", delta, x1);
   }  
   else
   {
   x1 = (-b - sqrt(delta)) / (2 * a);
   x2 = (-b + sqrt(delta)) / (2 * a);
   printf("\nDelta = %8.2f \nx'    = %8.2f\nx''   = %8.2f\n\n", delta, x1, x2);
   }
}
    return 0;
}
