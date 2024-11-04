//
//  Game.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "Game.h"

Game::Game(const string& name){
    player.setName(name);
    deck.shuffle();
}

void Game::play(){
    
    for(int i = 0; i < 2; i ++){
        if(!deck.deal(player) || !deck.deal(house)){
            cout << "Clearing Hands...\nHands Cleared...\n";
            house.clearHand();
            player.clearHand();
            deck.populate();
            deck.shuffle();
            deck.deal(player);
            deck.deal(house);
        }
    }
    
    house.flipFirstCard();
    /*
     Rules:
     Aces count as 1 or 11.
     Face cards count as 10.
     If player is dealt 21, they win automatically.
     If player busts they lose automatically.
     If player is not busted and house busts, player wins
     If the players number is closer to 21 (without exceeding) than the house, player wins
     If the house's number is closer to 21 (without exceeding) than the player, house wins.
     If the numbers are equal (without exceeding) the player pushes. 
     */
    
    if(player.getTotal() == 21){
        cout << player << "\n";
        player.win();
        cout << "(Blackjack).\n";
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
    
    cout << "\nResetting game...\n";
    player.clearHand();
    house.clearHand();
    deck.populate();
    deck.shuffle();
    cout << "Game Reset...\n";
    
}
