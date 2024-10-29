//
//  GenericPlayer.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//
#include "GenericPlayer.h"

bool GenericPlayer::isBusted() const {
    return getTotal() > 21;
}

void GenericPlayer::bust() const {
    cout << name << " is busted.\n";
}

void GenericPlayer::setName(const string& inName){
    name = inName;
}

ostream& operator<<(ostream& os, const GenericPlayer& player){
    os << player.name << " has Hand: ";
    for(Card* card : player.cardVector){
        os << (*card) << " ";
    }
    
    os << "Total: (" << player.getTotal() << ")\n";
    return os;
}
