
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager manager;
	TicTacToe game;
	string first_player;
	char user_choice = 'y';
	int position;

	do
	{
		cout<<"Enter first player (X or O): ";
		cin>>first_player;

		if(first_player == "x" || first_player == "X" || first_player == "o" || first_player == "O")
		{

			game.start_game(first_player);
		
			while(!game.game_over())
			{
				cout<<"Enter a position (from 1-9) or 0 (zero) to exit: ";
		    	cin>>position;
			
				if(position >= 1 && position <= 9)
				{
					game.mark_board(position);
					game.display_board();
				}	
				else if(position == 0)
				{
					break;
				}
				else
				{
					cout<<"Out of range. Try again."<<"\n";
				}
		
			}


			string win = game.get_winner();
			if(win == "X" || win == "O")
			{
				cout<< "The winner of this game is player: "<<win<<"\n";
			}
			else
			{
				cout<<"There is no winner: "<<win<<"\n";
		
			}

			cout<<"Game Over! \n\n";
			//player = " ";
			manager.save_game(game);

			int o, x, t;
			manager.get_winner_total(x, o, t);
			cout<<"O Total wins : "<<o <<"\n";
			cout<<"X Total wins : "<<x <<"\n";
			cout<<"Total Tails  : "<<t <<"\n";

			cout<<"Play again (Enter y or Y)? ";
			cin>>user_choice;
		}

	}while(user_choice == 'y' || user_choice =='Y');

	cout<< manager;

	return 0;
}