//cpp
#include "tic_tac_toe_manager.h"
using std::ostream;
using std::cout;

TicTacToeManager::TicTacToeManager() : x_wins(0), o_wins(0), ties(0) {}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X") 
    {
        x_wins ++;
    }
    else if (winner == "O") 
    {
        o_wins ++;
    }
    else 
    {
        ties ++;
    }
}


void TicTacToeManager::get_winner_total(int& x, int& o, int& t) 
{
    x = x_wins;
    o = o_wins;
    t = ties;

}

void TicTacToeManager::save_game(TicTacToe& game)
{
    update_winner_count(game.get_winner());
    games.push_back(game);
    
}

ostream& operator<<(ostream& out, TicTacToeManager& manager)
{

    out<<"\nGame History : \n";
    //for(auto game: manager.games)
    for(TicTacToe& game : manager.games)
    {
        game.display_board();
    }

    out<<"O Total wins : "<<manager.o_wins <<"\n";
	out<<"X Total wins : "<<manager.x_wins <<"\n";
	out<<"Total Tails  : "<<manager.ties <<"\n";

    return out;
}
