#ifndef __GRILLE_HPP__
#define __GRILLE_HPP__

#include "Bateau.hpp"

class Grille{
	private:
		char** grille;
		static int largeurGrille, longueurGrille;
		
	public:
		Grille();
		~Grille();
		void initialiserGrille();
		void afficher();
		void reset();
};

#endif