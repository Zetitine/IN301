#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct element{
	char val;
	struct element *suiv;
};
typedef struct element element;
typedef element* liste;

void afficher(liste zouk){
	if(zouk != NULL){
		printf("%c", zouk->val);
		if(zouk->suiv != NULL){
			afficher(zouk->suiv);
		}
	}
}

liste ajout_fin(liste zouk, char* e){
	while(zouk->suiv != NULL){
		zouk = zouk->suiv;
	}
	
	
}
liste ajout(liste zouk, char* e){
	if(zouk[0] == '\0'){
		return 1;}
		zouk = ajout_
	
}

int main(int argc, char** argv){
	
	
	
	
	
}
