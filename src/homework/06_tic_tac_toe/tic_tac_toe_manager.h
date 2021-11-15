#include <iostream>
#include "tic_tac_toe.h"
#include<vector>

//h
using std::cout; using std::cin; using std::string;using std::vector; using std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
class Tic_tac_manager
{
public:
    void save_game( unique_ptr<Tic_tac> &b);
    friend std::ostream& operator<<(std::ostream& out, const Tic_tac_manager& manager);
    void get_winner_total(int& x, int& o, int& c);
private:
    vector<unique_ptr<Tic_tac>> games;
    int x_wins = 0;
    int o_wins = 0;
    int ties = 0;
    void update_winner_count(string winner);
};
#endif