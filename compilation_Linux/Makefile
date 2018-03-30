dir = ../src/
dir2 = ../bin

main: main.o JeuBatailleNavale.o Joueur.o Grille.o Bateau.o
	cd $(dir)
	g++ -o main main.o JeuBatailleNavale.o Joueur.o Grille.o Bateau.o
	mv main $(dir2)/main
	rm *.o

main.o: main.cpp
	cd $(dir)
	g++ -c main.cpp

jeuBatailleNavale.o: JeuBatailleNavale.cpp JeuBatailleNavale.hpp
	cd $(dir)
	g++ -c JeuBatailleNavale.cpp

Joueur.o: Joueur.cpp Joueur.hpp
	cd $(dir)
	g++ -c Joueur.cpp

Grille.o: Grille.cpp Grille.hpp
	cd $(dir)
	g++ -c Grille.cpp

Bateau.o: Bateau.cpp Bateau.hpp
	cd $(dir)
	g++ -c Bateau.cpp