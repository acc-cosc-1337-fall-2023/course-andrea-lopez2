//h
#include<iostream>
#include<string>
#include<vector>
#include "create_str.h"
#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4
using std::string;
using std::vector;
using std::ostream;


class Tic_Tac_4: public TicTacToe
{
    public:
        //Tic_Tac_4(){}
        DeriveConstructor():BaseConstructor(4){}

    private:
        bool check_column_win()
        //bool check_row_win() {return TicTacToe::check_row_win};
        //bool check_diagonal_win() {return TicTacToe::check_diagonal_win};
};

#endif 