/*
 * echange.cpp
 *
 *  Created on: 6 janv. 2020
 *      Author: ngand
 */

#include "echange.h"

Echange::Echange(Bibliotheque* biblprt, Bibliotheque* biblemp, Livre* lv){
	BiblioPreteuse = biblprt;
	BiblioEmprunteuse = biblemp;
	livreEchangee = lv;
}

Echange::~Echange(){

}

void Echange::rendrelivre() {

}
