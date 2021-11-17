#include <stdio.h>
#include <stdlib.h>

int main()
{

char ch;

    printf("Saisir un caractère: ");
    scanf("%c", &ch);



    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' est une majuscule.", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' est un munuscile.", ch);
    }



    return 0;
}
