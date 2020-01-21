/*
 * recueilPoesie.h
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#ifndef RECUEILPOESIE_H_
#define RECUEILPOESIE_H_
#include <iostream>
using namespace std;
#include "livre.h"

class RecueilPoesie: public Livre{
private:
	string formatPoesie;
public:
	RecueilPoesie(string, string, string, string, string, string="");
	RecueilPoesie(const RecueilPoesie&);
	void affiche();
	string getFormat()const;

	friend ostream& operator<<(ostream& out, RecueilPoesie &P);

};




#endif /* RECUEILPOESIE_H_ */
