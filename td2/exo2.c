#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Tableau{
	int taille;
	int tab[100];
};

typedef struct Tableau Tableau;

int alea(int n)
{
	
	return random()%n;
}

Tableau init_tableau(int n)
{
	Tableau tab;
	tab.taille = n;
	int i;
	for(i = 0 ; i < tab.taille ; i++)
	{
		tab.tab[i] = alea(20);
	}
	return tab;
}
void affiche_tableau(Tableau tab)
{
	int i;
	for(i = 0; i < tab.taille; i++)
	{
		printf("%d\n", tab.tab[i]);
	}	
}
void produit(Tableau tab)
{
	int i, produit = 1;
	for(i = 0; i < tab.taille; i++)
	{
		produit = produit * tab.tab[i];
	}
	printf("Le produit est : %d", produit);
}
int main()
{
	srand(time(NULL));
	//printf("%lu", sizeof(Tableau));
	Tableau tab = init_tableau(10);
	affiche_tableau(tab);
	produit(tab);
}
