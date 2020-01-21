/*
 * bibliotheque.h
 *
 *  Created on: 30 déc. 2019
 *      Author: ngand
 */

#ifndef BIBLIOTHEQUE_H_
#define BIBLIOTHEQUE_H_
#include "listeNoeudlivre.h"
#include "echange.h"

class Bibliotheque{
private:
	string nom;
	string adresse;
	string code_biblio;
	ListeNoeudlivre listeLivres;
	int nbre_echanges;
	int taille_tabEchange;
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

	ListeNoeudlivre getListeLivres();
};


#endif /* BIBLIOTHEQUE_H_ */
