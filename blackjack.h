//
// Created by Admin on 3/11/2020.
//

#ifndef BJ_BLACKJACK_H
#define BJ_BLACKJACK_H

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;


class Card {
public:
    void displayCard();
    int getValue();
    Card (int rank, int type);
private:
    enum Rank {ACE=1,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING};
    enum Type {CLUBS=1, DIAMONDS, HEARTS, SPADES};
    Rank r;
    Type t;
};

class Hand {
protected:
    vector<Card> *cards = new vector<Card>;
public:
    void add (Card c);
    void clear ();
    int getTotal();
    void view();
};

class Deck : public Hand {
public:
    void shuffle ();
    void Populate();
    Card deal();
};

class AbstractPlayer : public Hand {
    virtual bool isDrawing() = 0;
public:
    bool isBusted ();
};

class ComputerPlayer : public AbstractPlayer {
public:
    bool isDrawing () override;
};

class HumanPlayer : public AbstractPlayer {
public:
    bool isDrawing () override;
    void announce (ComputerPlayer h);
};

class BlackJackGame {
private:
    Deck *m_deck = new Deck();
    ComputerPlayer *m_casino = new ComputerPlayer();
    HumanPlayer *m_player = new HumanPlayer();
public:
    void play();
    ~BlackJackGame();
};

#endif //BJ_BLACKJACK_H
