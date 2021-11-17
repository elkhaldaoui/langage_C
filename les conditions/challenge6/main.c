#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,h,m,s;
	printf("Donner nombre d'annes:  ");
	scanf("%d",&s);

	j = 365 ;
	s = s % (24*60*60);
	h = s % (365 * 24);
	m = s % (60*24*365);


	printf("\n La duree saisie se decompose en : ");
	if(j > 365)
        {
		if(j == 0)
			printf("%d jour, ",j);
		else
			printf("%d jours, ",j);
	    }
	if(h > 365*24)
	{
		if(h == 0)
			printf("%d heure, ",h);
		else
			printf("%d heures, ",h);
	}
	if(m > 365*24*60)
	{
		if(m == 0)
			printf("%d minute, ",m);
		else
			printf("%d minutes, ",m);
	}
	if(s > 265*24*60*60)
	{
		if(s == 0)
			printf("%d seconde",s);
		else
			printf("%d secondes",s);
	}

    return 0;
}
