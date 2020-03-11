#include "Deck.h"
#include <random>
#include <algorithm>

void Deck::shuffle () {
    std::shuffle(cards->begin(), cards->end(), random_device());
}

void Deck::Populate () {
    for (int i=1; i<=13; i++) {
        for (int j=1; j<=4; j++) {
            Card *c = new Card (i, j);
            Deck::add(*c);
        }
    }
}

Card Deck::deal () {
    //Pop first card from vector
    Card c = cards->front();
    cards->erase(cards->begin());
    return c;
}