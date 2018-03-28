@echo off
cd ..\src\
g++ -o main.exe main.cpp JeuBatailleNavale.cpp Grille.cpp Joueur.cpp Bateau.cpp
cd ..
move .\src\main.exe bin\main.exe
pause