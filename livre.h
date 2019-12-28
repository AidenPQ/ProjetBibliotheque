/*
 * livre.h
 *
 *  Created on: 28 déc. 2019
 *      Author: ngand
 */

#ifndef LIVRE_H_
#define LIVRE_H_

#include <iostream>
using namespace std;

class Livre{
protected:
	string code_livre;
	string auteur;
	string titre;
	string ISBN;
	string publique;
	bool etatEmprunt;

public:
	Livre(string, string, string, string, string = "");
	string getCode_livre() const;
	string getAuteur() const;
	string getTitre() const;
	string getPublique() const;
	string getISBN() const;
	bool getEtatEmprunt() const;

	void setEtatEmprunt(bool);
	void setCode_Livre(string);

	void affiche();

};




#endif /* LIVRE_H_ */
