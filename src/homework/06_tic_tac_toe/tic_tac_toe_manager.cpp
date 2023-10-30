#include"tic_tac_toe_manager.h"
//cpp
using std::ostream;
using std::cout;
using namespace std;

TicTacToeManager::TicTacToeManager() : x_win(0), o_win(0), ties(0) {}

void TicTacToeManager::save_game(TicTacToe& game)
{
    update_winner_count(game.get_winner());
    games.push_back(game);
    
}
void TicTacToeManager::get_winner_total(int& x, int& o, int& tie)
{
    x = x_win;
    o = o_win;
    tie = ties;
}
void TicTacToeManager::update_winner_count(string winner)
{
    if (winner == "X") 
    {
        x_win ++;
    }
    else if (winner == "O") 
    {
        o_win ++;
    }
    else 
    {
        ties ++;
    }
}
ostream& operator<<(ostream& out, TicTacToeManager& manager)
{
    cout<<"Game History: \n";
    for(TicTacToe& game: manager.games)
    {
        game.display_board();
    }

    out<<"O Total wins : "<<manager.o_win <<"\n";
	out<<"X Total wins : "<<manager.x_win <<"\n";
	out<<"Total Tails  : "<<manager.ties <<"\n";


    return out;
}