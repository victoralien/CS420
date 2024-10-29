//
//  House.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include "GenericPlayer.h"

#ifndef HOUSE
#define HOUSE

class House : public GenericPlayer{
public:
    House(const string& name = "Dealer"): GenericPlayer(name) {};
    virtual ~House() {};
    virtual bool isHitting() const override;
    void flipFirstCard();
};

#endif
