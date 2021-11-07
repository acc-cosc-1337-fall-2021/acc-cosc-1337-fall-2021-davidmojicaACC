#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <cstring>
using std::cout; using std::cin; using std::string;using namespace std;
int main() 
{
	
	Tic_tac_manager manager;
	int x_wins, o_wins, ties;
	bool vars = true;
	do{
		Tic_tac game;
		string player;
		int pos;
		char varification;
		int choice;
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
					cin>>game;
					cout<<game;
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
				manager.save_game(game);
				manager.get_winner_total(x_wins,o_wins,ties);
				cout<<"\nX wins: "<<x_wins<<"\n";
				cout<<"O wins: "<<o_wins<<"\n";
				cout<<"Ties: "<<ties<<"\n\n";
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
	cout<<"\n"<<manager;
	cout<<"X wins: "<<x_wins<<"\n";
	cout<<"O wins: "<<o_wins<<"\n";
	cout<<"Ties: "<<ties<<"\n";

	return 0;
}