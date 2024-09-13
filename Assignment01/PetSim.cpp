#include "PetSim.h"

PetSim::PetSim(string s, const int hunger, const int boredem) : hungerLevel(hunger), boredomLevel(boredem), name(s) {
        cout << "This pet has name: " << name << "\nwith Hunger Level: " << hungerLevel << "\nand Boredem Level: " << boredomLevel << "\n";
        menu();
    };

void PetSim::talk(){
    
    int mood = petMood();

    cout << "\n" <<  getName() << " is feeling ";
    if(mood < 7){
        cout << "Happy.";
    }
    else if( mood < 16){
        cout << "Okay.";
    }
    else if( mood <= 21){
        cout << "Frusturated.";
    }
    else{
        cout << "Mad.";
    }
    cout << "\n";
    
    
}

void PetSim::feedPet(){
    cout << "\n" << getName() << " has been fed.\n";

    setHungerLevel(getHungerLevel() - 4);
    displayPetBehavior();
}

void PetSim::play(){
    cout << "\nPlaying with " << getName() << "\n";
    setBoredemLevel(getBoredemLevel() - 4);
    displayPetBehavior();
}

void PetSim::passTime(int time){
    setHungerLevel(getHungerLevel() + time);
    setBoredemLevel(getBoredemLevel() + time);
    
    cout << "\nTime Passed.\n";
}

void PetSim::menu(){
    int input = -1;

    while(input != 0){
        
        passTime();
        displayPetBehavior();
        cout << "\n[menu]\n1: Listen\n2: Feed Pet\n3: Play With Pet\n0: Quit\nEnter Choice: ";
        cin >> input;
        
        while(input < 0 || input > 3){
            cout << "\nInvalid input.\nEnter a number from 0-3: ";
            cin >> input;
        }

        if(input == 1){
            talk();
        }
        else if(input == 2){
            feedPet();
        }
        else if(input == 3){
            play();
        }
        
    }
}
