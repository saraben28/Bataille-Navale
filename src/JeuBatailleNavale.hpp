#ifndef __JEUBATAILLENAVALE_HPP__
#define __JEUBATAILLENAVALE_HPP__

#include <string>

#include "Joueur.hpp"
#include "Grille.hpp"


class JeuBatailleNavale{
	
	private:
		Joueur joueur1, joueur2;
		char nbJoueursHumains, typeJeu;
		
		void initialiserNomJoueur(char nbJoueurs);
		void choisirTypeJeu();
		bool checkFinJeu();
	public:
		JeuBatailleNavale();
		void nouveauJeu();
		
};

#endif