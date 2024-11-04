//
//  Game.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include<iostream>
#include "Deck.h"
#include "House.h"
#include "Player.h"


#ifndef GAME
#define GAME

using namespace std;

class Game{
private:
    Deck deck;
    House house;
    Player player;
public:
    Game(const string& name);
    ~Game(){}
    void play();
    void resetGame();
};


#endif
