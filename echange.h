/*
 * echange.h
 *
 *  Created on: 6 janv. 2020
 *      Author: ngand
 */

#ifndef ECHANGE_H_
#define ECHANGE_H_
#include "bibliotheque.h"
class Bibliotheque;
class Echange{
private:
	Bibliotheque* BiblioPreteuse;
	Bibliotheque* BiblioEmprunteuse;
	Livre* livreEchangee;

public:
	Echange(Bibliotheque* bib, Bibliotheque* bibe, Livre* l);
	~Echange();
	void rendrelivre();
};




#endif /* ECHANGE_H_ */
