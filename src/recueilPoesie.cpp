/*
 * recueilPoesie.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#include <iostream>
using namespace std;
#include "recueilPoesie.h"

RecueilPoesie::RecueilPoesie(string aut, string tit, string isbn, string pub, string type, string cdl):Livre(aut, tit, isbn,pub,cdl){
	this->formatPoesie=type;
	this->categorie = "recueilPeosie";

}

RecueilPoesie::~RecueilPoesie(){
	delete(this);
}
string RecueilPoesie::getFormat()const{
	return formatPoesie;

}

RecueilPoesie::RecueilPoesie(const RecueilPoesie &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	formatPoesie= rom.getFormat();
	this->categorie = "recueilPoesie";
}

void RecueilPoesie::affiche(){
	Livre::affiche();
	cout<<"Format de Poesie:"<<formatPoesie<<endl;
}

ostream& operator<<(ostream& out, RecueilPoesie &A){
	out<< "Titre: " << A.titre << endl<< "Auteur: " << A.auteur << endl<< "ISBN: " << A.ISBN << endl<< "Public vise: " << A.publique << endl<< "Code du Livre: " << A.code_livre << endl<< "Emprunte : " << A.etatEmprunt << endl<<"Format de Poesie:"<<A.formatPoesie<<endl;
		return out;
}
