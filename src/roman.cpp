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

Roman::~Roman(){
	delete(this);
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

ostream& operator<<(ostream& out, Roman &A){

	out<< "Titre: " << A.titre << endl<< "Auteur: " << A.auteur << endl<< "ISBN: " << A.ISBN << endl<< "Public vise: " << A.publique << endl<< "Code du Livre: " << A.code_livre << endl<< "Emprunte : " << A.etatEmprunt << endl<<"Genre:"<<A.genre<<endl;
		return out;
}

