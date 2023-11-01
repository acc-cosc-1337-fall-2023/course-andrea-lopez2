//cpp
#include "create_str.h"
#include "tic_tac_toe_manager.h"


using std::cout;

// TicTacToe::TicTacToe() : player("X"), pegs(9, " "), winner(" ") {}

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

void TicTacToe::display_board(int size) const
{
    int ni = 0;

    If (size ==3) 
    {
        for(long unsigned int i=0; i < pegs.size(); i += size)
        {    
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
            ni++;
            if (ni == size)
            {
            cout<<"\n";
            ni=0;
        }          
    }
    else If (size ==4) 
    {
        for(long unsigned int i=0; i < pegs.size(); i += size)
        {    
            cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"|"<<pegs[i+3]<<"\n";
            ni++;
            if (ni == size)
            {
            cout<<"\n";
            ni=0;
        }          
    }

    }
    
}



bool TicTacToe::check_column_win() 
{
   
    return false;
    
}



bool TicTacToe::check_row_win() 
{
   
    return false;
    
}


bool TicTacToe::check_diagonal_win() 
{
   
    return false;
    
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

