#include <stdio.h>
#include <stdlib.h>

//Ce programme calcule la somme de 1/i² avec i allant de 1 à n;

int main ()
{
	float i = 1, nombre, resultat = 0.0, test = 0.0;
	printf("Choisissez la precision : ");
	scanf("%f", &nombre);
	while(1 == 1)
	{
		resultat = resultat + 1/(i*i); //Calcul de la suite
		
		if(resultat - test < nombre) // Test pour savoir si N+1 - N est inférieur à la précision demandée.
			break; //Une seule instruction pour le if, sors de la boucle infini.
			
		test = resultat;
		i = i + 1;
	}
	printf("\n%f\n", resultat);
	
}
