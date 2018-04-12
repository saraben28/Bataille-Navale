#ifndef __BATEAU_HPP__
#define __BATEAU_HPP__

class Bateau{
	private:
		int taille, xExtremite, yExtremite; // l'extremite est à gauche pour horizontal et en haut pour vertical
		bool orientation; // 0=horizontal ; 1=vertical
	public:
		Bateau();
		void setTaille(int taille);
		void setxExtremite(int xExtremite);
		void setyExtremite(int yExtremite);
		void setOrientation(char orientationInput);
		
		bool getOrientation();
		int getTaille();
		int getxExtremite();
		int getyExtremite();
		
		int** getCoordonneesCompletes();
};

#endif