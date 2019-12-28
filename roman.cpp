/*
 * roman.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */

#include "roman.h"
#include <iostream>
using namespace std;

Roman::Roman(string aut, string tit, string isbn, string pub, string gnr, string cdl) : Livre(aut, tit, isbn, pub, cdl)
{
	genre = gnr;
}


Roman::Roman(const Roman &rom) : Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	genre = rom.getGenre();
}

void Roman::affiche(){

}

string Roman::getGenre() const{
	return genre;
}
