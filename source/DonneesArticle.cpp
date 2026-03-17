#include "../include/DonneesArticle.h"

#include <stdexcept>

DonneesArticle::DonneesArticle(): nom(""), prix(0.0)
{
	
}

DonneesArticle::~DonneesArticle()
{
	
}

void DonneesArticle::mettreNom(std::string nom)
{
	 this->nom = nom;
	
}

std::string DonneesArticle::obtenirNom()
{
	return nom;

}

void DonneesArticle::mettrePrix(double prix)
{
	this->prix = prix;
	
}

double DonneesArticle::obtenirPrix()
{
	
	return prix;
}

void DonneesArticle::mettrePropriete(std::string nom, std::any valeur)
{
	proprietes[nom] = valeur;
	
	
}

std::any DonneesArticle::obtenirPropriete(std::string nom)
{
	 auto resultat = proprietes.find(nom);
	 return resultat->second;
	
}

std::vector<std::string> DonneesArticle::obtenirNomProprietes()
{   std::vector<std::string> noms;

	for (const auto& paire : proprietes) {
        noms.push_back(paire.first);
    }

    return noms;
	
}
