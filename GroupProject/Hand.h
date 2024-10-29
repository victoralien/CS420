//
//  Hand.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//
#include <vector>
#include <iostream>
#include "Card.h"
#ifndef HAND
#define HAND

class Hand{
    
protected:
    vector<Card* > cardVector;
public:
    Hand();
    virtual ~Hand();
    void add(Card *cardPtr);
    void clearHand();
    int getTotal() const;
};

#endif
