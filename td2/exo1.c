#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(double));
	printf("%lu\n", sizeof(char*));
	printf("%lu\n", sizeof(void*));
	printf("%lu\n", sizeof(int*));
	printf("%lu\n", sizeof(double*));
	printf("%lu\n", sizeof(int**));
	printf("%lu\n", sizeof(int[10]));
	printf("%lu\n", sizeof(char[7][3]));
	//printf("%lu\n", sizeof(int[]));
	
	printf("\n\n");
	
	char tab[10];
	printf("%lu\n", sizeof(tab));
	printf("%lu\n", sizeof(tab[0]));
	printf("%lu\n", sizeof(&tab[0]));
	printf("%lu\n", sizeof(*&tab));
	printf("%lu\n", sizeof(*&tab[0]));

	printf("\n\n");
	
	char (*p)[10] = &tab;
	printf("%lu\n", sizeof(p));
	printf("%lu\n", sizeof(*p));
	printf("%lu\n", sizeof(*(p)[2]));
	printf("%lu\n", sizeof(&(*p)[2]));
}
