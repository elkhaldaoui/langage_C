#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, fahrenheit;
    printf("Entrez la température en degrés Fahrenheit: ");
    scanf("%f", &fahrenheit);
    /* convertir Fahrenheit en Celsius */
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    if (celsius > 40)
{
  printf ("Vous etes tres chaud !");
}
else if (celsius > 37)
{
     printf ("vous etes chaud !") ;
}

else if (celsius == 37)
{
    printf ("vous etes normal !") ;
}
else if (celsius < 37)
{
    printf ("vous etes froid !") ;
}
else if (celsius < 30)
{
    printf ("vous etes tres froid !") ;
}


    return 0;

}





