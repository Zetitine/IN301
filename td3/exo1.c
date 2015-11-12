#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isFloat( char *s)
{
	int i = 0;
	while(s[i] != '\n')
	{
		if(isdigit(s[i]) || s[i] == '.' || s[i] == '-')
		{i++;}
		else
		{return 0;}
	}
	return 1;
}

int main(int argc, char** argv)
{
	double somme = 0;
	int i;
	for(i=0; i<argc; i++){
		if(isFloat(*argv))
		{
			printf("%s\n", argv[i]);
			somme = somme + atof(argv[i]);
		}
	}
	printf("%g\n", somme);
	return 0;
	
	
}
