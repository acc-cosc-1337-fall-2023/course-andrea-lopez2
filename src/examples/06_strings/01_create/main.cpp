
#include "create_str.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac3.h"
#include "tic_tac4.h"
#include<iostream>
#include<string>
#include<limits>
#include<algorithm>


const auto MaxIgnore =  std::numeric_limits<std::streamsize>::max();

using std::cout; using std::cin; using std::string;

int main() 
{
	TicTacToeManager manager;
	//TicTacToe game;
	Tic_Tac_3 game;
	//Tic_Tac_3 game3;
	//Tic_Tac_4 game4;
	string first_player;
	char user_choice = 'y';
	int position;
    string quitGame;
	
	do
    {
        cout<<"Enter first player (X or O): ";
        cin>>first_player;
		if (first_player=="X" || first_player =="x" || first_player == "o" || first_player == "O")
		{
			game.start_game(first_player);

			while(!game.game_over())
        	{
            	cout<<"Enter a position (from 1-9 or 0(zero) to quit the game): ";
            	if(cin>>position){
					if (position >= 1 && position <= 9)
					{
						game.mark_board(position);
            			game.display_board();
					}
					else if (position == 0)
					{
						break;
					}
					else 
					{
            			cout<<"Out of range, Try again.\n";
					}
				}
				else
        		{	
					std::cout << "Invalid input, Try again.\n";
            		std::cin.clear();
            		std::cin.ignore(MaxIgnore, '\n');
        		}
        	}
			string winner = game.get_winner();
			if (winner == "X" || winner == "O") 
			{
				cout<<"Player "<<winner <<" won this Game \n";	
			}
			else if(winner=="C")
			{
				cout<<"Game is Tied "<<winner <<"\n";	
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