#include <stdio.h>
#include <stdlib.h>

int main()
{
    double kilometres;
    double miles;
    double konstante = 0.621371;

    scanf("nombre de km %lf ", &kilometres);
    printf("%lf Km cela fait %lf Miles", kilometres, kilometres * konstante);




    return 0;

}
