#ifndef INC_8INF334_TP2_ARTICLEDATA_H
#define INC_8INF334_TP2_ARTICLEDATA_H
#include <any>
#include <map>
#include <string>

struct ArticleData
{
	/// Name of the article
	std::string name;
	
	/// Price of the article in dollars
	size_t price;
	
	/// List of properties specific to this article
	std::map<std::string, std::any> properties;
};

#endif //INC_8INF334_TP2_ARTICLEDATA_H