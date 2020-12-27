all: main

main: main.cpp blackjack.cpp
	g++ -o main main.cpp blackjack.cpp