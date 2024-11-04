//
//  GenericPlayer.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include <iostream>
#include "Hand.h"

#ifndef GENERICPLAYER
#define GENERICPLAYER

using namespace std;

class GenericPlayer : public Hand {
private:
    string name;
    
public:
    GenericPlayer(const string& name = "") : name(name) {}
    virtual ~GenericPlayer() {}
    virtual bool isHitting() const = 0;
    bool isBusted() const ;
    void bust() const ;
    string getName() const {return name;};
    void setName(const string &inName);
    friend ostream& operator<<(ostream& os, const GenericPlayer& player);
};

#endif

