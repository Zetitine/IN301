#include <stdlib.h>
#include <stdio.h>
#include "circonference.c"
#include "pi.h"
#include "surface.c"

int main()
{
	
	int rayon = 0;
	printf("choisissez un rayon : ");
	scanf("%d", &rayon);
	printf("\nSurface : %f et Circonference : %f\n", surface(rayon), circonference(rayon));
	
}
