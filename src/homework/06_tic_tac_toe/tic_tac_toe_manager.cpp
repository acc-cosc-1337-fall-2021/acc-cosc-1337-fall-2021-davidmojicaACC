#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
//cpp

void Tic_tac_manager::save_game(Tic_tac b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}
void Tic_tac_manager::get_winner_total(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties; 
}
void Tic_tac_manager::update_winner_count(string winner)
{
    if(winner == "X")
    {
        x_wins ++;
    }
    else if(winner == "O")
    {
        o_wins ++;
    }
    else if(winner == "C")
    {
        ties ++;
    }
}
std::ostream& operator<<(std::ostream& out, const Tic_tac_manager& manager)
{
    for(Tic_tac i: manager.games)
    {
        cout<<(Tic_tac&)i<<"\n";
    }
    return out;
}