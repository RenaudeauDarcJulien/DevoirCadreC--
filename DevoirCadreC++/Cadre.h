#pragma once
#include "iostream"
#include<stdio.h>
#include<string.h>
using namespace std;


/*Constante*/
const int LARGEUR = 5;
const int LONGUEUR = LARGEUR * 2;
const char MOTIF = '*';

class Cadre
{
private:
	/*Variable de la Classe*/
	int largeur = LARGEUR;
	int longueur = LARGEUR*2;
	char motif = MOTIF;
public:
	Cadre(); //Constructeur
	~Cadre(); //Desctructeur

	/* GETTEUR_SETTER */
	int getLargeur();
	int getLongueur();
	char getMotif();
	void setLargeur(int l);
	void setLongueur(int L);
	void setMotif(char newmotif);

	bool isCarre();
	int getSurface();
	int getPerimetre();
	
};

