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


//void TicTacToeManager::save_game(TicTacToe& game)
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> game)
{
    update_winner_count(game -> get_winner());
    //update_winner_count(game.get_winner());
    
    auto games = std::move(game);
    //games.push_back(game);
    
    
}

ostream& operator<<(ostream& out, const TicTacToeManager& manager)
{

    //<<"\nGame History : \n";

    //for(TicTacToe& *game : manager.games)
    //{
    //    game.display_board();
    //}

    for(auto &game : manager.games)
    {
        //game.display_board();
        *game.operator()->display_board();
    }

    out<<"O Total wins : "<<manager.o_wins <<"\n";
	out<<"X Total wins : "<<manager.x_wins <<"\n";
	out<<"Total Tails  : "<<manager.ties <<"\n";

    return out;
}
