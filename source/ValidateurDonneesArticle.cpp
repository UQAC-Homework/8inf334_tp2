#include "../include/ValidateurDonneesArticle.h"

#include <stdexcept>

#include "../include/Enregistreur.h"

ValidateurDonneesArticle::ValidateurDonneesArticle()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

ValidateurDonneesArticle::~ValidateurDonneesArticle()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

void ValidateurDonneesArticle::validerArticle(const DonneesArticle& article)
{
	throw std::logic_error("Function not yet implemented");
}
