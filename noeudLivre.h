/*
 * noeudLivre.h
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */

#ifndef NOEUDLIVRE_H_
#define NOEUDLIVRE_H_

#include "livre.h"

class NoeudLivre{
private:
	Livre livre;
	NoeudLivre* suivant;

public:
	NoeudLivre(Livre l);

};




#endif /* NOEUDLIVRE_H_ */
