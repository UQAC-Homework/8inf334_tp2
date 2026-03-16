#include "../include/Importateur.h"

#include <stdexcept>

#include "../include/Enregistreur.h"

Importateur::Importateur()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

Importateur::~Importateur()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

void Importateur::importer(const DonneesArticle& article)
{
	throw std::logic_error("Function not yet implemented");
}
