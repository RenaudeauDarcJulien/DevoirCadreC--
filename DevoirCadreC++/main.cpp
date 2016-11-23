#include "Cadre.h"	

int main()
{
	bool quitter = false;
	Cadre cadre;

	int choix = 0;
	int taille = 0;
	//Demande a l'utilisateur l'action qu'il souhaite effectuer
	do {
		cout << "\n\n---------------Devoir Cadre---------------\n" << endl;
		cout << "Info Cadre\n" << endl;
		cout << "1 -> Afficher la Longueur du Cadre\n" << endl;
		cout << "2 -> Afficher la Largeur du Cadre\n" << endl;
		cout << "3 -> Afficher la Surface du Cadre \n" << endl;
		cout << "4 -> Afficger le Perimetre du Cadre\n" << endl;
		cout << "5 -> Afficher le Motif\n" << endl;
		cout << "6 -> Modifier Longueur\n" << endl;
		cout << "7 -> Modifier Largeur\n" << endl;
		cout << "8 ->Mofidier le Motif\n" << endl;
		cout << "9 ->Dessiner le Rectangle\n" << endl;
		cout << "10 ->Le Cadre est il carre ?\n" << endl;

		cin >> choix;
		//Switch qui renvoi ce que l'utilisateur a choisi
		switch (choix)
		{
		case 1:
			system("CLS");
			cout << "Longueur:" << cadre.getLongueur() << endl;
			break;
		case 2:
			system("CLS");
			cout << "Largeur:" << cadre.getLargeur() << endl;
			break;
		case 3:
			system("CLS");
			cout << "Surface:" << cadre.getSurface() << endl;
			break;
		case 4:
			system("CLS");
			cout << "Perimetre:" << cadre.getPerimetre() << endl;
			break;
		case 5:
			system("CLS");
			cout << "Motif:" << cadre.getMotif() << endl;
			break;
		case 6:
			system("CLS");
			cadre.setLongueur(taille);
			cout << "Nouvelle Longueur :" << cadre.getLongueur() << endl;
			break;
		case 7:
			system("CLS");
			cadre.setLargeur(taille);
			cout << "Nouvelle Largeur :" << cadre.getLargeur() << endl;
			break;
		case 8:
			system("CLS");
			cadre.setMotif(taille);
			cout << "Nouveau Motif :" << cadre.getMotif() << endl;
			break;
		case 9:
			system("CLS");
			printf("\n");
			for (int i = 1; i <= cadre.getLongueur(); i++) {
				printf("*");
			}
			printf("\n");
			for (int i = 2; i<cadre.getLargeur(); i++) {
				printf("*");
				for (int j = 2; j<cadre.getLongueur(); j++) {
					printf(" ");
				}
				printf("*");
				printf("\n");
			}
			for (int i = 1; i <= cadre.getLongueur(); i++) {
				printf("*");
			}
			printf("\n");
			break;
		case 10:
			system("CLS");
			if (cadre.isCarre())
			{
				cout << "Oui c'est un carre" << endl;
			}
			else
			{
				cout << "Non c'est un est un Rectangle" << endl;
			}
			break;
		default:
			system("CLS");
			cout << "ce choix n'existe pas" << endl;
		}
	} while (choix = true);
	cadre.~Cadre();
	return 0;
}