#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the game is full")
{
	TicTacToe game;

	game.mark_board(1);
	REQUIRE(game.game_over()== false);
	game.mark_board(2);
	REQUIRE(game.game_over()== false);
	game.mark_board(3);
	REQUIRE(game.game_over()== false);
	game.mark_board(4);
	REQUIRE(game.game_over()== false);
	game.mark_board(5);
	REQUIRE(game.game_over()== false);
	game.mark_board(7);
	REQUIRE(game.game_over()== false);
	game.mark_board(6);
	REQUIRE(game.game_over()== false);
	game.mark_board(9);
	REQUIRE(game.game_over()== false);
	game.mark_board(8);
	REQUIRE(game.game_over()== true);
	REQUIRE(game.get_winner() == "C");

}
TEST_CASE("Test get player function")
{
	TicTacToe game;

	game.start_game("X");
	REQUIRE(game.get_player()== "X");
	game.start_game("O");
	REQUIRE(game.get_player()== "O");

}
TEST_CASE("Test player win by first column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win by second column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(8);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win by third column")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(3);
	game.mark_board(1);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win by first row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(7);
	game.mark_board(3);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win by second row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(4);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(6);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win by third row")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	game.mark_board(5);
	game.mark_board(8);
	game.mark_board(3);
	game.mark_board(9);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win diagonally from top left")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(1);
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(9);
	REQUIRE(game.game_over()== true);
}
TEST_CASE("Test player win diagonally from bottom left")
{
	TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(3);
	REQUIRE(game.game_over()== true);
	

}

TEST_CASE("Test Manager")
{

TicTacToeManager manager;
TicTacToe game;

	game.start_game("X");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(3);
	REQUIRE(game.game_over()== true);
	REQUIRE(game.get_winner()=="X");
	manager.save_game(game);

	game.start_game("X");
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(7);
	game.mark_board(3);
	REQUIRE(game.game_over()== true);
	REQUIRE(game.get_winner()=="X");
	manager.save_game(game);

	game.start_game("O");
	game.mark_board(7);
	game.mark_board(5);
	game.mark_board(8);
	game.mark_board(3);
	game.mark_board(9);
	REQUIRE(game.game_over()== true);
	REQUIRE(game.get_winner()=="O");
	manager.save_game(game);

	int o, x, t;
	manager.get_winner_total(x, o, t);
	REQUIRE(x == 2);
	REQUIRE(o == 1);
	REQUIRE(t == 0);


}