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
    bool deal(Hand& aHand);
    bool additionalCards(GenericPlayer& aGenericPlayer);
};

#endif
