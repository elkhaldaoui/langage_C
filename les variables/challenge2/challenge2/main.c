#include <stdio.h>
#include <stdlib.h>

int main()
{
     float celsius, fahrenheit;
    printf("Entrez la température en degrés Celsius: ");
    scanf("%f", &celsius);
    /* convertir Celsius en Fahrenheit */
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

    return 0;
}
