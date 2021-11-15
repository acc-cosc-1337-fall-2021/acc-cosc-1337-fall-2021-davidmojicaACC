//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

class Tic_tac_4 : public Tic_tac
{
public:
    Tic_tac_4():Tic_tac(4){}
private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
};
#endif