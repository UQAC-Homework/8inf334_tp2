#ifndef INC_8INF334_TP2_CLIENT_H
#define INC_8INF334_TP2_CLIENT_H
#include "AnalysateurJSON.h"
#include "Exportateur.h"
#include "Importateur.h"


class Client
{
	Exportateur exportateur;
	Importateur importateur;
	AnalysateurJSON analysateurJSON;

public:
	Client();
	~Client();

	void transfererArticle(int id);
};


#endif //INC_8INF334_TP2_CLIENT_H
