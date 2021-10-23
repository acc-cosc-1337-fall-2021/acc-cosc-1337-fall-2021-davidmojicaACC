//cpp
#include "tic_tac_toe.h"
#include <algorithm>
using std::cout;
bool Tic_tac::game_over()
{
    return check_board_full();
}

void Tic_tac::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void Tic_tac::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();

}

string Tic_tac::get_player() const
{
    return player;
}

void Tic_tac::display_board()
{
    int count = 0;
    for(string i : pegs)
    {
        if (count == 2)
        {
            cout << i << "\n";
            count = 0;
        }else{
            cout<< i << "|";
            count ++;
        }
    }
}

void Tic_tac::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool Tic_tac::check_board_full()
{
    if(std::find(pegs.begin(), pegs.end(), " ") != pegs.end()) 
    {
        return false;
    } 
    else 
    {
        return true;
    }
}

void Tic_tac::clear_board()
{
    pegs = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
}