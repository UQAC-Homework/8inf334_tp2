#include "../include/Importateur.h"
#include "../include/Enregistreur.h"

#include <string>
#include <vector>
#include <exception>

Importateur::Importateur()
{
}

Importateur::~Importateur()
{
}

void Importateur::importer(const DonneesArticle& article)
{
	try
	{
		Enregistreur::enregistrer("Debut importation article");

		std::string nom = article.obtenirNom();
		double prix = article.obtenirPrix();

		Enregistreur::enregistrer("Nom article : " + nom);
		Enregistreur::enregistrer("Prix article : " + std::to_string(prix));

		std::vector<std::string> proprietes = article.obtenirNomProprietes();

		for (const std::string& prop : proprietes)
		{
			Enregistreur::enregistrer("Propriete : " + prop);
		}

		Enregistreur::enregistrer("Importation terminee");
	}
	catch (const std::exception& e)
	{
		Enregistreur::enregistrer(e);
	}
}