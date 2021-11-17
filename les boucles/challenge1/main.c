#include <stdio.h>
int main()
{
    int nbr, i;

    test:

    printf(" Entrez un nombre: ");
    scanf("%d",&nbr);

    printf("\n Table de multiplication de %d est: \n", nbr);
    for(i=1; i<=10; ++i)
    {
        printf(" %d * %d = %d \n", nbr, i, nbr*i);
    }

    goto test;

    return 0;
}
