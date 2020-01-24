/*
 * bibliotheque.h
 *
 *  Created on: 30 d�c. 2019
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
	int nbre_livres;
	int code_livres;

public:
	Bibliotheque(string,string,string);
	Bibliotheque();
	~Bibliotheque();
	void affiche();
	void afficheParCategorie(string);
	void demandeLivre(Bibliotheque*,string);

	void achatLivre(Livre*);

	void supprimLivre(Livre*);

	void rendreLivres();

	ListeNoeudlivre getListeLivres();
	string getCode_biblio() const;
	string getNom() const;
	void setListelivres(ListeNoeudlivre&);

	friend bool operator==(Bibliotheque&,Bibliotheque&);
	friend ostream& operator<<(ostream& out, Bibliotheque &B);
};


#endif /* BIBLIOTHEQUE_H_ */
