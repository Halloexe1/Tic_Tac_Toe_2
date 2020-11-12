#pragma once
#include "Tic_Tac_Toe_1.hpp"
class Feld
{
    char A1;
    char A2;
    char A3;
    char B1;
    char B2;
    char B3;
    char C1;
    char C2;
    char C3;
public:
    Feld();
    char get_field(str name);
    void print();
    bool is_valid_zug(int zug_column, char zug_row);
    void setzte(const char row, const int column, const char spieler);
    bool did_somebody_win();
    bool is_full();
    void clear();
};
