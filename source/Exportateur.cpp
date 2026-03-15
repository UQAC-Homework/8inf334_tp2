#include "../include/Exportateur.h"

#include <stdexcept>

#include "../include/Enregistreur.h"

Exportateur::Exportateur()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

Exportateur::~Exportateur()
{
	Enregistreur::enregistrer("[ERROR] Function not yet implemented");
}

std::string Exportateur::genererRapport(int id)
{
	throw std::logic_error("Function not yet implemented");
}
