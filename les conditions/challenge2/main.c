#include <stdio.h>

int main()
{
   int nbr;

   printf("Entrez un nombre:\n");
   scanf("%d", &nbr);

   if (nbr % 2== 0)
   {
       printf("Paire\n");
   }
   else
   {
       printf("Impaire\n");
   }


}
