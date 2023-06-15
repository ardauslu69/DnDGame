all:
	g++ -std=c++14 -g -I src/include -L src/lib -o main game.cpp Setup.cpp Graphic.cpp Constructers.cpp Fight.cpp Functions.cpp  main.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image 