#pragma once

#include "Salle.h"
#include <iostream>
#include <string>



// A implementer � la fin : Salle* listeSalles
class Etage
{
private:
	std::string nom;
    int id;
	int nbChaises;
	int nbTables;
	int nbSalles;
	int nbPlacesPriseSetage;
	//static int couleurActuelle;
public:
	Etage(int nbChaises = 0, int nbEtages = 0);		// Constructeur avec arguments optionnels
	void Affiche();														// Affiche les informations ainsi que le sch�ma d'une salle de cet �tage, pour l'instant, seule la premi�re salle est affich�e
	std::string GetNom();
//	static int GetCouleurActuelleGroupe();
//	static void SetCouleurActuelleGroupe(int couleur);
	int GetNbSalles();
	bool ResteDesPersonnesAPlacer();
	//void RepartirChaiseSetTablesDansChaqueSalle();
	void RemplirSallesAvecPlacesEntrees(int nbPersonnesTotal);
	void SetNbSalles(int nb);
	void SetNom( std::string nomEt);
	int GetNbPlacesPrises();
	int GetNbChaises();
	int GetNbTables();
	int GetID();
	void SetID(int _id);
	void SetNbChaises(int _nbChaises);
	void SetNbTables(int _nbTables);
	Salle* listeSalles;													// contient l'ensemble des salles pour cet �tage
	~Etage();
};


	