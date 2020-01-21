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

void ListeNoeudlivre::ajoute(Livre* l){
	Noeudlivre* N = new Noeudlivre(l);
	N->setSuivant(premier);
	premier = N;

}

void ListeNoeudlivre::enleve(Livre* l){
	if(l->Equals(*premier->getLivre())){
		Noeudlivre* s = premier->getSuivant();
		delete(premier);
		premier = s;
	}
	for(Noeudlivre *courant = premier; courant->getSuivant() != NULL ; courant = courant->getSuivant()){
		if(l->Equals(*courant->getSuivant()->getLivre())){
			Noeudlivre *s = courant->getSuivant()->getSuivant();
			courant->setSuivant(s);
			break;
		}
	}
}

Livre* ListeNoeudlivre::recherche(string code)
{
	for(Noeudlivre *courant = premier; courant != NULL ; courant = courant->getSuivant()){
		if(courant->getLivre()->getCode_livre() == code){
			return courant->getLivre();
		}
	}
	cout << "Livre Non existant" << endl;
	return NULL;
}

void ListeNoeudlivre::afficheCategorie(string categorie){
	for(Noeudlivre *courant = premier; courant != NULL; courant = courant->getSuivant()){
		if(courant->getLivre()->getCategorie() == categorie)
		{
			courant->getLivre()->affiche();
			cout << "" << endl;
		}
	}
}

Livre* ListeNoeudlivre::rechercheISBN(string isbn)
{
	for(Noeudlivre *courant = premier; courant != NULL ; courant = courant->getSuivant()){
		if(courant->getLivre()->getISBN() == isbn){
			return courant->getLivre();
		}
	}
	cout << "Livre Non existant" << endl;
	return NULL;
}


void ListeNoeudlivre::affiche(){
	for(Noeudlivre *courant = premier; courant != NULL; courant = courant->getSuivant()){
		courant->getLivre()->affiche();
		cout << "" << endl;
	}
}

Noeudlivre* ListeNoeudlivre::getPremier(){
	return premier;
}

void ListeNoeudlivre::setPremier(Noeudlivre* nlv){
	premier = nlv;
}
