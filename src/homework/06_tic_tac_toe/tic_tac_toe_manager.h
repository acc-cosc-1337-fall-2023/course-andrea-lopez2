#include<iostream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER

using std::string;
using std::vector;
using std::ostream;
using std::cout;
class TicTacToeManager 
{
public:
    TicTacToeManager();
    void save_game(TicTacToe& game);
    void get_winner_total(int& o, int& x, int& tie);
    friend ostream& operator<<(ostream& out, TicTacToeManager& manager);
    vector<TicTacToe> games;

 private:

    //vector<TicTacToe> games;
    
    int x_win = 0, o_win = 0, ties = 0;
    void update_winner_count (std::string winner);


};

#endif