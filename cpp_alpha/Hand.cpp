/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/
#include "Headers/Hand.h"

Hand::Hand()
{
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

Hand* Hand::new_hand()
{
    return new Hand();
}

Policy *Hand::get_hand() const
{
    int index = 0;
    Policy *policies = new Policy[3];
    HandNode* start = _head;
    while(start != nullptr)
    {
        policies[index] = start->card;
        start = start->next;
        index += 1;
    }
    return policies;
}

void Hand::add_card(Policy card, Role role)
{
    if (role != Voter)
    {
        int max_cards = 0;
        if(role == Chancellor) max_cards = 3;
        else if(role == President) max_cards = 2;

        if(_size == 0)
        {
            _tail = new HandNode();
            _tail->card = card;
            _tail->next = nullptr;

            _head = _tail;
            _size += 1;
        }
        else if(_size < max_cards && _size != 0)
        {
            _tail->next = new HandNode();
            _tail = _tail->next;
            _tail->card = card;
            _tail->next = nullptr;

            _size += 1;
        }
    }
    return;
}

void Hand::discard_hand(HandNode* node)
{
    if(node->next != nullptr)
    {
        discard_hand(node->next);
    }
    delete node;
}


