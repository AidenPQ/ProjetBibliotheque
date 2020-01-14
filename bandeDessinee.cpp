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

BandeDessinee::BandeDessinee(const BandeDessinee &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	dessinateur= rom.getDessinateur();
	this->categorie = "bandeDessinee";
}

void BandeDessinee::affiche(){
	Livre::affiche();
	cout<<"Dessinateur:"<<dessinateur<<endl;
}




