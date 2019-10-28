
/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

#include "Headers/Papers.h"

Papers::Papers(Party p, Role r, Identity i)
{
    _party = p;
    _role = r;
    _identity = i;
}
Papers* Papers::new_papers(Party p, Role r, Identity i)
{
    return new Papers(p,r,i);
}
Party Papers::get_party()
{
    return _party;
}
Role Papers::get_role()
{
    return _role;
}
Identity Papers::get_identity()
{
    return _identity;
}
void Papers::set_role(Role r)
{
    _role = r;
    return;
}
