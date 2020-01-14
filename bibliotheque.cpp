/*
 * bibliotheque.cpp
 *
 *  Created on: 4 janv. 2020
 *      Author: ngand
 */

#include "bibliotheque.h"
#include "album.h"
#include "bandeDessinee.h"
#include "pieceDeTheatre.h"
#include "recueilPoesie.h"
#include "roman.h"
#include <iostream>
#include <sstream>
using namespace std;

Bibliotheque::Bibliotheque(string name, string address, string cd_biblio) : listeLivres()
{
	nom = name;
	adresse = address;
	code_biblio = cd_biblio;
	nbre_livres = 0;
	nbre_echanges = 0;
	taille_tabEchange = 10;
	listeEchange = new Echange*[10];
}

Bibliotheque::Bibliotheque() : listeLivres()
{
	nom = "";
	adresse = "";
	code_biblio = "";
	nbre_livres = 0;
	nbre_echanges = 0;
	taille_tabEchange = 10;
	listeEchange = new Echange*[10];
}

void Bibliotheque::achatLivre(Livre* livre)
{
	nbre_livres++;
	int k = 1;
	stringstream ss;
	ss<<k;
	string s;
	ss>>s;
	string code = code_biblio + s;
	livre->setCode_Livre(code);
	listeLivres.ajoute(livre);
}

void Bibliotheque::affiche()
{
	cout << "Nom de la bibliotheque: " << nom << endl;
	cout << "Adresse: " << adresse << endl;
	cout << "Code de la bibliotheque: " << code_biblio << endl;
	cout << "" << endl;
	cout << "Livres de la Bibliotheque: " << endl;
	listeLivres.affiche();
}

void Bibliotheque::afficheParCategorie(string cat){
	cout << "Nom de la bibliotheque: " << nom << endl;
		cout << "Adresse: " << adresse << endl;
		cout << "Code de la bibliotheque: " << code_biblio << endl;
		cout << "" << endl;
		cout << cat <<"s de la Bibliotheque: " << endl;
		listeLivres.afficheCategorie(cat);

}

void Bibliotheque::demandeLivre(Bibliotheque biblio, string isbn){


}

ListeNoeudlivre Bibliotheque::getListeLivres(){
	return listeLivres;
}

void Bibliotheque::rendreLivres(){

}

void Bibliotheque::supprimLivre(Livre* livre){

}

void Bibliotheque::doubleTableau(Echange** ech, int size){
	int newsize = size*2;
	Echange** tab1 = new Echange*[newsize];
	for(int i = 0; i < size; i++){
		tab1[i] = ech[i];
	}
	ech = tab1;
	size = newsize;
}
