#ifndef __JOUEUR_HPP__
#define __JOUEUR_HPP__

#include <string>
#include "Grille.hpp"

class Joueur{
	private :
		std::string nom;
		bool isIA;
		Grille grille;
		int nbBateauxTouches; // va etre incremente quand un des bateaux est touche pour facilite la verification de la fin de partie
		int x, y;
		
	public:
		Joueur();
		void initialiserNom();
		void initialiserGrille();
		void resetGrille();
		void tour();
		
		friend class JeuBatailleNavale; // on met JeuBatailleNavale en amie pour qu'on puisse acceder a nom directement mais on pourrait faire par accesseurs

};
#endif