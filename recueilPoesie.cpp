/*
 * recueilPoesie.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#include <iostream>
using namespace std;
#include "recueilPoesie.h"

RecueilPoesie::RecueilPoesie(string aut, string tit, string isbn, string pub, string cdl, string type):Livre(aut, tit, isbn,pub,cdl){
	this->formatPoesie=type;

}
string RecueilPoesie::getFormat()const{
	return formatPoesie;

}

RecueilPoesie::RecueilPoesie(const RecueilPoesie rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	formatPoesie= rom.getFormat();
}

void RecueilPoesie::affiche(){
	Livre::affiche();
	cout<<"Format de Poesie:"<<formatPoesie<<endl;
}



