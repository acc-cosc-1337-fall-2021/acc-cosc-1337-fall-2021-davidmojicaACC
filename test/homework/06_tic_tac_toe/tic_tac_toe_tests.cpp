#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify if board is full function works")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	game.game_over();
	REQUIRE(game.get_winner() == "C");
	
}

TEST_CASE("Test first player set to X")
{
	Tic_tac game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	Tic_tac game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(3);
	game.mark_board(2);
	game.mark_board(6);
	game.mark_board(5);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(2);
	game.mark_board(8);
	game.mark_board(3);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left")
{
	Tic_tac game;
	game.start_game("X");
	game.mark_board(7);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
}