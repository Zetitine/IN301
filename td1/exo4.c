#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float i = 1, nombre, resultat = 0.0, test = 0.0;
	printf("Choisissez la precision : ");
	scanf("%f", &nombre);
	while(1 == 1)
	{
		resultat = resultat + 1/(i*i);
		if(resultat - test < nombre)
			break;
			
		test = resultat;
		i = i + 1;
	}
	printf("\n%f", resultat);
	
}
