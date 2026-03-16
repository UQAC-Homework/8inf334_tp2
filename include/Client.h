#ifndef INC_8INF334_TP2_CLIENT_H
#define INC_8INF334_TP2_CLIENT_H
#include "AnalysateurJSON.h"
#include "Exportateur.h"
#include "Importateur.h"
#include "ValidateurDonneesArticle.h"


class Client
{
	Exportateur exportateur;
	Importateur importateur;
	ValidateurDonneesArticle validateurArticle;
	AnalysateurJSON analysateurJSON;

public:
	Client();
	~Client();

	void transfererArticle(int id);
};


#endif //INC_8INF334_TP2_CLIENT_H
