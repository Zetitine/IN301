#include <stdio.h>
#include <stdlib.h>


//Ce programme teste si le nombre choisi est premier ou pas

int main()
{
	int nombre, i, test = 0;
	printf("Choisissez un nombre a tester : ");
	scanf("%d", &nombre);
	for(i = 2; i < nombre; i++)
	{
		if(nombre % i == 0)
		{
			printf("\nCe nombre n'est pas premier\n");
			test = 1;
			break;
		}
	}
	if(test == 0)
	{
		printf("Ce nombre est premier\n");
	}
}
