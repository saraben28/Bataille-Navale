#ifndef __GRILLE_HPP__
#define __GRILLE_HPP__

#include "Bateau.hpp"

class Grille{
	private:
		char** grille; // Le tableau representant le cadrillage. 
		/* On pourrait utiliser 'int' plutot que 'char' si on avait besoin de + de 8 valeurs.
		* Ici, si la valeur d'une case est 
		*	-0 : eau
		*	-1 : bateau
		*	-2 : bateau touche
		*/
		static int tailleHorizontal, tailleVertical;
		
	public:
		Grille();
		~Grille();
		void initialiserGrille();
		void afficher();
		void reset();
};

#endif