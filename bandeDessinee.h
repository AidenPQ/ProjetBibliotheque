/*
 * bandeDessinee.h
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#ifndef BANDEDESSINEE_H_
#define BANDEDESSINEE_H_
#include <iostream>
using namespace std;
#include "livre.h"

class BandeDessinee: public Livre{
private:
	string dessinateur;
public:
	BandeDessinee(string, string, string, string, string, string="");
	BandeDessinee (const BandeDessinee&);
	void affiche();
	string getDessinateur() const;
	friend ostream& operator<<(ostream& out, BandeDessinee &BD);
};




#endif /* BANDEDESSINEE_H_ */
