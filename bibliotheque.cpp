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
	if(livreEmprunte == NULL || livreEmprunte->getEtatEmprunt()){
		cout << "ce livre n'existe pas dans cette bibliotheque ou n'est pas disponible pour echange." << endl;
	}
		if(nbre_bibliothequePret >= nbre_tailleListeBibliothequesPret){
			doubleTableau();
		}
		livreEmprunte->setCode_biblioActuel(code_biblio);
		ListeBibliothequesPret[nbre_bibliothequePret] = biblio;
		nbre_bibliothequePret++;
		listeLivres.ajoute(livreEmprunte);
		if(livreEmprunte->Equals(biblio->getListeLivres().getPremier()->getLivre())){
			ListeNoeudlivre L;
			for(Noeudlivre *courant = biblio->getListeLivres().getPremier()->getSuivant(); courant != NULL ; courant = courant->getSuivant()){
				L.ajoute(courant->getLivre());
			}
			ListeBibliothequesPret[nbre_bibliothequePret - 1]->setListelivres(L);
			//biblio->setListelivres(L);
		}
		else{
			ListeBibliothequesPret[nbre_bibliothequePret - 1]->getListeLivres().enleve(livreEmprunte);
			//biblio->getListeLivres().enleve(livreEmprunte);
		}
	}


ListeNoeudlivre Bibliotheque::getListeLivres(){
	return listeLivres;
}

void Bibliotheque::rendreLivres(){
	ListeNoeudlivre LivreArendre;
	int i = 0;
	if(listeLivres.getPremier()->getLivre()->getCode_biblioOriginel() != listeLivres.getPremier()->getLivre()->getCode_biblioActuel() && !listeLivres.getPremier()->getLivre()->getEtatEmprunt()){
		ListeNoeudlivre L;
		for(Noeudlivre *courant = listeLivres.getPremier()->getSuivant(); courant != NULL ; courant = courant->getSuivant()){
			L.ajoute(courant->getLivre());
		}
		LivreArendre.ajoute(listeLivres.getPremier()->getLivre());
		listeLivres = L;
	}
	for(Noeudlivre *courant = listeLivres.getPremier()->getSuivant(); courant != NULL ; courant = courant->getSuivant()){
		if(courant->getLivre()->getCode_biblioOriginel() != courant->getLivre()->getCode_biblioActuel() && !courant->getLivre()->getEtatEmprunt()){
			LivreArendre.ajoute(courant->getLivre());
			i++;
			listeLivres.enleve(courant->getLivre());
		}
	}
	for(Noeudlivre* courant = LivreArendre.getPremier(); courant != NULL; courant = courant->getSuivant()){
		for(int b = 0; b < nbre_bibliothequePret; b++){
			if(courant->getLivre()->getCode_biblioOriginel() == ListeBibliothequesPret[b]->getCode_biblio()){
				ListeNoeudlivre L;
				for(Noeudlivre *courant1 = ListeBibliothequesPret[b]->getListeLivres().getPremier()->getSuivant(); courant1 != NULL ; courant1 = courant1->getSuivant()){
					L.ajoute(courant1->getLivre());
				}
				L.ajoute(courant->getLivre());
				ListeBibliothequesPret[b]->setListelivres(L);
				cout << ListeBibliothequesPret << endl;
			}
		}
	}
	/*for(Noeudlivre *courant = listeLivres.getPremier(); courant != NULL ; courant = courant->getSuivant()){
			if(courant->getLivre()->getCode_biblioOriginel() != courant->getLivre()->getCode_biblioActuel()){
				for(int i = 0; i < nbre_tailleListeBibliothequesPret; i++){
					if(ListeBibliothequesPret[i]->getCode_biblio() == courant->getLivre()->getCode_biblioOriginel()){
						if(!courant->getLivre()->getEtatEmprunt()){
							ListeBibliothequesPret[i]->getListeLivres().ajoute(courant->getLivre());
							courant->getLivre()->getCode_biblioActuel() = courant->getLivre()->getCode_biblioOriginel();
							listeLivres.enleve(courant->getLivre());
						}
					}
				}
			}
		}*/
}

string Bibliotheque::getCode_biblio() const{
	return code_biblio;
}

void Bibliotheque::supprimLivre(Livre* livre){
	if(!livre->getEtatEmprunt()){
		listeLivres.enleve(livre);
	}
}

void Bibliotheque::setListelivres(ListeNoeudlivre& L){
	listeLivres = L;
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
	for(int i = 0; i < newsize; i++){
			tab1[i] = NULL;
		}
	for(int i = 0; i < nbre_tailleListeBibliothequesPret; i++){
		tab1[i] = ListeBibliothequesPret[i];
	}
	ListeBibliothequesPret = tab1;
	nbre_tailleListeBibliothequesPret = newsize;
}


