#include "tic_tac_toe.h"
using std::cout; using std::cin; using std::string;
int main() 
{
	string player;
	Tic_tac game;
	int pos;
	cout<<"Enter X or O: ";
	cin>> player;
	game.start_game(player);
	while(game.game_over() != true)
	{
		cout<<"Enter position from 1 to 9: ";
		cin>> pos;
		game.mark_board(pos);
		game.display_board();
	}
	cout<< "Game Over";
	return 0;
}