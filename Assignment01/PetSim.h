#include <stdio.h>
#include <iostream>

#ifndef PETSIM
#define PETSIM

using namespace std;

class PetSim{

    private:
    int hungerLevel, boredomLevel;
    string name;

    int petMood() const {return getHungerLevel() + getBoredemLevel();};

    public:

    PetSim(string s, const int hunger, const int boredem);

    int getHungerLevel() const { return hungerLevel;};
    void setHungerLevel(int level) {hungerLevel = (level < 0) ? 0 : ((level > 100) ? 100 : level);};

    int getBoredemLevel() const { return boredomLevel;};
    void setBoredemLevel( int level ){boredomLevel = (level < 0) ? 0: ((level > 100) ? 100 : level);};

    string getName() const { return name;};
    void setName( const string& s) { name = s;};

    void talk();
   //int getRandom(int l, int h) { return l + rand() % h ;};
    void feedPet();
    void play();
    void passTime(int time = 1);
    void displayPetBehavior(){
         cout << "\nPet Behavior Report:\nHunger Level: " << getHungerLevel() << " - " << ((getHungerLevel() < 3) ? "Not hungry\n" : (getHungerLevel() <= 11) ? "Moderatley Hungry\n" : "Very Hungry\n") << "Bordem Level: " << getBoredemLevel() << " - " << ((getBoredemLevel() < 3) ? "Not bored\n" : (getBoredemLevel() <=11) ? "A little bored\n" : "Very Bored\n");
    };
    void menu();

};
#endif 
