#include <stdio.h>
#include <stdlib.h>
int main()
{
int age;
char sexe,MEN,WOMEN;
printf("how old are you ?");
scanf("%d",&age );
printf("MEN or WOMEN ?");
scanf("%s",&sexe);
printf("SO: ");
if (age>=20 && sexe=='m')
{
printf("pay tax");
}
else if (age<20 && sexe =='m')
{
printf("don't pay tax");
}
if  (age>=18 && age<=35 && sexe=='w')
{
printf("pay tax");
}
else  if (age<18 && age>35 && sexe=='w')
{
printf( "don't pay tax");
}
else
{
printf("don't pay tax");
}
return 0;
}
