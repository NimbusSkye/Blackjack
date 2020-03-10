//
// Created by Admin on 3/10/2020.
//

#include "Deck.h"
#include <random>
#include <algorithm>
using namespace std;

void Deck::shuffle () {
    auto rng = default_random_engine{};
    std::shuffle(cards->begin(), cards->end(), random_device());
}

void populate () {

}

Card deal () {

}