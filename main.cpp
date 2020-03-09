#include <iostream>
#include "Card.h"

using namespace std;

int main () {
    Card *c = new Card (Card::KING, Card::CLUBS);
    c->displayCard();
    cout << c->getValue() << endl;
}