
/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

enum CardType {Liberal, Facist};
class Card
{
private:
    CardType _ctype;
public:
    Card(CardType card_type);
    CardType get_card_type() const;
};

bool operator==(const Card &lhs, const Card &rhs);