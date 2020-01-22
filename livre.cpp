/*
 * livre.cpp
 *
 *  Created on: 28 d�c. 2019
 *      Author: ngand
 */

#include "livre.h"
#include <iostream>
using namespace std;

Livre::Livre(){
	auteur = "";
	titre = "";
	ISBN = "";
	code_livre = "";
	publique = "";
	etatEmprunt = false;
	categorie = "livre";
	code_biblioOriginel = "";
	code_biblioActuel = "";
}

Livre::Livre(string aut, string tit, string isbn, string pub, string cdl){
	auteur = aut;
	titre = tit;
	ISBN = isbn;
	publique = pub;
	code_livre = cdl;
	etatEmprunt = false;
	categorie = "livre";
	code_biblioOriginel = "";
	code_biblioActuel = "";

}

Livre::Livre(const Livre &l){
	auteur = l.getAuteur();
	titre = l.getTitre();
	ISBN = l.getISBN();
	publique = l.getPublique();
	code_livre = l.getCode_livre();
	etatEmprunt = false;
	categorie = "roman";
	code_biblioOriginel = "";
	code_biblioActuel = "";
}

Livre::~Livre(){

}


void Livre::affiche(){
	cout << "Titre: " << titre << endl;
	cout << "Auteur: " << auteur << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << "Public vise: " << publique << endl;
	cout << "Code du Livre: " << code_livre << endl;
	cout << "Emprunte : " << etatEmprunt << endl;
}




bool Livre::Equals(Livre* l)
{
	if((auteur == l->getAuteur())&&(titre == l->getTitre())&&(ISBN == l->getISBN())&&(code_livre == l->getCode_livre())&&(publique == l->getPublique())){
		return true;
	}
	return false;
}


void Livre::setCode_Livre(string cdl){
	code_livre = cdl;
}

void Livre::setEtatEmprunt(bool o){
	etatEmprunt = o;
}

void Livre::setCode_biblioOriginel(string cdb){
	code_biblioOriginel = cdb;
}
void Livre::setCode_biblioActuel(string cdl){
	code_biblioActuel = cdl;
}




string Livre::getAuteur() const{
	return auteur;
}

string Livre::getTitre() const{
	return titre;
}

string Livre::getISBN() const{
	return ISBN;
}

string Livre::getPublique() const{
	return publique;
}

string Livre::getCode_livre() const{
	return code_livre;
}

bool Livre::getEtatEmprunt() const{
	return etatEmprunt;
}

string Livre::getCategorie() const{
	return categorie;
}


string Livre::getCode_biblioOriginel() const{
	return code_biblioOriginel;
}

string Livre::getCode_biblioActuel() const{
	return code_biblioActuel;
}






