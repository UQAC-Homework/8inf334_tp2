#ifndef INC_8INF334_TP2_JSONPARSER_H
#define INC_8INF334_TP2_JSONPARSER_H
#include "DonneesArticle.h"


class AnalysateurJSON
{
public:
	AnalysateurJSON();
	~AnalysateurJSON();

	/// Parses the given content into an article
	DonneesArticle analyser(const std::string& texte);
};


#endif //INC_8INF334_TP2_JSONPARSER_H
