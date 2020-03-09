#include <iostream>
#include "Card.h"

using namespace std;

int main () {
    Card *c = new Card (Card::THREE, Card::SPADES);
    c->displayCard();
    cout << c->getValue() << endl;
}