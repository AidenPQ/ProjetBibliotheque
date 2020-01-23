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


	int nbre_bibliothequePret;
	int nbre_tailleListeBibliothequesPret;
	int nbre_livres;
	int code_livres;

public:
	ListeNoeudlivre listeLivres;
	Bibliotheque(string,string,string);
	Bibliotheque();
	void affiche();
	void afficheParCategorie(string);
	Bibliotheque** ListeBibliothequesPret;
	void demandeLivre(Bibliotheque*,string);

	void achatLivre(Livre*);

	void supprimLivre(Livre*);

	void rendreLivres();
	void doubleTableau();

	ListeNoeudlivre getListeLivres();
	string getCode_biblio() const;
	string getNom() const;
	void setListelivres(ListeNoeudlivre&);

	friend bool operator==(Bibliotheque&,Bibliotheque&);
	friend ostream& operator<<(ostream& out, Bibliotheque &B);
};


#endif /* BIBLIOTHEQUE_H_ */
