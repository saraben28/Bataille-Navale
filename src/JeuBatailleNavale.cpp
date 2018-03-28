#include "JeuBatailleNavale.hpp"

#include <iostream>


JeuBatailleNavale::JeuBatailleNavale(){
	
}

void JeuBatailleNavale::initialiserNomJoueur(char nbJoueurs){
	
	JeuBatailleNavale::nbJoueursHumains = 0;
	if(nbJoueurs<0 || nbJoueurs>2){
		std::cout << "Erreur : nombre de joueurs incorrect (" << nbJoueurs <<")\n";
	}else if (nbJoueurs != 0){
		JeuBatailleNavale::joueur1.initialiserNom();
		JeuBatailleNavale::joueur2.initialiserNom();
		JeuBatailleNavale::nbJoueursHumains = 2;
		std::cout << "Les joueurs sont " << JeuBatailleNavale::joueur1.nom << " et " << JeuBatailleNavale::joueur2.nom << ".\n";
	}else{
		JeuBatailleNavale::joueur1.initialiserNom();
		JeuBatailleNavale::nbJoueursHumains = 1;
		std::cout << "Les joueurs sont " << JeuBatailleNavale::joueur1.nom << " et " << JeuBatailleNavale::joueur2.nom << ".\n";
	}
	
}



void JeuBatailleNavale::nouveauJeu(){
	char choix = 0;
	std::cout << "\n\n1-Joueur contre joueur\n2-Joueur contre IA\n3-IA contre IA\n> ";
	std::cin >> choix;
	switch(choix){
		case '1':
			initialiserNomJoueur(2);
		break;
		case 'q':
			std::cout << "Au revoir\n";
		break;
		default:
			std::cout << "Pas encore dispo\n";
			nouveauJeu();
	}
	if (choix != 'q'){
		joueur1.initialiserGrille();
		joueur1.resetGrille(); // on initialise avec 1 joueur car la taille de la grille est commune aux deux joueurs
		joueur2.resetGrille(); // il suffit donc de remplir la grille de 0 pour chaque joueur
		bool fini = false;
		int tour = 0;
		while (!fini){
			
			tour = (tour+1)%2;
			
			fini = true;
		}
	}
	
}