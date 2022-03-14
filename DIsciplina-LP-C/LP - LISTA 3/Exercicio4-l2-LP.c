#include <stdio.h>
int main (void)
{
    int x, n, pot=0,i=0;
     printf ("Entre com o valor de X: ");
     scanf ("%d",&x);
     printf ("Entre com o valor de N: ");
     scanf ("%d",&n);
     for (i>0; i<n; i++)
     {
     pot = x*(x*i);
     }
     printf ("%d",i);
          printf ("\nO valor de X se elevado a N sera de: %d", pot); 

    return 0;
}