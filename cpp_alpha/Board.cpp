/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

#include "Headers/Board.h"

Board::Board(BoardType bt, int player_count)
{
  if (player_count < 5)
    throw "Too few players";

  // Facist Powers!!?

  if (bt == Facist)
    _size = 6;
  else
    _size = 4;

  _board_type = bt;
  _policies = new Policy[_size];
  _failed_elections = 0;
  _board_index = 0;

}
Board* Board::make_board(BoardType bt, int size)
{
  return new Board(bt, size);
}

void Board::add_policy(Policy policy)
{
  if(_board_index == (_size + 1))
    throw "Board Full";

  if((_board_type == Liberal && policy == Facist) ||
     (_board_type == Facist && policy == Liberal))
    throw "Board-Policy Mismatch";

  // strictly speaking actually "adding" the policy is probably superflous
  // incrementing the counter is really all you need
  _policies[_board_index] = policy;
  _board_index += 1;
}
void Board::fail_election()
{
  if(_failed_elections != 3)
    _failed_elections += 1;
  else
    reset_failed_elections();
}
void Board::reset_failed_elections()
{
  _failed_elections = 0;
}

int Board::get_failed_election_count()
{
  return _failed_elections;
}
int Board::get_enacted_policy_count()
{
  return _board_index + 1;
}
FacistPower Board::get_facist_power(int player_count)
{
  if(_board_type != Facist)
    return None;
  else
  {
    switch(_board_index)
    {
      case 0: 
      {

        return None;
      }
      case 1:
      {
        return None;
      }
      case 2: 
      {
        return None;
      }
      case 3:
      {
        return None;
      }
      case 4:
      {
        return None;
      }
      case 5:
      {
        return None;
      }
    }
  }
}