//h
#include<iostream>
#include<string>
#include<vector>
#include <memory>
#include "create_str.h"
#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER
using std::string;
using std::vector;
using std::ostream;



class TicTacToeManager 
{
public:
    TicTacToeManager();
    //void save_game(TicTacToe& game);
    void get_winner_total(int& o, int& x, int& t);
    friend intream& operator<<(intream& in, TicTacToeManager& manager);
    friend ostream& operator<<(ostream& out, TicTacToeManager& manager);
    //vector<TicTacToe> games;
    vector<std::unique_ptr<TicTacToe>> games;
    void save_game(std::unique_ptr<TicTacToe> game);

private:
    
    //std::vector<std::string> games{TicTacToe()};
    int x_wins = 0;
    int o_wins = 0; 
    int ties = 0;
    void update_winner_count(std::string winner);
    
};

#endif 
