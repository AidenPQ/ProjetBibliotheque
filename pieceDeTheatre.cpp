/*
 * pieceDeTheatre.cpp
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */
#include <iostream>
using namespace std;
#include "pieceDeTheatre.h"

PieceDeTheatre::PieceDeTheatre(string aut, string tit, string isbn, string pub, string type, string cdl):Livre(aut, tit, isbn,pub,cdl){
	this->siecle=type;
	this->categorie = "pieceDeTheatre";

}
string PieceDeTheatre::getSiecle()const{
	return siecle;


}

PieceDeTheatre::PieceDeTheatre(const PieceDeTheatre &rom):Livre(rom.getAuteur(), rom.getTitre(), rom.getISBN(), rom.getPublique(), rom.getCode_livre()){
	siecle= rom.getSiecle();
	this->categorie = "pieceDeTheatre";
}

void PieceDeTheatre::affiche(){
	Livre::affiche();
	cout<<"Siecle:"<<siecle<<endl;
}

ostream& operator<<(ostream& out, PieceDeTheatre A){
	out<< "Titre: " << A.titre << endl<< "Auteur: " << A.auteur << endl<< "ISBN: " << A.ISBN << endl<< "Public vise: " << A.publique << endl<< "Code du Livre: " << A.code_livre << endl<< "Emprunte : " << A.etatEmprunt << endl<<"Siecle:"<<A.siecle<<endl;
		return out;
}



