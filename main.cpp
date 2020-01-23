/*
 * main.cpp
 *
 *  Created on: 10 d�c. 2019
 *      Author: ngand
 */


#include "livre.h"
#include "noeudlivre.h"
#include "listeNoeudlivre.h"
#include "roman.h"
#include "bandeDessinee.h"
#include "pieceDeTheatre.h"
#include "recueilPoesie.h"
#include "bibliotheque.h"
#include "adherent.h"
#include <iostream>
using namespace std;

int main(){
	BandeDessinee* BD = new BandeDessinee("a","b","c","d","e","f");
	Roman* R = new Roman("1","2","3","4","5","6");
	Roman* R1 = new Roman("11","21","31","41","51","61");
    PieceDeTheatre* PT = new PieceDeTheatre("k","l","m","n","o","9");
    RecueilPoesie* RP = new  RecueilPoesie("p","q","r","s","t","10");
    RecueilPoesie* RP1 = new  RecueilPoesie("p1","q1","r1","s1","t1","101");



    //ListeNoeudlivre *Ln = new ListeNoeudlivre();


    //Ln->ajoute(BDA);
    //Ln->ajoute(RP);



    //Ln->affiche();


    Bibliotheque* Bb = new Bibliotheque("essai", "58", "codebiblio");
    Bibliotheque* Bb1 = new Bibliotheque("essai1", "59", "cdBiblio");
    Adherent* A = new Adherent("Pierre","Bof", Bb, "", "");
    Adherent* A1 = new Adherent("Pierre1","Bof1", Bb, "", "");

    Bb->achatLivre(BD);
    Bb->achatLivre(R);
    Bb->achatLivre(RP1);
    Bb1->achatLivre(R1);
    Bb1->achatLivre(PT);
    Bb1->achatLivre(RP);

    //Bb->demandeLivre(Bb1,"m");


    Bb1->demandeLivre(Bb,BD->getISBN());
    Bb1->demandeLivre(Bb,R->getISBN());


    //Bb->rendreLivres();

    A->empruntLivre(RP1->getCode_livre());
    A1->empruntLivre(BD->getCode_livre());

    cout << *A;
    cout << *A1;


	return 0;
}
