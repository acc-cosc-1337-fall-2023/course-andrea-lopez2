
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include<string>

#include <memory>

using std::cin;
using std::cout;
using std::make_unique;
using std::string;
using std::unique_ptr;
using std::vector;

using std::cout; using std::cin; using std::string;

int main() 
{

	int gameZise = 0;
	TicTacToeManager manager;
	string first_player;
	char user_choice = 'y';
	int position;

	std::unique_ptr<TicTacToe> game;

	cout << "Please choose Tic Tac Toe game, 3 or 4?: \n";
	cin >> gameZise;


	do
	{
		if (gameZise == 3)
			game = make_unique<TicTacToe3>();
		else
			game = make_unique<TicTacToe4>();

		while (first_player != "X" && first_player != "x" && first_player != "o" && first_player != "O")
		{
			std::cout << "Enter player (X or O): ";
			std::cin >> first_player;
		}

			game->start_game(first_player);
		
		while (!game->game_over())
		{
			cout << "Enter a position (from 1-" << gameZise * gameZise << ") or 0 (zero) to exit (now playing " << game->get_player() << ") :";
			cin >> position;

			if (position >= 1 && position <= (gameZise * gameZise))
			{
				game->mark_board(position);
				game->display_board();
			}
			else if (position == 0)
			{
				break;
			}
			else
			{
				cout << "Out of range. Try again."
					 << "\n";
			}
		}


			string win = game->get_winner();
		if (win == "X" || win == "O")
		{
			cout << "The winner of this game is player: " << win << "\n";
		}
		else
		{
			cout << "There is no winner: " << win << "\n";
		}

			cout << "Game Over! \n\n";
		first_player = " ";
		manager.save_game(game);

		int o, x, t;
		manager.get_winner_total(x, o, t);
		cout << "O Total wins : " << o << "\n";
		cout << "X Total wins : " << x << "\n";
		cout << "Total Tails  : " << t << "\n";

		cout << "Play again (Enter y or Y)? ";
		cin >> user_choice;

	}while(user_choice == 'y' || user_choice =='Y');

	
	cout<< manager;
	cout<< "\n";

	return 0;
}

