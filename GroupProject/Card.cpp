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
    string RANK[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
    if(card.isFaceUp){
        os << RANK[card.rank-1] << SUITS[card.suit];
    }
    else{
        os << "XX";
    }
    return os;
}

void Card::flip(){
    isFaceUp = !isFaceUp;
}
