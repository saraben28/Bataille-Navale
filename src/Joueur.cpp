#include <iostream>

#include "Joueur.hpp"


Joueur::Joueur(){
	Joueur::nom = "Joueur";
}

void Joueur::initialiserNom(){
	std::cout << "Donner le nom du joueur : ";
	std::cin >> Joueur::nom;
}

void Joueur::initialiserGrille(){
	Joueur::grille.initialiserGrille();
	
}

void Joueur::resetGrille(){
	Joueur::grille.reset();
}

void Joueur::tour(){
	std::cout << "Tour de " << Joueur::nom << "\n";
	Joueur::grille.afficher();
	if (!Joueur::isIA){
		std::cout << "Donner les coordonnees x et y (separe par un espace): ";
		std::cin >> Joueur::x;
		std::cin >> Joueur::y;
	}
}