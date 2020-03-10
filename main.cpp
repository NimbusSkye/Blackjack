#include <iostream>
#include "Card.h"
#include "Hand.h"

using namespace std;

int main () {
    Card *c = new Card (Card::KING, Card::SPADES);
    Card *c1 = new Card (Card::TEN, Card::CLUBS);
    Hand *h = new Hand();
    h->add(*c);
    h->add(*c1);
    c->displayCard();
    c1->displayCard();
    cout << c->getValue() << endl;
    cout << c1->getValue() << endl;
    cout << h->getTotal();
}