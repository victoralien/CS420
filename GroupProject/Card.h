//
//  Card.h
//  GroupProject
//
//  Created by Victor Allen on 10/28/24.
//

#include <iostream>
using namespace std;

#ifndef CARD
#define CARD


class Card{
public:
    enum RANK{
        ACE = 1,
        TWO = 2,
        THREE = 3,
        FOUR = 4,
        FIVE = 5,
        SIX = 6,
        SEVEN = 7,
        EIGHT = 8,
        NINE = 9,
        TEN = 10,
        JACK = 11,
        QUEEN = 12,
        KING = 13
    };
    enum SUIT {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };
    Card(RANK rank = ACE, SUIT suit = SPADES, bool isUp = true): rank(rank), suit(suit), isFaceUp(isUp) {};
    int getValue() const;
    void flip();
    friend ostream& operator<<(ostream& o, const Card& card);
protected:
    RANK rank;
    SUIT suit;
private:
    bool isFaceUp;
};
#endif
