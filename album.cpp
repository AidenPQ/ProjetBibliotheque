/*
 * album.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#include <iostream>
using namespace std;
#include "album.h"

Album::Album(string aut, string tit, string isbn, string pub, string cdl, string type):Livre(aut, tit, isbn,pub,cdl){
	this->typeIllustration=type;

}
string Album::getType()const{
	return typeIllustration;

}

Album::Album(const Album &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	typeIllustration= rom.getType();
}

void Album::affiche(){
	Livre::affiche();
	cout<<"Type d'illustration:"<<typeIllustration<<endl;
}

