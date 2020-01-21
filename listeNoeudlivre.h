/*
 * listeNoeudlivre.h
 *
 *  Created on: 28 d�c. 2019
 *      Author: ngand
 */

#ifndef LISTENOEUDLIVRE_H_
#define LISTENOEUDLIVRE_H_

#include "noeudLivre.h"

class ListeNoeudlivre{
private:
	Noeudlivre *premier;

public:
	ListeNoeudlivre();

	void ajoute(Livre*);
	void enleve(Livre*);
	Livre* recherche(string);
	Livre* rechercheISBN(string);

	void afficheCategorie(string categorie);
	void affiche();
	friend ostream& operator<<(ostream& out, ListeNoeudlivre &N);


	Noeudlivre* getPremier();
	void setPremier(Noeudlivre*);
};




#endif /* LISTENOEUDLIVRE_H_ */
