#include <iostream>

#include "Grille.hpp"

int Grille::largeurGrille = 10;
int Grille::longueurGrille = 10;

Grille::Grille(){
	
}

Grille::~Grille(){
	delete [] Grille::grille;
}

void Grille::initialiserGrille(){
	do{
		std::cout << "Donner la largeur de la grille : ";
		std::cin >> Grille::largeurGrille;
	}while(Grille::largeurGrille <=0);
	do{
		std::cout << "Donner la longueur de la grille : ";
		std::cin >> Grille::longueurGrille;
	}while(Grille::longueurGrille<=0);
	
	
}

void Grille::reset(){
	
	delete [] Grille::grille;
	
	std::cout << "Initialisation d'une grille de taille " << Grille::largeurGrille << " x " << Grille::longueurGrille << ".\n";
	Grille::grille = new char* [Grille::longueurGrille];
	for (int i=0;i<Grille::longueurGrille;i++){
		Grille::grille[i] = new char [Grille::largeurGrille];
	}
	
	for (int i=0;i<Grille::longueurGrille;i++){
		for (int j=0;j<Grille::largeurGrille;j++){
			Grille::grille[i][j] = 0;
		}
	}
}

void Grille::afficher(){
	std::cout << "  ";
	for(int i=0;i<Grille::largeurGrille;i++){
		std::cout << " " << i+1;
	}
	std::cout << "\n  +";
	for (int j=0;j<2*Grille::largeurGrille-1;j++){
		std::cout << "-";
	}
	std::cout << "+\n";
	for (int i=0;i<Grille::longueurGrille;i++){
		std::cout << i+1 << "-";
		for (int j=0;j<Grille::largeurGrille;j++){
			std::cout << "|";
			switch (Grille::grille[i][j]){
				case 0:
					std::cout << " ";
					break;
				case 1:
					std::cout << "*";
					break;
				case 2:
					std::cout << "$";
					break;
				default:
					std::cout << "#";
			}
		}
		
		std::cout << "|\n";
		if (i<Grille::longueurGrille-1){
			std::cout << "  |";
			for (int j=0;j<2*Grille::largeurGrille-1;j++){
				std::cout << "-";
			}
			std::cout << "|\n";
		}
	}
	std::cout << "  +";
	for (int j=0;j<2*Grille::largeurGrille-1;j++){
		std::cout << "-";
	}
	std::cout << "+\n";
}