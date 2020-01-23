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
#include"album.h"
#include"bandeDessinee.h"
#include"roman.h"
#include"recueilPoesie.h"
#include"pieceDeTheatre.h"
#include"adherent.h"
#include "bibliotheque.h"
using namespace std;

int main(){



	Album* A1=new Album("Pierre Kiroul","N'amasse pas mousse","ISBN0","Tout Public","Photos");
	Album* A2=new Album("Panthere","Le pot aux roses","ISBN1","Tout Public","Dessins");
	BandeDessinee* BD1=new BandeDessinee("Zep","Titeuf","ISBN2","Tout Public","Zep");
	BandeDessinee* BD2=new BandeDessinee("Patrick Sobral","Les légendaires","ISBN3","Tout Public","Nadou");
	PieceDeTheatre* PT1=new PieceDeTheatre("Moliere","Les fourberies de Scapin","ISBN4","Tout Public","17eme");
	PieceDeTheatre* PT2=new PieceDeTheatre("Ionesco","Rhinoceros","ISBN5","Tout Public","20eme");
	RecueilPoesie* RP1=new RecueilPoesie("Baudelaire","Les fleurs du mal","ISBN6","Public Majeur","Vers");
	RecueilPoesie* RP2=new RecueilPoesie("Appolinaire","Alcool","ISBN7","Public Majeur","Vers");
	Roman* R1=new Roman("E.L.James","Fifty shades of grey","ISBN8","Public Majeur","Erotique");
	Roman* R2=new Roman("Pierre Quentin","Ma vie en C++","ISBN9","Informaticiens","Autobiographie");
	Bibliotheque* B1=new Bibliotheque("CDI","Centrale Marseille","ECM");
	Bibliotheque* B2= new Bibliotheque("BU Saint Jerome","Marseille","BUSJ");
	B1->achatLivre(A1);
	B1->achatLivre(BD1);
	B1->achatLivre(PT1);
	B1->achatLivre(RP1);
	B1->achatLivre(R1);
	B2->achatLivre(A2);
	B2->achatLivre(BD2);
	B2->achatLivre(PT2);
	B2->achatLivre(RP2);
	B2->achatLivre(R2);
	//cout<<*B1<<endl;
	//cout<<*B2<<endl;
	Adherent A1B1("Nicolas","Montagu",B1,"Chateau Gombert","ECM007");
	Adherent A2B1("Harry","Lefebvre",B1,"Chateau Gombert","ECM008");
	Adherent A1B2("Pierre","Torres",B2,"Marseille","BUSJ003");
	Adherent A2B2("Theo","Lorenzi",B2,"Marseille","BUSJ005");
	/*A1B1.empruntLivre(A1->getCode_livre());
	A1B1.empruntLivre(BD1->getCode_livre());
	A1B1.empruntLivre(R1->getCode_livre());
	A1B1.empruntLivre(RP1->getCode_livre());//pas possible car capacite d'emprunt atteinte
	A2B1.empruntLivre(R1->getCode_livre());//pas possible livre deja emprunte
	A2B1.empruntLivre(R2->getCode_livre());//pas possible pas la bonne bibliotheque*/
	B1->demandeLivre(B2,R2->getISBN());
	A2B1.empruntLivre(R2->getCode_livre());//possible, passe dans sa bibliotheque
	A2B2.empruntLivre(R2->getCode_livre());//pas possible, plus dans sa bibliotheque
	//B1->afficheParCategorie("roman");
	A1B1.rendreLivre(BD1);
	A1B1.rendreLivre(R1);
	A2B1.empruntLivre(R1->getCode_livre());
	B2->demandeLivre(B1,R1->getISBN());//pas possible car R1 emprunte par A2B1
	B1->rendreLivres();//pas possible car R2 empunte
	A2B1.rendreLivre(R2);
	B1->rendreLivres();
	cout<<*B1;
	A2B1.rendreLivre(R1);
	B2->demandeLivre(B1,R1->getISBN());
	cout<<*B2;
	B1->supprimLivre(R2);//Marche pas parce que c'est pas son proprietaire
	B2->rendreLivres();
	B1->supprimLivre(R1);//marche parce que c'est le proprio
	cout<<*B1;


	return 0;
}
