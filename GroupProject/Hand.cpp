//
//  Hand.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "Hand.h"

Hand::Hand(){
    cardVector.reserve(7);
}

Hand:: ~Hand(){
    clearHand();
}

void Hand::add(Card *cardPtr){
    cardVector.push_back(cardPtr);
}

void Hand::clearHand(){
    for(auto iter = cardVector.begin(); iter != cardVector.end(); iter++){
        delete *iter;
        *iter = nullptr;
    }
    cardVector.clear();
}

int Hand::getTotal() const {
    if(cardVector.empty()){
        return 0;
    }
    
    if(cardVector[0]->getValue() == 0){
        return 0;
    }
    
    int total = 0;
    bool hasAce = false;
    
    for(auto iter = cardVector.begin(); iter != cardVector.end(); iter++){
        total += (*iter)->getValue();
        if((*iter)->getValue() == Card::ACE){
            hasAce = true;
        }
    }
    
    if( hasAce && total <= 11){
        total += 10;
    }
    
    return total;
}

