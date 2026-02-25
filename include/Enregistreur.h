#ifndef INC_8INF334_TP2_LOGGER_H
#define INC_8INF334_TP2_LOGGER_H
#include <ostream>

class Enregistreur
{
	std::ostream output;
public:
	Enregistreur(std::ostream output);
	~Enregistreur();
	
	/// Logs the given message
	static void enregistrer(std::string message);
	
	/// Logs the given exception
	static void enregistrer(const std::exception& exception);
};


#endif //INC_8INF334_TP2_LOGGER_H