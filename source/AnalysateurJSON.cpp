#include "../include/AnalysateurJSON.h"
#include <include/json.hpp>
using json = nlohmann::json;

#include <stdexcept>

AnalysateurJSON::AnalysateurJSON()
{
	throw std::logic_error("Function not yet implemented");
}

AnalysateurJSON::~AnalysateurJSON()
{
	throw std::logic_error("Function not yet implemented");
}

DonneesArticle AnalysateurJSON::analyser(std::string texte)
{
	DonneesArticle article;

    json j = json::parse(texte);

    
    article.mettreNom(j.at("nom").get<std::string>());
    article.mettrePrix(j.at("prix").get<double>());

    for (auto& [cle, valeur] : j.items()) {
        if (cle == "nom" || cle == "prix") {
            continue;
        }

        if (valeur.is_string()) {
            article.mettrePropriete(cle, valeur.get<std::string>());
        }
        else if (valeur.is_number_integer()) {
            article.mettrePropriete(cle, valeur.get<int>());
        }
        else if (valeur.is_number_float()) {
            article.mettrePropriete(cle, valeur.get<double>());
        }
        else if (valeur.is_boolean()) {
            article.mettrePropriete(cle, valeur.get<bool>());
        }
        else {
            article.mettrePropriete(cle, valeur.dump());
        }
    }

    return article;
	throw std::logic_error("Function not yet implemented");
}
