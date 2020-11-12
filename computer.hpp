#pragma once

#include "feld.hpp"

class Computer
{
    Feld field_;
    char a1;
    char a2;
    char a3;
    char b1;
    char b2;
    char b3;
    char c1;
    char c2;
    char c3;
    bool unmoeglich;
public:
    Computer(bool moeglich, Feld feld);
    str get_best_zug(Feld feld);
    void new_time();
};
