//h
#include <iostream>
#include<vector>
using std::string;using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class Tic_tac
{
public:
    void start_game(string first_player);
    void mark_board(int position);
    bool game_over();
    string get_player() const;
    string get_winner();
    friend std::ostream& operator<<(std::ostream& out, const Tic_tac& game);
    friend std::istream& operator>>(std::istream& in, Tic_tac& game);

private:
    void set_next_player();
    void set_winner();
    void clear_board();
    bool check_board_full();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    
    string player;
    string winner;
    vector<string> pegs {" ", " ", " ", " ", " ", " ", " ", " ", " "};
};

#endif
