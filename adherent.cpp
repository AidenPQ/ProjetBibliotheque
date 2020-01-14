/*
 * adherent.cpp
 *
 *  Created on: 2 janv. 2020
 *      Author: yimei
 */
#include <iostream>
using namespace std;
#include "adherent.h"
#include "bibliotheque.h"

Adherent::Adherent(string name, string surname, Bibliotheque biblio, string adr, string numadh) : listeEmprunt()
{
	nom=name;
	prenom=surname;
	biblioInscrit=biblio;
	adresse=adr;
	numAdherent=numadh;
	nbrEmpruntAuto=10;
}

void Adherent::empruntLivre(string code){
	if(nbrEmpruntAuto>0){
		Livre* emprunt = NULL;
		emprunt = biblioInscrit.getListeLivres().recherche(code);
		if (!emprunt->getEtatEmprunt())
		{
			emprunt->setEtatEmprunt(true);
			listeEmprunt.ajoute(emprunt);
			nbrEmpruntAuto--;
		}
		else{
			cout << "Livre Indisponible pour emprunt" << endl;
		}

}
	else{
		cout<<"Capacite d'emprunt atteinte, veuillez rendre les livres empruntes avant d'effectuer de nouveaux emprunts"<<endl;
	}

}

void Adherent::rendreLivre(Livre* livre){
	listeEmprunt.enleve(livre);
	livre->setEtatEmprunt(false);
	nbrEmpruntAuto++;

}





