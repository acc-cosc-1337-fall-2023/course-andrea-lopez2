

//h
#include<iostream>
#include<string>
#include<vector>
#include "create_str.h"
#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3
using std::string;
using std::vector;
using std::ostream;

class Tic_Tac_3: public TicTacToe
{
    public:
        Tic_Tac_3(){ }
        Tic_Tac_3():BaseConstructor(3){}

    private:
        bool check_column_win();    // if marked values 1,4,7 or 2,5,8 or 3,6,9 with all Os or Xs
        bool check_row_win();       // if marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
        bool check_diagonal_win();  
        

#endif 