/*
 * bandeDessinee.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */
#include <iostream>
using namespace std;
#include "bandeDessinee.h"

BandeDessinee::BandeDessinee(string aut, string tit, string isbn, string pub, string type, string cdl):Livre(aut, tit, isbn,pub,cdl){
	this->dessinateur=type;
	this->categorie = "bandeDessinee";

}
string BandeDessinee::getDessinateur()const{
	return dessinateur;

}

BandeDessinee::~BandeDessinee(){
	delete(this);
}

BandeDessinee::BandeDessinee(const BandeDessinee &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	dessinateur= rom.getDessinateur();
	this->categorie = "bandeDessinee";
}

void BandeDessinee::affiche(){
	Livre::affiche();
	cout<<"Dessinateur:"<<dessinateur<<endl;
}

ostream& operator<<(ostream& out, BandeDessinee &A){
	out<< "Titre: " << A.titre << endl<< "Auteur: " << A.auteur << endl<< "ISBN: " << A.ISBN << endl<< "Public vise: " << A.publique << endl<< "Code du Livre: " << A.code_livre << endl<< "Emprunte : " << A.etatEmprunt << endl<<"Dessinateur:"<<A.dessinateur<<endl;
		return out;
}


