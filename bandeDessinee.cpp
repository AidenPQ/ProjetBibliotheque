/*
 * bandeDessinee.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */
#include <iostream>
using namespace std;
#include "bandeDessinee.h"

BandeDessinee::BandeDessinee(string aut, string tit, string isbn, string pub, string cdl, string type):Livre(aut, tit, isbn,pub,cdl){
	this->dessinateur=type;

}
string BandeDessinee::getDessinateur()const{
	return dessinateur;

}

BandeDessinee::BandeDessinee(const BandeDessinee &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	dessinateur= rom.getDessinateur();
}

void BandeDessinee::affiche(){
	Livre::affiche();
	cout<<"Dessinateur:"<<dessinateur<<endl;
}




