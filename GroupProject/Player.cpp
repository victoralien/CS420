//
//  Player.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "Player.h"

bool Player::isHitting() const{
    cout << getName() << ", will you hit? (y/n): ";
    char input;
    cin >> input;
    
    return input == 'y' || input == 'Y';
}

void Player::win() const {
    cout << getName() << " has won.\n";
}

void Player::lose() const {
    cout << getName() << " has lost.\n";
}

void Player::push() const {
    cout << getName() << " has pushed.\n";
}


