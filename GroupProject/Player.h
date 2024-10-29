//
//  Player.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "GenericPlayer.h"

#ifndef PLAYER
#define PLAYER

using namespace std;

class Player : public GenericPlayer {
public:
    Player(const string& name = "") : GenericPlayer(name) {}
    virtual ~Player() {}
    virtual bool isHitting() const override;
    void win() const;
    void lose() const;
    void push() const;
};
#endif
