#ifndef __JOUEUR_HPP__
#define __JOUEUR_HPP__

#include <string>
#include "Grille.hpp"

class Joueur{
	private :
		std::string nom;
		bool isIA;
		Grille grille;
		
	public:
		Joueur();
		void initialiserNom();
		void initialiserGrille();
		void resetGrille();
		void tour();
		
		friend class JeuBatailleNavale; // on met JeuBatailleNavale en amie pour qu'on puisse acceder a nom directement mais on pourrait faire par accesseurs

};
#endif