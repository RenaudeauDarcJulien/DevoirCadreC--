#include "Cadre.h"

//Constructeur
Cadre::Cadre()
{
}
//Destructeur
Cadre::~Cadre()
{
}
//Retourne la Largeur du cadre
int Cadre::getLargeur()
{
	return this->largeur;
}
// Return La Longueur de Longueur
int Cadre::getLongueur()
{
	return this->longueur;
}
// Retourne le Motif
char Cadre::getMotif()
{
	return this->motif;
}
//Permet de changer la Largeur
void Cadre::setLargeur(int l)
{
	cout << "Entrer la Largueur du Cadre: \n";
	cin >> l;
	this->largeur = l;
}
//Permet de changer la Longueur
void Cadre::setLongueur(int L)
{
	cout << "Entrer la Longueur du Cadre: \n";
	cin >> L;
	this->longueur = L;
}
// Change le Motif
void Cadre::setMotif(char newmotif)
{
	cout << "Entrer le Motif: \n";
	cin >> newmotif;
	this->motif = newmotif;
}
// Renvoi un bool pour savoir si le Cadre est un carre
bool Cadre::isCarre()
{
	if (longueur == largeur)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//Recupère la Sruface du Cadre
int Cadre::getSurface()
{
	return longueur*largeur;
}
// Recupere la Perimetre
int Cadre::getPerimetre()
{
	return (longueur*largeur) * 2;
}
