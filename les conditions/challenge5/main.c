#include <stdio.h>
#include <math.h>

int main()
{
 float x1, x2, delta, a, b, c;
printf("Entrez les valeurs des: a, b, c \n");
scanf("%f %f %f",&a, &b, &c);
if (a==0 && b==0 && c==0)
{
    printf("aucun solution") ;
}
delta = (a*a)-(4*b*c);

if (delta ==0)
x1 = -b /(2*a);
{
    printf("la solution unique est xs = %.2f \n",x1);
}
 if (delta >0)

x1 = (-b - sqrt(delta))/(2*a);
x2 = (-b + sqrt(delta))/(2*a);
{
    printf("les deux racines sont : x1 = %.2f et x2 = %.2f \n",x1, x2);
}
if (delta <0)

printf("l'equation n admet pas de solution");


    return 0;
}
