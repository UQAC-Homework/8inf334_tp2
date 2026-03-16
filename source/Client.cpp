#include "../include/Client.h"

#include "../include/Enregistreur.h"

Client::Client() = default;

Client::~Client() = default;

void Client::transfererArticle(int id)
{
	try
	{
		Enregistreur::enregistrer("Commencer le transfere de l'article '" + std::to_string(id) + "'...");
		
		const auto rapport = exportateur.genererRapport(id);
		const auto article = analysateurJSON.analyser(rapport);

		validateurArticle.validerArticle(article);

		importateur.importer(article);
	
		Enregistreur::enregistrer("Transfere de l'article '" + std::to_string(id) + "' terminer!");
	}
	catch (const std::exception& e)
	{
		Enregistreur::enregistrer(e);
		Enregistreur::enregistrer("Echec du transfere de l'article '" + std::to_string(id) + "'.");
	}
}
