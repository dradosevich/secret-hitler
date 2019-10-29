/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

#include "Headers/Enums.h"

class Board
{
private:
  Board(BoardType bt, int size);
  Policy *_policies;
  FacistPower* _facist_powers;
  BoardType _board_type;
  int _failed_elections;
  int _board_index;
  int _size;
public:
  static Board* make_board(BoardType bt, int size);

  void add_policy(Policy p); 
  void fail_election();
  void reset_failed_elections();

  int get_failed_election_count();
  int get_enacted_policy_count();
  FacistPower get_facist_power(int player_count);
};