//
//  House.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "House.h"

bool House::isHitting() const {
    
    cout << "Dealer " << (getTotal() <=16? "hits": "doesent hit.") << "\n";
    return getTotal() <= 16;
}

void House::flipFirstCard() {
    if(!cardVector.empty()){
        cardVector[0]->flip();
    } else {
        cout << "No cards to flip.\n";
    }
}
