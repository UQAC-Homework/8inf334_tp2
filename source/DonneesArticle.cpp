#include "../include/DonneesArticle.h"
#include "../include/Enregistreur.h"

#include <utility>

DonneesArticle::DonneesArticle() = default;

DonneesArticle::~DonneesArticle() = default;

void DonneesArticle::mettreNom(const std::string& nom)
{
	this->nom = nom;
}

std::string DonneesArticle::obtenirNom() const
{
	return nom;
}

void DonneesArticle::mettrePrix(const double prix)
{
	this->prix = prix;
}

double DonneesArticle::obtenirPrix() const
{
	return prix;
}

void DonneesArticle::mettrePropriete(const std::string& nom, std::any valeur)
{
	proprietes[nom] = std::move(valeur);
}

std::any DonneesArticle::obtenirPropriete(const std::string& nom) const
{
	auto resultat = proprietes.find(nom);
	return resultat->second;
}

std::vector<std::string> DonneesArticle::obtenirNomProprietes() const
{
	std::vector<std::string> noms;

	noms.reserve(proprietes.size());
	for (const auto& paire : proprietes)
	{
		noms.push_back(paire.first);
	}

	return noms;
}
