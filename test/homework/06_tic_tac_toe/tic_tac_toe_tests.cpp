#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

#include <memory>
using std::make_unique;
using std::unique_ptr;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the game is full")
{
	//TicTacToe game;
	//std::unique_prt<TicTacToe> game;
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);
	

	game->start_game("X");
	game->mark_board(1);
	REQUIRE(game->game_over()== false);
	game->mark_board(2);
	REQUIRE(game->game_over()== false);
	game->mark_board(3);
	REQUIRE(game->game_over()== false);
	game->mark_board(4);
	REQUIRE(game->game_over()== false);
	game->mark_board(5);
	REQUIRE(game->game_over()== false);
	game->mark_board(7);
	REQUIRE(game->game_over()== false);
	game->mark_board(6);
	REQUIRE(game->game_over()== false);
	game->mark_board(9);
	REQUIRE(game->game_over()== false);
	game->mark_board(8);
	REQUIRE(game->game_over()== true);
	REQUIRE(game->get_winner() == "C");

}

TEST_CASE("Test get player function")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	//TicTacToe* game;
	//TicTacToe3 games();
	//game = & checking_account;

	//REQUIRE(account->get_balance() == 500);


	game->start_game("X");
	REQUIRE(game->get_player()== "X");
	game->start_game("O");
	REQUIRE(game->get_player()== "O");

}

TEST_CASE("Test player win by first column")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(4);
	game->mark_board(5);
	game->mark_board(7);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by second column")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(8);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by third column")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(3);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(9);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by first row")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(7);
	game->mark_board(3);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by second row")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(4);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(6);
	REQUIRE(game->game_over()== true);
}

TEST_CASE("Test player win by third row")
{

	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(7);
	game->mark_board(5);
	game->mark_board(8);
	game->mark_board(3);
	game->mark_board(9);
	REQUIRE(game->game_over()== true);
}



TEST_CASE("Test player win diagonally from top left")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(1);
	game->mark_board(3);
	game->mark_board(5);
	game->mark_board(7);
	game->mark_board(9);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win diagonally from bottom left")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

	game->start_game("X");
	game->mark_board(7);
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(6);
	game->mark_board(3);
	REQUIRE(game->game_over()== true);
	

}

// TEST_CASE("Test Manager")
// {

// 	TicTacToeManager manager;
// 	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>(3);

// 	game->start_game("X");
// 	game->mark_board(7);
// 	game->mark_board(1);
// 	game->mark_board(5);
// 	game->mark_board(6);
// 	game->mark_board(3);
// 	REQUIRE(game->game_over()== true);
// 	REQUIRE(game->get_winner()=="X");
// 	manager.save_game(game);

// 	game->start_game("X");
// 	game->mark_board(1);
// 	game->mark_board(5);
// 	game->mark_board(2);
// 	game->mark_board(7);
// 	game->mark_board(3);
// 	REQUIRE(game->game_over()== true);
// 	REQUIRE(game->get_winner()=="X");
// 	manager->save_game(game);

// 	game->start_game("O");
// 	game->mark_board(7);
// 	game->mark_board(5);
// 	game->mark_board(8);
// 	game->mark_board(3);
// 	game->mark_board(9);
// 	REQUIRE(game->game_over()== true);
// 	REQUIRE(game->get_winner()=="O");
// 	manager->save_game(game);

// 	int o, x, t;
// 	manager->get_winner_total(x, o, t);
// 	REQUIRE(x == 2);
// 	REQUIRE(o == 1);
// 	REQUIRE(t == 0);

// }



TEST_CASE("Test player win by first column 4")
{
	//TicTacToe4 game;
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(1);
	game->mark_board(2);
	game->mark_board(5);
	game->mark_board(4);
	game->mark_board(9);
	game->mark_board(7);
	game->mark_board(13);
	REQUIRE(game->game_over()== true);
}

TEST_CASE("Test player win by second column 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	
    game->start_game("X");
	game->mark_board(2);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(10);
	game->mark_board(5);
	game->mark_board(14);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by third column 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(3);
	game->mark_board(1);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(11);
	game->mark_board(5);
	game->mark_board(15);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by forth column 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(4);
	game->mark_board(1);
	game->mark_board(8);
	game->mark_board(6);
	game->mark_board(12);
	game->mark_board(5);
	game->mark_board(16);
	REQUIRE(game->game_over()== true);
}

TEST_CASE("Test player win by first row 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(1);
	game->mark_board(5);
	game->mark_board(2);
	game->mark_board(7);
	game->mark_board(3);
	game->mark_board(9);
	game->mark_board(4);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by second row 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(5);
	game->mark_board(1);
	game->mark_board(6);
	game->mark_board(11);
	game->mark_board(7);
	game->mark_board(10);
	game->mark_board(8);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by third row 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(9);
	game->mark_board(5);
	game->mark_board(10);
	game->mark_board(3);
	game->mark_board(11);
	game->mark_board(7);
	game->mark_board(12);
	REQUIRE(game->game_over()== true);
}
TEST_CASE("Test player win by forth row 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(13);
	game->mark_board(5);
	game->mark_board(14);
	game->mark_board(3);
	game->mark_board(15);
	game->mark_board(7);
	game->mark_board(16);
	REQUIRE(game->game_over()== true);
}

TEST_CASE("Test player win diagonally from top left 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(1);
	game->mark_board(3);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(11);
	game->mark_board(7);
	game->mark_board(16);
	REQUIRE(game->game_over()== true);

}
TEST_CASE("Test player win diagonally from bottom left 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>(4);

	game->start_game("X");
	game->mark_board(4);
	game->mark_board(1);
	game->mark_board(7);
	game->mark_board(6);
	game->mark_board(10);
	game->mark_board(11);
	game->mark_board(13);
	REQUIRE(game->game_over()== true);
	

}