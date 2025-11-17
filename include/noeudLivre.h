/*
 * noeudlivre.h
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */

#ifndef NOEUDLIVRE_H_
#define NOEUDLIVRE_H_
#include "livre.h"

class Livre;
class Noeudlivre{
private:
	Livre* lvr;
	Noeudlivre *suivant;

public:
	Noeudlivre(Livre* lv);
	Noeudlivre(Livre* lv, Noeudlivre* sv);
	~Noeudlivre();

	Livre* getLivre() const;
	Noeudlivre* getSuivant();

	void setSuivant(Noeudlivre* sv);

};


#endif /* NOEUDLIVRE_H_ */
