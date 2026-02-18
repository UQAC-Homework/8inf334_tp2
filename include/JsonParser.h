#ifndef INC_8INF334_TP2_JSONPARSER_H
#define INC_8INF334_TP2_JSONPARSER_H
#include "ArticleData.h"


class JsonParser
{
public:
	/// Parses the given content into an article
	ArticleData parse(std::string_view content);
};


#endif //INC_8INF334_TP2_JSONPARSER_H