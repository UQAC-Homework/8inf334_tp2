#include "../include/Exportateur.h"
#include"../include/Enregistreur.h"

#include <stdexcept>

// le constructeur appeler pour cree un objet exportateur
Exportateur::Exportateur()
{
	Enregistreur::enregistrer("Exportateur initialisation");
}
//Destructeur quand lobjet est detruit
Exportateur::~Exportateur()
{
	 Enregistreur::enregistrer("Exportateur detruit.");
}

std::string Exportateur::genererRapport(int id) const
{
  // convertir le nimbre entier id en texte puis appeler la methode enregistre pour lui passe le texte
	Enregistreur::enregistrer("Exportateur::genererRapport appel pour un id"+std::to_string(id));

switch (id) {
        case 1:
            return R"({"nom" : "Super colle" , "volume_ml" : 20 , "temps_sechage_sec" : 30 , "resistant_eau" : true , "prix" : 4.99})";
        case 2:
            return R"({"nom" : "Couteau de précision" , "longueur_lame_cm" : 2.5 ,
"lame_remplacable" : true , "materiau" : "Acier inoxydable" , "prix" : 9.49} )";
        case 3:
            return R"({"nom" : "Tablette humide" , "taille" : "Standard",
"feuilles_supplémentaires": 20, "material": "plastique", "prix": 40.00 })";
             default:
				 throw std::logic_error("Exportateur: ID invalide = " + std::to_string(id));
	case 4 :
		return R"({"nom" : "" , "prix" :})";
	case 5:
		return R"({"nom" : "Article test" , "prix" :})";
            }
         }
