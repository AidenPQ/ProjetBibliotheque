/*
 * album.h
 *
 *  Created on: 28 déc. 2019
 *      Author: yimei
 */

#ifndef ALBUM_H_
#define ALBUM_H_
#include <iostream>
using namespace std;
#include "livre.h"

class Album: public Livre{
private:
	string typeIllustration;
public:
	Album(string, string, string, string, string, string);
	Album (const Album);
	void affiche();

};




#endif /* ALBUM_H_ */
