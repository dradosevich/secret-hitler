
/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

#include "Papers.h"
#include "Hand.h"

class Player
{
private:
  Papers _papers;
  Hand _hand;
  Vote get_vote();
public:
  void add_card(Card c);
  void set_role(Role r);

  Vote vote();
};