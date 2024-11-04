//
//  Deck.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "Deck.h"

Deck::Deck(){
    cardVector.reserve(52);
    populate();
}

void Deck::populate(){
    clearHand();
    cout << "Creating deck...\n";
    for(int s = Card::CLUBS; s <= Card::SPADES; s++){
        for(int r = Card::ACE; r <= Card::KING; r++){
            add(new Card(static_cast<Card::RANK>(r),static_cast<Card::SUIT>(s)));
        }
    }
    cout << "Deck created...\n";
}

void Deck::shuffle(){
    // random_shuffle was removed in C++17
    random_device rd;
    mt19937 g(rd());
    cout << "Shuffling deck...\n";
    std::shuffle(cardVector.begin(), cardVector.end(), g);
    cout << "Deck Shuffled...\n";
}

bool Deck::deal(Hand &aHand){
    if(!cardVector.empty()){
        aHand.add(cardVector.back());
        cardVector.pop_back();
        return true;
    }
    else{
        cout << "Out of cards to deal.\n";
        return false;
        
    }
}

bool Deck::additionalCards(GenericPlayer &aGenericPlayer){
    while(!aGenericPlayer.isBusted() && aGenericPlayer.isHitting()){
        if(deal(aGenericPlayer)){
            cout << aGenericPlayer << "\n";
            
            if(aGenericPlayer.isBusted()){
                aGenericPlayer.bust();
            }
        }
        else{
            return false;
        }
    }
    
    return true;
}
