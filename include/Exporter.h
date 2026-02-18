#ifndef INC_8INF334_TP2_EXPORTER_H
#define INC_8INF334_TP2_EXPORTER_H
#include <string_view>


class Exporter
{
public:
	/// Exports the JSON content of the article with the given ID
	std::string_view exportArticle(size_t id);
};


#endif //INC_8INF334_TP2_EXPORTER_H