#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, somme,triple ;

   printf("Entrez deux nombres à additionner\n");
   scanf("%d%d", &a, &b);
   somme = a + b;
   printf("La somme des deux nombres est = %d\n", somme);

   if (a==b)
   {
      triple= somme*3 ;
   }
   printf ("les deux valeurs son identiques donc le triple est %d",triple) ;



    return 0;
}
