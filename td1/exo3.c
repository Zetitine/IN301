#include <stdio.h>
#include <stdlib.h>

//Programme un peu compliqué, il fait la multiplication égyptienne des nombres. à tester pour comprendre.



void egypte(int nbr1, int nbr2)
{
	int resultat = 0;
	while(nbr1 > 1)
	{
		if(nbr1 % 2 != 0) //Si nombre 1 est impair, nombre 1 est décrémenté et l'addition est incrémenté de nombre 2
		{
			nbr1 = nbr1 -1;
			resultat = resultat + nbr2;
			printf("= %d * %d + %d\n", nbr1, nbr2, resultat);
		}
		else if(nbr1 % 2 == 0) //si nombre 1 est pair, nombre 1 est divisé par 2 et nombre 2 multiplié par 2.
		{
			nbr1 = nbr1 / 2;
			nbr2 = nbr2 * 2;
			printf("= %d * %d + %d\n", nbr1, nbr2, resultat);
		}	
	}
	resultat = resultat + nbr2;
	printf("= %d", resultat);
}



//Choix des nombres.
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
