cmake_minimum_required(VERSION 3.14)
project(Blackjack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Blackjack main.cpp Card.cpp Card.h Hand.cpp Hand.h Deck.cpp Deck.h AbstractPlayer.cpp AbstractPlayer.h HumanPlayer.cpp HumanPlayer.h ComputerPlayer.cpp ComputerPlayer.h BlackJackGame.cpp BlackJackGame.h)