//
//  Card.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "Card.h"

int Card::getValue() const {
    if(isFaceUp){
        if( rank >= JACK){
            return 10;
        }
        return rank;
    }
    return 0;
}

ostream& operator<<(ostream& os, const Card& card){
    string SUITS[] = {"C","D","H","S"};
    if(card.isFaceUp){
        os << card.getValue() << SUITS[card.suit];
    }
    else{
        os << "XX";
    }
    return os;
}

void Card::flip(){
    isFaceUp = !isFaceUp;
}
