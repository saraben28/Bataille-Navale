#ifndef __JOUEUR_HPP__
#define __JOUEUR_HPP__

#include <string>
#include "Grille.hpp"
#include "Bateau.hpp"
//class JeuBatailleNavale;

class Joueur{
	private :
		std::string nom;
		bool isIA;
		Grille grille, grilleTentatives;
		int nbBateauxTouches; // va etre incremente quand un des bateaux est touche pour facilite la verification de la fin de partie
		
		int nbBateaux;
		Bateau* bateaux;
		
		JeuBatailleNavale* jeu;
		
		void ajoutBateau(Bateau *b);
		bool placerBateau(int** coordonneesBateau, int taille);
		bool verifierPlace(int** coordonneesBateau, int taille);
		void retirerBateau(int** coordonneesBateau, int taille);
		void placerBombe();
	public:
		Joueur();
		void initialiserNom();
		void initialiserGrille();
		void resetGrille();
		void placementDesBateaux(char typeJeu);
		void tour();
		
		friend class JeuBatailleNavale; // on met JeuBatailleNavale en amie pour qu'on puisse acceder a nom directement mais on pourrait faire par accesseurs

};
#endif