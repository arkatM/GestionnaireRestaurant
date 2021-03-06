#pragma once
#include <string>
#include "ObjetMobilier.h"
class Mobilier
{
public :
	Mobilier();
	Mobilier(int _NumEtage, int _NbChaises, int _NbTables);
	void ModifierierMobilier(int _NbChaises, int _NbTables);
	void AfficherMobilierTotal(); // exception, seule fois o� ce n'est pas pour tout l'�tage
	void AfficherStats();
	int  GetNbTables();
	int  GetNbChaises();
	int  GetNumEtage();
	int  AjouterTables(int _NbChaises);
	int  AjouterChaises(int _NbTables);

private: 
	int nbTables = 0;
	int nbChaises = 0;
	int etage;
	ObjetMobilier* equipement;
};

