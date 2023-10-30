//cpp
#include "create_str.h"
#include "tic_tac_toe_manager.h"


using std::cout;

//TicTacToe::TicTacToe() : player("X"), pegs(9, " "), winner(" ") {}

bool TicTacToe::game_over()
{
    if (check_column_win())
    {
        set_winner();
        return true;
    }
    else if (check_row_win())
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else
    {
        return check_board_full();    
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
    for(long unsigned int i=0; i < pegs.size(); i += 3)
    {    
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        ni++;
        if (ni == 3)
        {
           cout<<"\n";
           ni=0;
        }       
    }
}



bool TicTacToe::check_column_win() 
{
    // if marked values 1,4,7 or 2,5,8 or 3,6,9 with all Os or Xs
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") 
    {
        return true;
    }
    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") 
    {
        return true;
    }
    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") 
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") 
    {
        return true;
    }
    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") 
    {
        return true;
    }
    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}



bool TicTacToe::check_row_win() 
{
    // if marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") 
    {
        return true;
    }
    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") 
    {
        return true;
    }
    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") 
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") 
    {
        return true;
    }
    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") 
    {
        return true;
    }
    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
    }
}


bool TicTacToe::check_diagonal_win() 
{
    // if marked values 1,5,9 or 7,5,3 with all Os or Xs
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") 
    {
        return true;
    }
    else if(pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") 
    {
        return true;
    }
    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") 
    {
        return true;
    }
    else if(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O") 
    {
        return true;
    }
    else 
    {
        return false;
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
    if (check_board_full() && !check_column_win() && !check_row_win() && !check_diagonal_win())
    {
        return "Tie";
    }
    else 
    {
        return winner;
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
    winner = "C";
    return true;
}

