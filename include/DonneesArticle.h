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
	double prix{};

	/// List of properties specific to this article
	std::map<std::string, std::any> proprietes;

public:
	DonneesArticle();
	~DonneesArticle();

	void mettreNom(const std::string& nom);
	[[nodiscard]] std::string obtenirNom() const;
	void mettrePrix(double prix);
	[[nodiscard]] double obtenirPrix() const;
	void mettrePropriete(const std::string& nom, std::any valeur);
	[[nodiscard]] std::any obtenirPropriete(const std::string& nom) const;
	[[nodiscard]] std::vector<std::string> obtenirNomProprietes() const;
};

#endif //INC_8INF334_TP2_ARTICLEDATA_H
