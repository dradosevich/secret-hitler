
/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

#ifndef HAND_H
#define HAND_H

#include "Enums.h"
struct HandNode
{
    HandNode *next;
    Card card;
};
class Hand
{
private:
    Hand();
    HandNode* _head;
    HandNode* _tail;
    int _size;
public:
    static Hand* new_hand();

    // Accessors
    Card* get_hand() const;

    // Modifiers
    void add_card(Card c, Role r);
    void discard_hand(HandNode* n);
};
#endif
