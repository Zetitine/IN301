#include <stdio.h>
#include <stdlib.h>


//Permet de choisir un nombre et il affichera autant d'étoiles
void affichage(int nombre)
{
	int i, j;
	for(i = nombre ; i > 0 ; i--)
	{
		for(j = 1 ; j < i ; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	
}
int main()
{
	int nombre;
	printf("Choisissez le nombre d'etoile(s) a afficher : ");
	scanf("%d", &nombre);
	affichage(nombre);
	return 0;
}

