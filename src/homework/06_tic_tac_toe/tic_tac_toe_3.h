//h
#include <iostream>
#include <vector>
#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3
using std::vector;

class TicTacToe3 : public TicTacToe
{
public:
    TicTacToe3(){ /* empty*/}
    TicTacToe3(int size) : TicTacToe(size){ /* empty*/}

private:
    bool check_column_win();   // if marked values 1,4,7 or 2,5,8 or 3,6,9 with all Os or Xs
    bool check_row_win();      // if marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
    bool check_diagonal_win(); // if marked values 1,5,9 or 7,5,3 with all Os or Xs
};

#endif