/*
 * noeudlivre.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */


#include "noeudlivre.h"

Noeudlivre::Noeudlivre(Livre* lv){
	lvr = lv;
	suivant = NULL;
}

Noeudlivre::Noeudlivre(Livre* lv, Noeudlivre *sv){
	lvr = lv;
	suivant = sv;
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
