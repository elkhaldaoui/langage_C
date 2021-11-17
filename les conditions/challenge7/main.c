#include <stdio.h>
#include <stdlib.h>

int main()
{
int A ;
 printf("le nombre donne :");
 scanf("%i ", &A);

 if ((A>0 ) || (A<0))
   printf("Le signe du produit %i  est positif\n", A);
 else if ((A<0  ) || (A>0 ))
   printf("Le signe du produit %i  est négatif\n", A);
 else
   printf("Le produit %i  est zéro\n", A);


    return 0;
}
