/*
 * listeNoeudlivre.h
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */

#ifndef LISTENOEUDLIVRE_H_
#define LISTENOEUDLIVRE_H_

#include "noeudlivre.h"

class ListeNoeudlivre{
private:
	Noeudlivre *premier;

public:
	ListeNoeudlivre();

	void ajoute(Livre*);
	void enleve(Livre*);
	Livre* recherche(string) throw(int);
	Livre* rechercheISBN(string) throw(int);

	void afficheCategorie(string categorie);
	void affiche();


	Noeudlivre* getPremier();
	void setPremier(Noeudlivre*);
};




#endif /* LISTENOEUDLIVRE_H_ */
