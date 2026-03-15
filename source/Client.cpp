#include "../include/Client.h"

#include "../include/Enregistreur.h"

Client::Client() = default;

Client::~Client() = default;

void Client::transfererArticle(int id)
{
	try
	{
		const auto rapport = exportateur.genererRapport(id);
		const auto article = analysateurJSON.analyser(rapport);

		validateurArticle.validerArticle(article);

		importateur.importer(article);
	}
	catch (const std::exception& e)
	{
		Enregistreur::enregistrer(e);
	}
}
