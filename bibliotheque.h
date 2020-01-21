/*
 * bibliotheque.h
 *
 *  Created on: 30 déc. 2019
 *      Author: ngand
 */

#ifndef BIBLIOTHEQUE_H_
#define BIBLIOTHEQUE_H_
#include "listeNoeudlivre.h"

class Bibliotheque{
private:
	string nom;
	string adresse;
	string code_biblio;
	ListeNoeudlivre* listeLivres;
	Bibliotheque** ListeBibliothequesPret;
	int nbre_bibliothequePret;
	int nbre_tailleListeBibliothequesPret;
	int nbre_livres;
	int code_livres;

public:
	Bibliotheque(string,string,string);
	Bibliotheque();
	void affiche();
	void afficheParCategorie(string);

	void demandeLivre(Bibliotheque*,string);

	void achatLivre(Livre*);

	void supprimLivre(Livre*);

	void rendreLivres();

	ListeNoeudlivre* getListeLivres();

	friend bool operator==(Bibliotheque&,Bibliotheque&);
};


#endif /* BIBLIOTHEQUE_H_ */
