#include<stdio.h>
#include<stdlib.h>
int main()
{
    int nbr,a;
    nbr=12;
    printf("allez taper un nombre:\n");
    do
    {
       scanf("%d",&a);
       if(a<nbr) printf("Pas encore! essayez un nombre plus grand.\n");
       if(a>nbr) printf("Pas encore! essayez un nombre plus petit.\n");
       if(a==nbr) printf("Bravo! vous avez trouver le nombre magique.\n");
    }
    while(a!=nbr);

    return 0;
}
