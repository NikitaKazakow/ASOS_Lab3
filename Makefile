all: main

main:
	g++ -g ./src/main.cpp -o ./bin/main -lGL -lGLU -lglut