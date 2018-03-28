#pragma once
#include <iostream>
#include <string>
#include "Enum.h"

class Etage; // Forward Declaration

class Salle 
{
private:
	int longueurX;
	int longueurY;
	int nbChaises;
	int nbTables;
	char** schema;
	int nombrePlacesPrisesSalle = 0;

	// D�claration Forward, utilisation d'un pointeur obligatoire pour pouvoir faire des d�pendances circulaires
	Etage* etage;
public:
	char** tab;
	Salle(int longX, int largY, int nbChaises, int nbTables);
	Salle();
	bool EstComplet();
	bool ResteDesChaisesAPlacer();
	void SetLongueurX(int l);
	void SetLongueurY(int l);
	void SetNbPlacesPrises(int nb);		// D�conseill� d'utiliser de mani�re manuelle, car d�j� utilis� par la m�me fonction de type �tage
	void PlacerSimple(int nb);
	int GetNbPlacesPrises();
	Etage* GetEtage();
	void SetEtage(Etage * _etage);
	int GetLongueurX();
	int GetNbChaises();
	void SetNbChaises(int _nbChaises);
	void SetNbTables(int _nbTables);
	int GetNbTables();
	int GetLongueurY();
	void AfficherInfos();
	char** GetSchema();
	static std::string ConvertChar2DToString(char ** tab, int sizeX, int sizeY);
	void SetSchema(char** schema);
	void Modifier();
	void ModifierierRapide(int longueurX, int largeurY, int nbChaises, int nbTables);
	void Afficher(int color);
	void Generer();							// G�n�re une salle vide, indispensable pour pouvoir placer des tables
	void PlacerChaise(int x, int y);
	void PlacerTable(int x, int y);
	char** PlacerChaiseSetTables(PlacementType t); // Permet de placer les chaises et tables selon une configuration pr�d�finie, voir le fichier "Enum.h"
};
