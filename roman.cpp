/*
 * roman.cpp
 *
 *  Created on: 28 d�c. 2019
 *      Author: ngand
 */

#include "roman.h"
#include <iostream>
using namespace std;

Roman::Roman(string aut, string tit, string isbn, string pub, string gnr, string cdl) : Livre(aut, tit, isbn, pub, cdl)
{
	genre = gnr;
	this->categorie = "roman";
}


Roman::Roman(const Roman &rom) : Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	genre = rom.getGenre();
	this->categorie = "roman";
}

void Roman::affiche(){
	Livre::affiche();
	cout<<"Genre:"<<genre<<endl;
}

string Roman::getGenre() const{
	return genre;
}
