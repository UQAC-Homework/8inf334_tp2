#ifndef INC_8INF334_TP2_LOGGER_H
#define INC_8INF334_TP2_LOGGER_H
#include <string_view>

class Logger
{
public:
	explicit Logger(std::ostream &output);
	
	/// Logs the given message
	void log(std::string_view message);
	
	/// Logs the given exception
	void logException(const std::exception& exception);
};


#endif //INC_8INF334_TP2_LOGGER_H