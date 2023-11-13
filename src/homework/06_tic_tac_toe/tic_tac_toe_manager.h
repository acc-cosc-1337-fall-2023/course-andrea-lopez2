#include<iostream>
#include<string>
#include<vector>
#include <memory>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER

using std::string;
using std::vector;
using std::ostream;
using std::cout;
using std::make_unique;
using std::unique_ptr;

class TicTacToeManager 
{
public:
    TicTacToeManager(){};
    //void save_game(TicTacToe& game);
    void save_game(std::unique_ptr<TicTacToe> &game);
    
    // friend ostream& operator<<(ostream& out, TicTacToeManager& manager);
    friend ostream &operator<<(std::ostream &out, const TicTacToeManager &manager);
    // friend ostream& operator<<(ostream& out, make_unique<TicTacToeManager>& manager);
    //vector<TicTacToe> games;
    std::vector<std::unique_ptr<TicTacToe>> games;

    void get_winner_total(int& o, int& x, int& tie);

 private:

    //vector<TicTacToe> games;
    
    int x_win = 0, o_win = 0, ties = 0;
    void update_winner_count (std::string winner);


};

#endif