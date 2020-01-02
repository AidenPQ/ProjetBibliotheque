/*
 * adherent.cpp
 *
 *  Created on: 2 janv. 2020
 *      Author: yimei
 */
#include <iostream>
using namespace std;
#include "adherent.h"

Adherent::Adherent(string name, string surname, Bibliotheque biblio, string adr, string numadh){
	nom=name;
	prenom=surname;
	biblioInscrit=biblio;
	adresse=adr;
	numAdherent=numadh;
	nbrEmpruntAuto=10;
}

void Adherent::empruntLivre(string code){
	if(nbrEmpruntAuto>0){
		Livre emprunt= biblioInscrit.getListeLivres().recherche(code);
		if (emprunt ==false) {
			listeEmprunt[nbrEmpruntAuto-1]=emprunt;
					listeEmprunt[nbrEmpruntAuto-1].setEtatEmprunt(true);
					nbrEmpruntAuto--;
		}

}
	else{
		cout<<"Capacite d'emprunt atteinte, veuillez rendre les livres empruntes avant d'effectuer de nouveaux emprunts"<<endl;
	}

}

void Adherent::rendreLivre(Livre livre){
	for(int i=0;i<10;i++){
		if(livre == listeEmprunt[i]){
			listeEmprunt[i]= NULL;
		}
	}
	livre.setEtatEmprunt(false);
	nbrEmpruntAuto++;

}





