//
//  Game.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "Game.h"

Game::Game(const string& name){
    player.setName(name);
    deck.populate();
    deck.shuffle();
}

void Game::play(){
    
    for(int i = 0; i < 2; i ++){
        deck.deal(player);
        deck.deal(house);
    }
    
    house.flipFirstCard();
    /*
     Rules:
     If player is dealt 21, they win automatically.
     If player busts they lose automatically.
     If player is not busted and house busts, player wins
     If the players number is closer to 21 (without exceeding) than the house, player wins
     If the house's number is closer to 21 (without exceeding) than the player, house wins.
     If the numbers are equal the player pushes. 
     */
    if(player.getTotal() == 21){
        cout << player << "\n";
        player.win();
        cout << " (Blackjack).\n";
    }
    else{
        cout << player << "\n" << house << "\n";
        
        deck.additionalCards(player);
        
        if(player.isBusted()){
            player.lose();
        }
        else{
            house.flipFirstCard();
        
            cout << house << "\n";
        
            deck.additionalCards(house);
            
            if (house.isBusted()) {
                    player.win();
            }
            else if (player.getTotal() > house.getTotal()) {
                    player.win();
            }
            else if (player.getTotal() < house.getTotal()) {
                player.lose();
            }
            else {
                player.push();
            }
        }
    }
    
    player.clearHand();
    house.clearHand();
}
