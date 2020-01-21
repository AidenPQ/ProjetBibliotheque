/*
 * echange.h
 *
 *  Created on: 6 janv. 2020
 *      Author: ngand
 */

#ifndef ECHANGE_H_
#define ECHANGE_H_

#include <iostream>
using namespace std;

template < class T, class U>

class Echange{
private:
	T* BiblioPreteuse;
	U* livreEchangee;

public:
	Echange(T* bib, U* l);
};




#endif /* ECHANGE_H_ */
