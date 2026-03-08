#include <iostream>

#include "include/Client.h"
#include "include/Enregistreur.h"

int main()
{
	const Enregistreur enregistreur(std::cout);

	Client client;

	//client.transfererArticle(10);

	return 0;
}
