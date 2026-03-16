#ifndef INC_8INF334_TP2_VALIDATEURDONNEESARTICLE_H
#define INC_8INF334_TP2_VALIDATEURDONNEESARTICLE_H
#include "DonneesArticle.h"


class ValidateurDonneesArticle
{
public:
	ValidateurDonneesArticle();
	~ValidateurDonneesArticle();

	/// Validation des donnees d'un article
	void validerArticle(const DonneesArticle& article) const;
};


#endif //INC_8INF334_TP2_VALIDATEURDONNEESARTICLE_H