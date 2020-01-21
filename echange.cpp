/*
 * echange.cpp
 *
 *  Created on: 6 janv. 2020
 *      Author: ngand
 */


#include "echange.h"

#include <iostream>
using namespace std;

template < class T, class U>

Echange<T,U>::Echange(T* biblioprt, U* lv){
	BiblioPreteuse = biblioprt;
	livreEchangee = lv;
}

