#ifndef INC_8INF334_TP2_IMPORTER_H
#define INC_8INF334_TP2_IMPORTER_H
#include "DonneesArticle.h"


class Importateur
{
public:
	Importateur();
	~Importateur();

	/// Imports the given article
	void importer(const DonneesArticle& article);
};


#endif //INC_8INF334_TP2_IMPORTER_H