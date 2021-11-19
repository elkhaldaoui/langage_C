#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int o,i,j,k;

    printf ("donner le nombre des lignes ?");
    scanf ("%d",&o);
        for (i=0;i<o;i++)
    {


        for (j=o-i;j>0;j--)
        {
            printf(" ");
        }
        for (k=0;k<1+2*i;k++)
        {
            printf("*");
        }

        printf("\n");

     }
    return 0;
}
