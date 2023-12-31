//cpp
#include "tic_tac_toe.h"

using std::cout;
bool TicTacToe::game_over()
{
    if (check_column_win())
    {
        set_winner();
        return true;
    }
    else if(check_row_win())
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win())
    {
       set_winner();
       return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }

}

void TicTacToe::start_game(std::string first_player)
{
    player = toupper(first_player[0]);
    winner = " ";
    clear_board();

}

void TicTacToe::mark_board(int position)
{
    pegs[position -1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    int ni = 0;
    if (board_size == 3)
    {
        for (long unsigned int i = 0; i < pegs.size(); i += board_size)
        {
            cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
            ni++;
            if (ni == board_size)
            {
                cout << "\n";
                ni = 0;
            }
        }
    }
    else
    {
        for (long unsigned int i = 0; i < pegs.size(); i += board_size)
        {
            cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "|" << pegs[i + 3] << "\n";
            ni++;
            if (ni == board_size)
            {
                cout << "\n";
                ni = 0;
            }
        }
    }
}

//Private fuctions 
void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";

    }
}

void TicTacToe::set_next_player()
{
    if(player == "X" || player =="x")
    {
        player = "O";
    }
    else 
    {
        player = "X";
    }
}
bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    } 
    return true;
}
bool TicTacToe::check_column_win()
{
    if(pegs[0]== "X" && pegs[3] == "X" && pegs[6] == "X" )
    {
        return true;
    }
    if(pegs[1]== "X" && pegs[4] == "X" && pegs[7] == "X" )
    {
        return true;
    }
    if(pegs[2]== "X" && pegs[5] == "X" && pegs[8] == "X" )
    {
        return true;
    }
    if(pegs[0]== "O" && pegs[3] == "O" && pegs[6] == "O" )
    {
        return true;
    }
    if(pegs[1]== "O" && pegs[4] == "O" && pegs[7] == "O" )
    {
        return true;
    }
    if(pegs[2]== "O" && pegs[5] == "O" && pegs[8] == "O" )
    {
        return true;
    }
    
    return false;
	
}
bool TicTacToe::check_row_win()
{
    if(pegs[0]== "X" && pegs[1] == "X" && pegs[2] == "X" )
    {
        return true;
    }
    if(pegs[3]== "X" && pegs[4] == "X" && pegs[5] == "X" )
    {
        return true;
    }
    if(pegs[6]== "X" && pegs[7] == "X" && pegs[8] == "X" )
    {
        return true;
    }
    if(pegs[0]== "O" && pegs[1] == "O" && pegs[2] == "O" )
    {
        return true;
    }
    if(pegs[3]== "O" && pegs[4] == "O" && pegs[5] == "O" )
    {
        return true;
    }
    if(pegs[6]== "O" && pegs[7] == "O" && pegs[8] == "O" )
    {
        return true;
    }
    
    return false;

}
bool TicTacToe::check_diagonal_win()
{
    if(pegs[0]== "X" && pegs[4] == "X" && pegs[8] == "X" )
    {
        return true;
    }
    if(pegs[2]== "X" && pegs[4] == "X" && pegs[6] == "X" )
    {
        return true;
    }
    if(pegs[0]== "O" && pegs[4] == "O" && pegs[8] == "O" )
    {
        return true;
    }
    if(pegs[2]== "O" && pegs[4] == "O" && pegs[6] == "O" )
    {
        return true;
    }
  
    return false;

}
void TicTacToe::set_winner()
{
    if(player == "X" || player =="x")
    {
        winner = "O";
    }
    else 
    {
        winner = "X";
    }
}
std::string TicTacToe::get_winner() 
{
    return winner;
}
