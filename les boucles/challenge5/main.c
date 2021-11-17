#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,a,b;
     {
    printf("Donner des nombres :\n");
    scanf("%d",&a);
     }
    b=0;
    while(a>0)
    {
        n=a%10;
        b=10*b+n;
        a=a/10;
    }
    {
        printf("l'inverse de nombres qui donne en entrée est %d\n",b);
    }
    return 0;
}
