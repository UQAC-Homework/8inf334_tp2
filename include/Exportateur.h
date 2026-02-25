#ifndef INC_8INF334_TP2_EXPORTER_H
#define INC_8INF334_TP2_EXPORTER_H
#include <string_view>


class Exportateur
{
public:
	Exportateur();
	~Exportateur();

	/// Exports the JSON content of the article with the given ID
	std::string genererRapport(int id);
};


#endif //INC_8INF334_TP2_EXPORTER_H