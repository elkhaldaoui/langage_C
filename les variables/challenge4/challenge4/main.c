#include <stdio.h>
#include <stdlib.h>
//converte la distance en metre
int main()
{
    double kilometres;
    double miles;
    double konstante = 0.621371 ;

    scanf("nombre de km %F ", &kilometres);
    printf("%F Km cela fait %f Miles", kilometres, kilometres * konstante);


    return 0;
}
