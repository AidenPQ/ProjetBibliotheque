/*
 * noeudlivre.cpp
 *
 *  Created on: 28 d�c. 2019
 *      Author: ngand
 */


#include "noeudLivre.h"

Noeudlivre::Noeudlivre(Livre* lv){
	lvr = lv;
	suivant = NULL;
}

Noeudlivre::Noeudlivre(Livre* lv, Noeudlivre *sv){
	lvr = lv;
	suivant = sv;
}

Noeudlivre::~Noeudlivre(){
	delete(this);
}

Livre* Noeudlivre::getLivre() const{
	return lvr;
}

Noeudlivre* Noeudlivre::getSuivant(){
	return suivant;
}

void Noeudlivre::setSuivant(Noeudlivre *sv){
	suivant = sv;
}
