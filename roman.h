/*
 * roman.h
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#ifndef ROMAN_H_
#define ROMAN_H_
#include <iostream>
using namespace std;
#include "livre.h"

class Roman: public Livre{
private:
	string genre;
public:
	Roman(string, string, string, string, string, string="");
	Roman(const Roman&);
	void affiche();
	string getGenre() const;

	friend ostream& operator<<(ostream& out, Roman &R);

};




#endif /* ROMAN_H_ */
