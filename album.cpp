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

Album::Album(const Album){

}

void Album::affiche(){
	Livre::affiche();
	cout<<"Type d'illustration:"<<typeIllustration<<endl;
}

