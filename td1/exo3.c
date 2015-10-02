#include <stdio.h>
#include <stdlib.h>

void egypte(int nbr1, int nbr2)
{
	int resultat = 0;
	while(nbr1 > 1)
	{
		if(nbr1 % 2 != 0)
		{
			nbr1 = nbr1 -1;
			resultat = resultat + nbr2;
			printf("= %d * %d + %d\n", nbr1, nbr2, resultat);
		}
		else if(nbr1 % 2 == 0)
		{
			nbr1 = nbr1 / 2;
			nbr2 = nbr2 * 2;
			printf("= %d * %d + %d\n", nbr1, nbr2, resultat);
		}	
	}
	resultat = resultat + nbr2;
	printf("= %d", resultat);
}


int main()
{
	int nbr1, nbr2;
	printf("Choisissez le premier nombre : ");
	scanf("%d", &nbr1);
	printf("\nChoisissez le deuxieme nombre : ");
	scanf("%d", &nbr2);
	printf("\n= %d * %d + 0\n", nbr1, nbr2);
	egypte(nbr1, nbr2);
	
	return 0;
}
