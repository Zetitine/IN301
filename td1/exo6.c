#include <stdio.h>
#include <stdlib.h>

void test1(int nbr1, int nbr2)
{
	int i;
	int somme1 = 0, somme2 = 0;
	for(i = 1; i <= nbr1 / 2; i++) //Boucle allant de 1 à (nbr1 / 2) pour tester les diviseurs de nbr1
	{
		if(nbr1 % i == 0) //Si le modulo vaut 0, i est un diviseur de nbr1
		{
			somme1 = somme1 + i;
		}
	}
		
	if(somme1 == nbr2) //Si la somme des diviseurs de nbr1 ne vaut pas nbr2, pas la peine d'aller plus loin dans le test des nombres amis
	{	
		
		for(i = 1; i <= nbr2 / 2; i++)
		{
			if(nbr2 % i == 0)
			{
				somme2 = somme2 + i;
			}		
		}
		
		if(somme2 == nbr1)
		{
			printf("%d et %d sont des nombres amis\n", nbr1, nbr2);
		}	
	}
	
	else
	{
		printf("Ces nombres ne sont pas amis\n");		
	}
	
}


void listedamis(int Nmax)
{
	int N, M;
	int i, j;
	int somme1 = 0, somme2 = 0;
	
	for(N = 2; N <= Nmax; N++)
	{
		for(M = 1; M < N; M++)
		{
			if(N % 2 == 0 && M % 2 == 0 || N % 2 == 1 && M % 2 == 1)//Pour diminuer la complexité, les nombres amis sont toujours pairs entre eux OU impair entre eux
			{
				for(i = 1; i <= N / 2; i++) //Boucle allant de 1 à (N / 2) pour tester les diviseurs de N
				{
					if(N % i == 0) //Si le modulo vaut 0, i est un diviseur de N
					{
						somme1 = somme1 + i;
						if(somme1 > M) //Condition pour réduire la complexité du programme et le faire travailler plus vite
						{
							break;
						}
					}
				}	
				
				for(i = 1; i <= M / 2; i++)
				{
					if(M % i == 0)
					{
						somme2 = somme2 + i;
					}		
				}
		
				if(somme2 == N && somme1 == M)
				{
					printf("%d et %d sont des nombres amis\n", N, M);
				}
			}
			somme1 = 0;
			somme2 = 0;
		}
	}
	
}


int main()
{
	int nbr1, nbr2;
	int Nmax;
	int i;
	int somme1 = 0, somme2 = 0;
	printf("Choisissez un nombre : ");
	scanf("%d", &nbr1);
	printf("Choisissez-en un deuxieme : ");
	scanf("%d", &nbr2);
	
	test1(nbr1, nbr2); //Envoi à la zone de test pour voir si ces deux nombres sont amis
	
	printf("Choisissez un nombre Nmax : ");
	scanf("%d", &Nmax);
	
	listedamis(Nmax);
	
}
