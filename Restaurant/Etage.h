#pragma once

#include "Salle.h"
#include <iostream>
#include <string>



// A implementer � la fin : Salle* listeSalles
class Etage
{
private:
	std::string nom;
	std::string schema;
    int id;
	int nbChaises;
	int nbTables;
	int nbSalles;
	int nbPlacesPrisesEtage;
public:
	Etage(int nbChaises = 0, int nbEtages = 0);		// Constructeur avec arguments optionnels
	void Affiche();									// Affiche les informations ainsi que le sch�ma d'une salle de cet �tage, pour l'instant, seule la premi�re salle est affich�e
	std::string getNom();
	int getNbSalles();
	void setNbSalles(int nb);
	void SetNbPlacesPrises(int nb);
	int GetNbPlacesPrises();
	int getNbChaises();
	int getNbTables();
	int getID();
	void setID(int _id);
	void setNbChaises(int _nbChaises);
	void setNbTables(int _nbTables);
	Salle* listeSalles;								// contient l'ensemble des salles pour cet �tage
	~Etage();
};


	