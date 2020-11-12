#include "feld.hpp"

Feld::Feld() {
    A1 = ' ';
    A2 = ' ';
    A3 = ' ';
    B1 = ' ';
    B2 = ' ';
    B3 = ' ';
    C1 = ' ';
    C2 = ' ';
    C3 = ' ';
}

char Feld::get_field(str name) {
    if (name == "A1") {
        return A1;
    }
    else if (name == "A2") {
        return A2;
    }
    else if (name == "A3") {
        return A3;
    }
    else if (name == "B1") {
        return B1;
    }
    else if (name == "B2") {
        return B2;
    }
    else if (name == "B3") {
        return B3;
    }
    else if (name == "C1") {
        return C1;
    }
    else if (name == "C2") {
        return C2;
    }
    else if (name == "C3") {
        return C3;
    }
    else {
        return '1';
    }
}

void Feld::print() {
    cout << endl;
    cout << Feld::A1 << "|" << Feld::A2 << "|" << Feld::A3 << " A" << endl;
    cout << "-+-+-" << endl;
    cout << Feld::B1 << "|" << Feld::B2 << "|" << Feld::B3 << " B" << endl;
    cout << "-+-+-" << endl;
    cout << Feld::C1 << "|" << Feld::C2 << "|" << Feld::C3 << " C" << endl;
    cout << "1 2 3" << endl;
}

bool Feld::is_valid_zug(int zug_column, char zug_row) {
    if (true) {
        switch (zug_column) {
        case 1:
            if (zug_row == 'A') {
                if (A1 == ' ') {
                    return true;
                    break;
                }
            }
            else if (zug_row == 'B') {
                if (B1 == ' ') {
                    return true;
                    break;
                }
            }
            else if (zug_row == 'C') {
                if (C1 == ' ') {
                    return true;
                    break;
                }
            }
            return false;
            break;
        case 2:
            if (zug_row == 'A') {
                if (A2 == ' ') {
                    return true;
                    break;
                }
            }
            else if (zug_row == 'B') {
                if (B2 == ' ') {
                    return true;
                    break;
                }
            }
            else if (zug_row == 'C') {
                if (C2 == ' ') {
                    return true;
                    break;
                }
            }
            return false;
            break;
        case 3:
            if (zug_row == 'A') {
                if (A3 == ' ') {
                    return true;
                    break;
                }
            }
            else if (zug_row == 'B') {
                if (B3 == ' ') {
                    return true;
                    break;
                }
            }
            else if (zug_row == 'C') {
                if (C3 == ' ') {
                    return true;
                    break;
                }
            }
            return false;
            break;
        }
    }
    return false;
}

void Feld::setzte(const char row, const int column, const char spieler) {
    if (row == 'A') {
        if (column == 1) {
            if (get_field("A1") == ' ') {
                A1 = spieler;
                return;
            }
        }
        else if (column == 2) {
            if (get_field("A2") == ' ') {
                A2 = spieler;
                return;
            }
        }
        else if (column == 3) {
            if (get_field("A3") == ' ') {
                A3 = spieler;
                return;
            }
        }
    }
    else if (row == 'B') {
        if (column == 1) {
            if (get_field("B1") == ' ') {
                B1 = spieler;
                return;
            }
        }
        else if (column == 2) {
            if (get_field("B2") == ' ') {
                B2 = spieler;
                return;
            }
        }
        else if (column == 3) {
            if (get_field("B3") == ' ') {
                B3 = spieler;
                return;
            }
        }
    }
    else if (row == 'C') {
        if (column == 1) {
            if (get_field("C1") == ' ') {
                C1 = spieler;
                return;
            }
        }
        else if (column == 2) {
            if (get_field("C2") == ' ') {
                C2 = spieler;
                return;
            }
        }
        else if (column == 3) {
            if (get_field("C3") == ' ') {
                C3 = spieler;
                return;
            }
        }
    }
}

bool Feld::did_somebody_win() {
    if ((A1 == 'X') && (A2 == 'X') && (A3 == 'X')) {
        return true;
    }
    if ((A1 == 'X') && (B1 == 'X') && (C1 == 'X')) {
        return true;
    }
    if ((A1 == 'X') && (B2 == 'X') && (C3 == 'X')) {
        return true;
    }
    if ((A2 == 'X') && (B2 == 'X') && (C2 == 'X')) {
        return true;
    }
    if ((A3 == 'X') && (B2 == 'X') && (C1 == 'X')) {
        return true;
    }
    if ((A3 == 'X') && (B3 == 'X') && (C3 == 'X')) {
        return true;
    }
    if ((B1 == 'X') && (B2 == 'X') && (B3 == 'X')) {
        return true;
    }
    if ((C1 == 'X') && (C2 == 'X') && (C3 == 'X')) {
        return true;
    }
    if ((A1 == 'O') && (A2 == 'O') && (A3 == 'O')) {
        return true;
    }
    if ((A1 == 'O') && (B1 == 'O') && (C1 == 'O')) {
        return true;
    }
    if ((A1 == 'O') && (B2 == 'O') && (C3 == 'O')) {
        return true;
    }
    if ((A2 == 'O') && (B2 == 'O') && (C2 == 'O')) {
        return true;
    }
    if ((A3 == 'O') && (B2 == 'O') && (C1 == 'O')) {
        return true;
    }
    if ((A3 == 'O') && (B3 == 'O') && (C3 == 'O')) {
        return true;
    }
    if ((B1 == 'O') && (B2 == 'O') && (B3 == 'O')) {
        return true;
    }
    if ((C1 == 'O') && (C2 == 'O') && (C3 == 'O')) {
        return true;
    }
    return false;
}

bool Feld::is_full() {
    if (A1 != ' ') {
        if (A2 != ' ') {
            if (A3 != ' ') {
                if (B1 != ' ') {
                    if (B2 != ' ') {
                        if (B3 != ' ') {
                            if (C1 != ' ') {
                                if (C2 != ' ') {
                                    if (C3 != ' ') {
                                        return true;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return false;
}

void Feld::clear() {
    A1 = ' ';
    A2 = ' ';
    A3 = ' ';
    B1 = ' ';
    B2 = ' ';
    B3 = ' ';
    C1 = ' ';
    C2 = ' ';
    C3 = ' ';
}
