#ifndef INC_8INF334_TP2_ARTICLEDATA_H
#define INC_8INF334_TP2_ARTICLEDATA_H
#include <any>
#include <map>
#include <string>
#include <vector>

class DonneesArticle
{
	/// Name of the article
	std::string nom;

	/// Price of the article in dollars
	double prix;

	/// List of properties specific to this article
	std::map<std::string, std::any> proprietes;

public:
	DonneesArticle();
	~DonneesArticle();

	void mettreNom(std::string nom);
	std::string obtenirNom();
	void mettrePrix(double prix);
	double obtenirPrix();
	void mettrePropriete(std::string nom, std::any valeur);
	std::any obtenirPropriete(std::string nom);
	std::vector<std::string> obtenirNomProprietes();
};

#endif //INC_8INF334_TP2_ARTICLEDATA_H
