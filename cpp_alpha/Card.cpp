
/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/
#include "Headers/Card.h"

Card::Card(CardType ct)
{
    _ctype = ct;
}
CardType Card::get_card_type() const
{
    return _ctype;
}

bool operator==(const Card& lhs, const Card &rhs)
{
    if(lhs.get_card_type() == rhs.get_card_type())
        return true;
    else return false;
}