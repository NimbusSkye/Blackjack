#include <iostream>
#include "Card.h"
#include "Hand.h"

using namespace std;

int main () {
    Card *c = new Card (11, 'S');
    Card *c1 = new Card (10, 'C');
    Hand *h = new Hand();
    h->add(*c);
    h->add(*c1);
    c->displayCard();
    c1->displayCard();
    cout << c->getValue() << endl;
    cout << c1->getValue() << endl;
    cout << h->getTotal();
}