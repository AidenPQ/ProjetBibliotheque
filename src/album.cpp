/*
 * album.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#include <iostream>
using namespace std;
#include "album.h"

Album::Album(string aut, string tit, string isbn, string pub, string type, string cdl):Livre(aut, tit, isbn,pub,cdl){
	this->typeIllustration=type;
	this->categorie = "album";

}
string Album::getType()const{
	return typeIllustration;

}
Album::~Album(){
	delete(this);
}

Album::Album(const Album &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	typeIllustration= rom.getType();
	this->categorie = "album";
}

void Album::affiche(){
	Livre::affiche();
	cout<<"Type d'illustration:"<<typeIllustration<<endl;
}

ostream& operator<<(ostream& out, Album A){
	out<< "Titre: " << A.titre << endl<< "Auteur: " << A.auteur << endl<< "ISBN: " << A.ISBN << endl<< "Public vise: " << A.publique << endl<< "Code du Livre: " << A.code_livre << endl<< "Emprunte : " << A.etatEmprunt << endl<<"Type d'illustration:"<<A.typeIllustration<<endl;
	return out;
}

