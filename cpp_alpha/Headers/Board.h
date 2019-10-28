/*===================================================================
  Author: Adrian Barberis
  Last Edit: 10-23-2019
===================================================================*/

#include "Headers/Enums.h"

class Board
{
private:
    Board(BoardType bt, int size);
    Card* _policies;
    BoardType _board_type;
    int _failed_policies;
    int _facist_power_number;
public:
    static Board* make_board(BoardType bt, int size);
    
};