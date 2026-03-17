#include "../include/ValidateurDonneesArticle.h"
#include <stdexcept>
#include "../include/DonneesArticle.h"
#include "../include/Enregistreur.h"


ValidateurDonneesArticle::ValidateurDonneesArticle()
{
	Enregistreur::enregistrer("ValidateurDonneesArticle intialiser.");
}

ValidateurDonneesArticle::~ValidateurDonneesArticle()
{
	Enregistreur::enregistrer("ValidateurDonneesArticle destruite");
}

void ValidateurDonneesArticle::validerArticle(const DonneesArticle& article) const
{
	std::string nom = article.obtenirNom();
	double prix = article.obtenirPrix();
	// debut de la validation
	Enregistreur::enregistrer(nom);
	// verifiaction le nom doit etre remplie
	// verification si le nom est vide

	if (nom.empty())
		throw std::invalid_argument("Nom est vide");
	// le prix doit etre positif
	if (prix <= 0.0)
		throw std::invalid_argument("Prix invalide");

	Enregistreur::enregistrer("Article valide: " + nom);
}
