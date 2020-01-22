/*
 * adherent.h
 *
 *  Created on: 2 janv. 2020
 *      Author: yimei
 */

#ifndef ADHERENT_H_
#define ADHERENT_H_
#include "bibliotheque.h"
#include "listeNoeudlivre.h"

class Adherent{
private:
	string nom;
	string prenom;
	Bibliotheque biblioInscrit;
	string adresse;
	string numAdherent;
	int nbrEmpruntAuto;
	ListeNoeudlivre listeEmprunt;
public:
	Adherent(string, string, Bibliotheque, string, string);
	void empruntLivre(string);
	void rendreLivre(Livre*);
	ListeNoeudlivre getListeEmprunt() const;

};




#endif /* ADHERENT_H_ */
