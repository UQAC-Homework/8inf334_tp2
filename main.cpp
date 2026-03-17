#include <iostream>

#include "include/Client.h"
#include "include/Enregistreur.h"

int main()
{
	const Enregistreur enregistreur(std::cout);

	Client client;

	client.transfererArticle(1);
	client.transfererArticle(2);
	client.transfererArticle(3);
	client.transfererArticle(3);
	client.transfererArticle(2);

	// Échec
	client.transfererArticle(INT8_MAX);
	client.transfererArticle(4); // Nom vide
	client.transfererArticle(5); // Prix negatif

	return 0;
}
