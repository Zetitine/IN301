#include <stdio.h>
#include <stdlib.h>

struct element{
	int val;
	struct element *suiv;
};

typedef struct element element;
typedef element* liste;

liste creer_liste_vide()
{
	return NULL;
}
int test_liste_vide(liste test)
{
	return(test == NULL);
	
}

void afficher(liste zouk)
{
	while(!test_liste_vide(zouk))
	{
		printf("%d ", zouk->val);
		zouk = zouk->suiv;
	}
	
}
void liberer(liste zouk)
{
	if(!test_liste_vide(zouk))
	{
		liberer(zouk->suiv);
		free(zouk);
	}
	
}

liste ajout_debut(liste zouk, int e)
{
	liste temp = malloc(sizeof(element));
	temp->val = e;
	temp->suiv = zouk;
	return temp;
}

liste ajout_fin(liste zouk, int e)
{
	liste temp = malloc(sizeof(element));
	liste debut = zouk;
	while(zouk->suiv != NULL)
	{
		zouk = zouk->suiv;
	}
	temp->val = e;
	temp->suiv = NULL;	
	zouk->suiv = temp;
	return debut;
}

liste triage(liste zouk)
{
	liste temp = zouk;
	
}

liste ajout_tri(liste zouk, int e)
{
	liste temp = zouk;
	liste new = malloc(sizeof(element));
	new->val = e;
	if(zouk == NULL || e < zouk->val)
	{
		return ajout_debut(zouk, e);
	}
	while(temp->suiv == NULL && e > temp->suiv->val)
	{
		temp = temp->suiv;
	}
	new->suiv = temp->suiv;
	temp->suiv = new;
	return zouk;
}

int main()
{
	liste zouk = creer_liste_vide();
	zouk = ajout_debut(zouk, 4);
	zouk = ajout_fin(zouk, 5);
	zouk = ajout_tri(zouk, 3);
	afficher(zouk);
}

