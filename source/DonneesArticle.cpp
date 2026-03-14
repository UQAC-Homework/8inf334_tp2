#include "../include/DonneesArticle.h"

#include <stdexcept>

DonneesArticle::DonneesArticle(): nom(""), prix(0.0)
{
	throw std::logic_error("Function not yet implemented");
}

DonneesArticle::~DonneesArticle()
{
	throw std::logic_error("Function not yet implemented");
}

void DonneesArticle::mettreNom(std::string nom)
{
	 this->nom = nom;
	throw std::logic_error("Function not yet implemented");
}

std::string DonneesArticle::obtenirNom()
{
	return nom;
	throw std::logic_error("Function not yet implemented");
}

void DonneesArticle::mettrePrix(double prix)
{
	this->prix = prix;
	throw std::logic_error("Function not yet implemented");
}

double DonneesArticle::obtenirPrix()
{
	throw std::logic_error("Function not yet implemented");
	return prix;
}

void DonneesArticle::mettrePropriete(std::string nom, std::any valeur)
{
	proprietes[nom] = valeur;
	throw std::logic_error("Function not yet implemented");
	
}

std::any DonneesArticle::obtenirPropriete(std::string nom)
{
	 auto resultat = proprietes.find(nom);
	 return resultat->second;
	throw std::logic_error("Function not yet implemented");
}

std::vector<std::string> DonneesArticle::obtenirNomProprietes()
{   std::vector<std::string> noms;

	for (const auto& paire : proprietes) {
        noms.push_back(paire.first);
    }

    return noms;
	throw std::logic_error("Function not yet implemented");
}
