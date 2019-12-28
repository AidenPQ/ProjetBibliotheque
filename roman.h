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
	Roman(string, string, string, string, string, string);
	void affiche();

};




#endif /* ROMAN_H_ */
