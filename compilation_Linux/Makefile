dir = ../src
dir2 = ../bin


main: main.o JeuBatailleNavale.o Joueur.o Grille.o Bateau.o
	g++ -o main main.o JeuBatailleNavale.o Joueur.o Grille.o Bateau.o
	mv main $(dir2)/main
	rm *.o

main.o: $(dir)/main.cpp
	g++ -c $(dir)/main.cpp

JeuBatailleNavale.o: $(dir)/JeuBatailleNavale.cpp $(dir)/JeuBatailleNavale.hpp
	g++ -c $(dir)/JeuBatailleNavale.cpp

Joueur.o: $(dir)/Joueur.cpp $(dir)/Joueur.hpp
	g++ -c $(dir)/Joueur.cpp

Grille.o: $(dir)/Grille.cpp $(dir)/Grille.hpp
	g++ -c $(dir)/Grille.cpp

Bateau.o: $(dir)/Bateau.cpp $(dir)/Bateau.hpp
	g++ -c $(dir)/Bateau.cpp
