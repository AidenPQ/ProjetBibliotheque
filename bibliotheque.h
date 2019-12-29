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
	ListeNoeudlivre listeLivres;

public:
	Bibliotheque(string,string,string);

	void affiche();
	void afficheParCategorie(string);

	void demandeLivre(Bibliotheque,string);

	void achatLivre(Livre);

	void supprimLivre(Livre);

	void rendreLivres();

	ListeNoeudlivre getListeLivres();
};


#endif /* BIBLIOTHEQUE_H_ */
