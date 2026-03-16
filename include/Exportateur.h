#ifndef INC_8INF334_TP2_EXPORTER_H
#define INC_8INF334_TP2_EXPORTER_H
#include <string>


class Exportateur
{
public:
	Exportateur();
	~Exportateur();

	/// Exports the JSON content of the article with the given ID
	std::string genererRapport(int id) const;
};


#endif //INC_8INF334_TP2_EXPORTER_H