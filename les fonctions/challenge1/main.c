#include <stdio.h>
#include <stdlib.h>

int addition_fonction(int a, int b)
{
    return a+b;
}
int main()
{
    int a, b,addition_variable;
   {
       printf ("donner moi les deux nombres :") ;
   }
    scanf("%d %d", &a, &b);
    addition_variable = addition_fonction(a, b);
    printf("%d", addition_variable);
    return 0;
}

