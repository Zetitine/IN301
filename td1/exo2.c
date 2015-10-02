#include <stdio.h>
#include <stdlib.h>

void decoupe_temps(int s)
{
	int m, h;
	m = s / 60;
	h = m / 60;
	s = s % 60;
	if(h > 1)
		printf("Il y a %d heures, ", h);
	else
		printf("Il y a %d heure, ", h);
	if(m > 1)
		printf("%d minutes ", m);
	else
		printf("%d minute ", m);
	if(s > 1)
		printf("et %d secondes.", s);
	else
		printf("et %d seconde.", s);
	
}



int main()
{
	int s;
	printf("Nombre de seconde(s) à convertir : ");
	scanf("%d", &s);
	printf("\n");
	decoupe_temps(s);
	
	
}
