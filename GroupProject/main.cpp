//
//  main.cpp
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include <iostream>
#include "Game.h"

using namespace std;
int main(int argc, const char * argv[]) {
    
    cout << "Welcome to blackjack!\nWOOOOO GAMBLING!!!!\n";
    
    char again = 'y';
    
    string name;
    
    cout << "Enter name: ";
    getline(cin,name);
    
    Game g(name);
    
    while(again == 'y' || again == 'Y'){
        g.play();
        
        cout << "Thank you for playing!\nPlay Again? (y/n): ";
        cin >> again;
        cout << endl;
    }
    
    cout << "\nGoodbye!\n";
   
}
