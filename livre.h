/*
 * livre.h
 *
 *  Created on: 28 d�c. 2019
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
	string categorie;
	string code_biblioOriginel;
	string code_biblioActuel;

public:
	Livre();
	Livre(string, string, string, string, string = "");
	Livre(const Livre&);
	virtual ~Livre();

	string getCode_livre() const;
	string getAuteur() const;
	string getTitre() const;
	string getPublique() const;
	string getISBN() const;
	bool getEtatEmprunt() const;
	string getCategorie() const;
	string getCode_biblioOriginel() const;
	string getCode_biblioActuel() const;

	void setEtatEmprunt(bool);
	void setCode_Livre(string);
	void setCode_biblioOriginel(string);
	void setCode_biblioActuel(string);

	virtual void affiche() =0;
	bool Equals(Livre*);
	friend ostream& operator<<(ostream& out, Livre &L);


};




#endif /* LIVRE_H_ */
