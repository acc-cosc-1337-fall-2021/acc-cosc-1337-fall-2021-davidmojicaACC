//cpp
#include "tic_tac_toe.h"
#include <algorithm>
using std::cout;
bool Tic_tac::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
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

bool Tic_tac::check_column_win()
{
    if((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")||(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"))
    {
        return true;
    }
    else if((pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")||(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"))
    {
        return true;
    }
    else if ((pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")||(pegs[3] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    return false;
}

bool Tic_tac::check_row_win()
{
    if((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")||(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"))
    {
        return true;
    }
    else if((pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")||(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"))
    {
        return true;
    }
    else if ((pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")||(pegs[6] == "O" && pegs[6] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    return false;
}

bool Tic_tac::check_diagonal_win()
{
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")||(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    else if((pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")||(pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O"))
    {
        return true;
    }
    return false;
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

string Tic_tac::get_winner()
{
    return winner;
}

void Tic_tac::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}