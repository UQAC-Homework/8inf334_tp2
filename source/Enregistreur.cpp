#include "../include/Enregistreur.h"

#include <stdexcept>

Enregistreur* Enregistreur::instance = nullptr; 

Enregistreur::Enregistreur(std::ostream& output) : output(output)
{
	if (instance == nullptr)
		instance = this;
}

Enregistreur::~Enregistreur()
{
	if (instance == this)
		instance = nullptr;
}

void Enregistreur::enregistrer(const std::string& message)
{
	if (instance == nullptr)
		throw std::runtime_error("Aucune instance de Enregistreur a été créé");

	instance->output << message << std::endl;
}

void Enregistreur::enregistrer(const std::exception& exception)
{
	const auto message = std::string(exception.what());
	enregistrer("[ERROR] " + message);
}
