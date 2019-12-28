/*
 * listeNoeudlivre.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */

#include "listeNoeudlivre.h"

ListeNoeudlivre::ListeNoeudlivre(){
	premier = NULL;
}

void ListeNoeudlivre::ajoute(Livre l){
	Noeudlivre* N = new Noeudlivre(l);
	N->setSuivant(premier);
	premier = N;

}

void ListeNoeudlivre::enleve(Livre l){
	if(l.Equals(premier->getLivre())){
		Noeudlivre* s = premier->getSuivant();
		delete(premier);
		premier = s;
	}
	for(Noeudlivre *courant = premier->getSuivant(); courant->getSuivant() != NULL; courant->getSuivant()){
		if(l.Equals(courant->getLivre())){
			Noeudlivre* s = courant->getSuivant();
			delete(courant);
			courant = s;
			break;
		}
	}
}

Noeudlivre* ListeNoeudlivre::getPremier(){
	return premier;
}

void ListeNoeudlivre::setPremier(Noeudlivre* nlv){
	premier = nlv;
}
