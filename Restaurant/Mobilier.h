#pragma once
#include <string>
class Mobilier
{
public :
	Mobilier(int _NumEtage, int _NbChaises, int _NbTables);
	void ModifierMobilier(int _NbChaises, int _NbTables);
	void AfficherMobilierTotal(); // exception, seule fois o� ce n'est pas pour tout l'�tage
	void AfficherStats();
	int GetNbTables();
	int GetNbChaises();
	int GetNumEtage();

private: 
	int nbTables = 0;
	int nbChaises = 0;
	int etage;

};