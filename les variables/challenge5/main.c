#include <stdio.h>
#include <stdlib.h>

int main()
{
     float celsius, fahrenhei ;
    printf("Entrez la température en degrés Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) *(5 / 9);
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;

}
