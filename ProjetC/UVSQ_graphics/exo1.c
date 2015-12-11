#include "graphics.h"
#include <stdio.h>
#include <stdlib.h>



enum {VIDE, JOUEUR1, JOUEUR2, MUR};
	
	
void affichagefixe() //Affiche les décors qui ne bougeront pas pendant la partie
{
	POINT p1, p2, p3, p4;
	int i, j;
	p1.x = 0; p1.y = 15;
	p2.x = 15; p2.y = 870;
	p3.x = 870; p3.y = 855;
	p4.x = 855; p4.y = 0;
	
	draw_fill_rectangle(p1, p2, gris);
	draw_fill_rectangle(p2, p3, gris);
	draw_fill_rectangle(p3, p4, gris);
	draw_fill_rectangle(p4, p1, gris);
	
	for(i = 1; i < 9; i++)
	{
		for(j = 1; j < 9; j++)
		{
			p1.x = (i * 80) + (15 * i); p1.y = (j * 80) + (15 * j);
			p2.x = p1.x + 15; p2.y = p1.y + 15;
			draw_fill_rectangle(p1, p2, gris);
		}
	}
}


void affichagejeu(int jeu[][9], int murhorizontal[][8], int murvertical[][8])
{
	int i, j;
	POINT p1, p2, p3;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			p1.x = ((j+1) * 15) + (j * 80);
			p1.y = ((i+1) * 15) + (i * 80);
			p2.x = p1.x + 80;
			p2.y = p1.y + 80;
			if(jeu[i][j] == VIDE)
			{
				draw_fill_rectangle(p1, p2, blanc);
			}
			else if(jeu[i][j] == JOUEUR1)
			{
				draw_fill_rectangle(p1, p2, blanc);
				p3.x = (((j+1) * 15) + (j * 80)) + 40; p3.y = (((i+1) * 15) + (i * 80)) + 40;
				draw_fill_circle(p3, 35, bleu);
			}
			else if(jeu[i][j] == JOUEUR2)
			{
				draw_fill_rectangle(p1, p2, blanc);
				p3.x = (((j+1) * 15) + (j * 80)) + 40; p3.y = (((i+1) * 15) + (i * 80)) + 40;
				draw_fill_circle(p3, 35, rouge);
			}
		}
	}
	
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
		{
			
			if(murhorizontal[i][j] == MUR)
			{
				draw_fill_rectangle(p1, p2, vert);
			}
		}
	}
}

void init_tableaux(int jeu[][9], int murhorizontal[][8], int murvertical[][8])
{
	int charactere;
	int i = 0, j = 0;
	FILE* NouvellePartie = NULL;
	NouvellePartie = fopen("NouvellePartie", "r");
	charactere = fgetc(NouvellePartie);
	do
	{
		if(charactere == '0')
		{
			jeu[i][j] = VIDE;	
		}
		else if(charactere == '1')
		{
			jeu[i][j] = JOUEUR1;	
		}
		else if(charactere == '2')
		{
			jeu[i][j] = JOUEUR2;
		}
		j++;
		if(j == 9)
		{
			j = 0;
			i = i+1;
		}
		charactere = fgetc(NouvellePartie);
	}while(charactere != '\n');
	i = 0;
	j = 0;
	
	charactere = fgetc(NouvellePartie);
	do
	{
		if(charactere == '0')
		{
			murhorizontal[i][j] = VIDE;	
		}
		else if(charactere == '3')
		{
			murhorizontal[i][j] = MUR;	
		}
		j++;
		if(j == 8)
		{
			j = 0;
			i++;
		}
		charactere = fgetc(NouvellePartie);
	}while(charactere != '\n');
	
	i = 0;
	j = 0;
	charactere = fgetc(NouvellePartie);
	do
	{
		if(charactere == '0')
		{
			murvertical[i][j] = VIDE;	
		}
		else if(charactere == '3')
		{
			murvertical[i][j] = MUR;	
		}
		j++;
		if(j == 8)
		{
			j = 0;
			i++;
		}
		charactere = fgetc(NouvellePartie);
	}while(charactere != EOF);
	fclose(NouvellePartie);
}

int main()
{
init_graphics(1300,870);
affiche_auto_off();
// Debut du code

	int murhorizontal[9][8];
	int murvertical[9][8];
	int jeu[9][9];
	affichagefixe();
	
	init_tableaux(jeu, murhorizontal, murvertical);
	
	affichagejeu(jeu, murhorizontal, murvertical);
	affiche_all();
	
// Fin du code

wait_escape();
exit(0);
}
