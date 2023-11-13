#include"tic_tac_toe_manager.h"
//cpp
using std::ostream;
using std::cout;
using namespace std;



//TicTacToeManager::TicTacToeManager() : x_win(0), o_win(0), ties(0) {}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
    //update_winner_count(game.get_winner());
    //games.push_back(game);

    update_winner_count(game->get_winner());
    games.push_back(std::move(game)); // need to review leak memmory
    
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

// ostream& operator<<(ostream& out, make_unique<TicTacToeManager> manager)
ostream &operator<<(ostream &out, const TicTacToeManager &manager)
{
    out<<"Game History: \n";
    for(const auto& game: manager.games)
    {
        game->display_board();
    }

    out<<"O Total wins : "<<manager.o_win <<"\n";
	out<<"X Total wins : "<<manager.x_win <<"\n";
	out<<"Total Tails  : "<<manager.ties <<"\n";


    return out;
}

