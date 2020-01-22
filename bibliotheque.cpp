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
	code_livres = 0;
	nbre_tailleListeBibliothequesPret = 10;
	nbre_bibliothequePret = 0;
	ListeBibliothequesPret = new Bibliotheque*[nbre_tailleListeBibliothequesPret];
	for(int i = 0; i < nbre_tailleListeBibliothequesPret; i++){
		ListeBibliothequesPret[i] = NULL;
	}
}

Bibliotheque::Bibliotheque() : listeLivres()
{
	nom = "";
	adresse = "";
	code_biblio = "";
	nbre_livres = 0;
	code_livres = 0;
	nbre_tailleListeBibliothequesPret = 10;
	nbre_bibliothequePret = 0;
	ListeBibliothequesPret = new Bibliotheque*[nbre_tailleListeBibliothequesPret];
	for(int i = 0; i < nbre_tailleListeBibliothequesPret; i++){
			ListeBibliothequesPret[i] = NULL;
	}
}

void Bibliotheque::achatLivre(Livre* livre)
{
	code_livres++;
	stringstream ss;
	ss<<code_livres;
	string s;
	ss>>s;
	string code = code_biblio + s;
	livre->setCode_biblioOriginel(code_biblio);
	livre->setCode_biblioActuel(code_biblio);
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

ostream& operator<<(ostream& out, Bibliotheque &B){
	out<<"Nom de la bibliotheque: " << B.nom << endl<<"Adresse: " << B.adresse << endl<<"Code de la bibliotheque: " << B.code_biblio << endl<<"" << endl<<"Livres de la Bibliotheque: " << endl<<B.listeLivres<<endl;
	return out;
}

void Bibliotheque::afficheParCategorie(string cat){
		cout << "Nom de la bibliotheque: " << nom << endl;
		cout << "Adresse: " << adresse << endl;
		cout << "Code de la bibliotheque: " << code_biblio << endl;
		cout << "" << endl;
		cout << cat <<"s de la Bibliotheque: " << endl;
		listeLivres.afficheCategorie(cat);

}

void Bibliotheque::demandeLivre(Bibliotheque* biblio, string isbn){
	Livre* livreEmprunte = biblio->getListeLivres().rechercheISBN(isbn);
	bool BiblioDejaPresent = false;
	if(livreEmprunte == NULL || livreEmprunte->getEtatEmprunt()){
		cout << "ce livre n'existe pas dans cette bibliotheque ou n'est pas disponible pour echange." << endl;
	}
	else{
		for(int i = 0; i < nbre_bibliothequePret; i++){
			if(ListeBibliothequesPret[i] == biblio){
				BiblioDejaPresent = true;
			}
		}
		if(!BiblioDejaPresent){
			if(nbre_bibliothequePret >= nbre_tailleListeBibliothequesPret){
				doubleTableau();
			}
			ListeBibliothequesPret[nbre_bibliothequePret] = biblio;
			nbre_bibliothequePret++;
		}
		listeLivres.ajoute(livreEmprunte);
		biblio->getListeLivres().enleve(livreEmprunte);
	}

}

ListeNoeudlivre Bibliotheque::getListeLivres(){
	return listeLivres;
}

void Bibliotheque::rendreLivres(){

}

void Bibliotheque::supprimLivre(Livre* livre){

}

bool operator==(Bibliotheque &B1,Bibliotheque &B2){
	if((B1.nom == B2.nom)&&(B1.adresse == B2.adresse)&&(B1.code_biblio == B2.code_biblio)){
			return true;
		}
		return false;
}

void Bibliotheque::doubleTableau(){
	int newsize = nbre_tailleListeBibliothequesPret*2;
	Bibliotheque** tab1 = new Bibliotheque*[newsize];
	for(int i = 0; i < nbre_tailleListeBibliothequesPret; i++){
		tab1[i] = ListeBibliothequesPret[i];
	}
	ListeBibliothequesPret = tab1;
	nbre_tailleListeBibliothequesPret = newsize;
}


