//
//  Deck.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include <algorithm>
#include <random>
#include "Hand.h"
#include "GenericPlayer.h"
#include "Card.h"

using namespace std;

#ifndef DECK
#define DECK

class Deck : public Hand{
public:
    Deck();
    virtual ~Deck(){}
    void populate();
    void shuffle();
    void deal(Hand& aHand);
    void additionalCards(GenericPlayer& aGenericPlayer);
};

#endif
