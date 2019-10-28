
/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019

  Simple structure holding information about a player's identity
===================================================================*/

#ifndef PAPERS_H
#define PAPERS_H

#include "Enums.h"

class Papers
{
private:
  Papers(Party p, Role r, Identity i);
  Party _party;
  Role _role;
  Identity _identity;

public:
  static Papers* new_papers(Party p, Role r, Identity i);    

  // Accessors
  Party get_party();
  Role get_role();
  Identity get_identity();

  // Modifiers
  void set_role(Role r);
};
#endif