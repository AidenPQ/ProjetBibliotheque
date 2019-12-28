/*
 * pieceDeTheatre.h
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#ifndef PIECEDETHEATRE_H_
#define PIECEDETHEATRE_H_
#include <iostream>
using namespace std;
#include "livre.h"

class PieceDeTheatre: public Livre{
private:
	string siecle;
public:
	PieceDeTheatre(string, string, string, string, string, string);
	PieceDeTheatre(const PieceDeTheatre);
	void affiche();

};




#endif /* PIECEDETHEATRE_H_ */
