#include "Deck.h"
#include <random>
#include <algorithm>
using namespace std;

void Deck::shuffle () {
    auto rng = default_random_engine{};
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

void Deck::view() {
    for (Card c : *cards) {
        c.displayCard();
    }
}

Card Deck::deal () {
    Card c = cards->front();
    cards->erase(cards->begin());
    return c;
}