#include "../include/DonneesArticle.h"

#include <stdexcept>

#include "../include/Enregistreur.h"

DonneesArticle::DonneesArticle()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

DonneesArticle::~DonneesArticle()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

void DonneesArticle::mettreNom(std::string nom)
{
	 this->nom = nom;
	
}

std::string DonneesArticle::obtenirNom() const
{
	return nom;

}

void DonneesArticle::mettrePrix(double prix)
{
	this->prix = prix;
	
}

double DonneesArticle::obtenirPrix() const
{
	
	return prix;
}

void DonneesArticle::mettrePropriete(std::string nom, std::any valeur)
{
	proprietes[nom] = valeur;
	
	
}

std::any DonneesArticle::obtenirPropriete(std::string nom) const
{
	 auto resultat = proprietes.find(nom);
	 return resultat->second;
	
}

std::vector<std::string> DonneesArticle::obtenirNomProprietes() const
{   std::vector<std::string> noms;

	for (const auto& paire : proprietes) {
        noms.push_back(paire.first);
    }

    return noms;
	
}
