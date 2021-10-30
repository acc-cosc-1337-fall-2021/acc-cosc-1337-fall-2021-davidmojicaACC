#include "tic_tac_toe.h"
#include <cstring>
using std::cout; using std::cin; using std::string;using namespace std;
int main() 
{
	string player;
	Tic_tac game;
	int pos;
	int choice;
	bool vars = true;
	char varification;
	do{
		cout<<"1- Play Game\n";
		cout<<"2- Exit\n";
		cin>>choice;
		if(choice == 1)
		{
			cout<<"Enter X or O: ";
			cin>> player;
			if (player == "x")
			{
				player = "X";
			}
			else if (player == "o")
			{
				player = "O";
			}
			if(player == "X" || player == "O")
			{
				game.start_game(player);
				while(game.game_over() != true)
				{
					cout<<"Enter position from 1 to 9: ";
					cin>> pos;
					game.mark_board(pos);
					game.display_board();
				}
				if(game.get_winner() == "X")
				{
					cout<<"X is the Winner!!!\n";
				}
				else if(game.get_winner() == "O")
				{
					cout<<"O is the Winner!!!\n";
				}
				else if (game.get_winner() == "C")
				{
					cout<< "Tie\n";
				}
			}
			else
			{
				cout<<"Did not enter valid entry\n";
			}

		}
		if (choice == 2)
		{
			cout<<"Are you sure you want to exit? (y/other char)\n";
			cin>>ws>>varification;
			if(varification == 'Y'|| varification  == 'y')
			{
				vars = false;
			}else{
				vars = true;
			}
		}
		if (choice != 2 && choice != 1)
		{
			cout<<"Did not enter valid choice.\n";
		}
		
	}while(vars);
	return 0;
}