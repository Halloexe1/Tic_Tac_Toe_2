#include "computer.hpp"

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
char x_is_it_a3{' '};
char x_is_it_c1{' '};
uniform_int_distribution<int> hwo{1,2};
random_device device;

Computer::Computer(bool moeglich,Feld feld):field_(feld),a1(' '),a2(' '),a3(' '),b1(' '),b2(' '),b3(' '),c1(' '),c2(' '),c3(' '),unmoeglich(!moeglich)
{
    if (!unmoeglich) {
        if (hwo(device) != 1) {
            x_is_it_a3 = 'N';
        }
        else {
            x_is_it_c1 = 'N';
        }
    }
}

str Computer::get_best_zug(Feld feld)
{
    field_ = feld;
    a1 = field_.get_field("A1");
    a2 = field_.get_field("A2");
    a3 = field_.get_field("A3");
    b1 = field_.get_field("B1");
    b2 = field_.get_field("B2");
    b3 = field_.get_field("B3");
    c1 = field_.get_field("C1");
    c2 = field_.get_field("C2");
    c3 = field_.get_field("C3");
    if (a1 == 'O') {
        if (a2 == 'O') {
            if (a3 == ' ') {
                return "3A";
            }
        }
        if (b2 == 'O') {
            if (c3 == ' ') {
                return "3C";
            }
        }
        if (b1 == 'O') {
            if (c1 == ' ') {
                return "1C";
            }
        }
        if (c1 == 'O') {
            if (b1 == ' ') {
                return "1B";
            }
        }
        if (c3 == 'O') {
            if (b2 == ' ') {
                return "2B";
            }
        }
        if (a3 == 'O') {
            if (a2 == ' ') {
                return "2A";
            }
        }
    }
    if (a2 == 'O') {
        if (a3 == 'O') {
            if (a1 == ' ') {
                return "1A";
            }
        }
        if (b2 == 'O') {
            if (c2 == ' ') {
                return "2C";
            }
        }
        if (c2 == 'O') {
            if (b2 == ' ') {
                return "2B";
            }
        }
    }
    if (a3 == 'O') {
        if (b2 == 'O') {
            if (c1 == ' ') {
                return "1C";
            }
        }
        if (c1 == 'O') {
            if (b2 == ' ') {
                return "2B";
            }
        }
        if (b3 == 'O') {
            if (c3 == ' ') {
                return "3C";
            }
        }
        if (c3 == 'O') {
            if (b3 == ' ') {
                return "3B";
            }
        }
    }
    if (b1 == 'O') {
        if (c1 == 'O') {
            if (a1 == ' ') {
                return "1A";
            }
        }
        if (b2 == 'O') {
            if (b3 == ' ') {
                return "3B";
            }
        }
        if (b3 == 'O') {
            if (b2 == ' ') {
                return "2B";
            }
        }
    }
    if (b2 == 'O') {
        if (b3 == 'O') {
            if (b1 == ' ') {
                return "1B";
            }
        }
        if (c1 == 'O') {
            if (a3 == ' ') {
                return "3A";
            }
        }
        if (c2 == 'O') {
            if (a2 == ' ') {
                return "2A";
            }
        }
        if (c3 == 'O') {
            if (a1 == ' ') {
                return "1A";
            }
        }
    }
    if (b3 == 'O') {
        if (c3 == 'O') {
            if (a3 == ' ') {
                return "3A";
            }
        }
    }
    if (c1 == 'O') {
        if (c2 == 'O') {
            if (c3 == ' ') {
                return "3C";
            }
        }
        if (c3 == 'O') {
            if (c2 == ' ') {
                return "2C";
            }
        }
    }
    if (c2 == 'O') {
        if (c3 == 'O') {
            if (c1 == ' ') {
                return "1C";
            }
        }
    }
    if (a1 == 'X') {
        if (a2 == 'X') {
            if (a3 == ' ') {
                return "3A";
            }
        }
        if (b2 == 'X') {
            if (c3 == ' ') {
                return "3C";
            }
        }
        if (b1 == 'X') {
            if (c1 == ' ') {
                return "1C";
            }
        }
        if (c1 == 'X') {
            if (b1 == ' ') {
                return "1B";
            }
        }
        if (c3 == 'X') {
            if (b2 == ' ') {
                return "2B";
            }
        }
        if (a3 == 'X') {
            if (a2 == ' ') {
                return "2A";
            }
        }
    }
    if (a2 == 'X') {
        if (a3 == 'X') {
            if (a1 == ' ') {
                return "1A";
            }
        }
        if (b2 == 'X') {
            if (c2 == ' ') {
                return "2C";
            }
        }
        if (c2 == 'X') {
            if (b2 == ' ') {
                return "2B";
            }
        }
    }
    if (a3 == 'X') {
        if (b2 == 'X') {
            if (c1 == ' ') {
                return "1C";
            }
        }
        if (c1 == 'X') {
            if (b2 == ' ') {
                return "2B";
            }
        }
        if (b3 == 'X') {
            if (c3 == ' ') {
                return "3C";
            }
        }
        if (c3 == 'X') {
            if (b3 == ' ') {
                return "3B";
            }
        }
    }
    if (b1 == 'X') {
        if (c1 == 'X') {
            if (a1 == ' ') {
                return "1A";
            }
        }
        if (b2 == 'X') {
            if (b3 == ' ') {
                return "3B";
            }
        }
        if (b3 == 'X') {
            if (b2 == ' ') {
                return "2B";
            }
        }
    }
    if (b2 == 'X') {
        if (b3 == 'X') {
            if (b1 == ' ') {
                return "1B";
            }
        }
        if (c1 == 'X') {
            if (a3 == ' ') {
                return "3A";
            }
        }
        if (c2 == 'X') {
            if (a2 == ' ') {
                return "2A";
            }
        }
        if (c3 == 'X') {
            if (a1 == ' ') {
                return "1A";
            }
        }
    }
    if (b3 == 'X') {
        if (c3 == 'X') {
            if (a3 == x_is_it_a3) {
                return "3A";
            }
        }
    }
    if (c1 == 'X') {
        if (c2 == 'X') {
            if (c3 == ' ') {
                return "3C";
            }
        }
        if (c3 == 'X') {
            if (c2 == ' ') {
                return "2C";
            }
        }
    }
    if (c2 == 'X') {
        if (c3 == 'X') {
            if (c1 == x_is_it_c1) {
                return "1C";
            }
        }
    }
    if (a1 == 'X') {
        if (c3 == 'X') {
            if (a3 == ' ') {
                if (c1 == ' ') {
                    return "2A";
                }
            }
        }
    }
    if (a3 == 'X') {
        if (c1 == 'X') {
            if (a1 == ' ') {
                if (c3 == ' ') {
                    return "2C";
                }
            }
        }
    }
    if (b2 == ' ') {
        return "2B";
    }
    else if (a1 == ' ') {
        return "1A";
    }
    else if (a3 == ' ') {
        return "3A";
    }
    else if (c1 == ' ') {
        return "1C";
    }
    else if (c3 == ' ') {
        return "3C";
    }
    else if (a2 == ' ') {
        return "2A";
    }
    else if (b1 == ' ') {
        return "1B";
    }
    else if (b3 == ' ') {
        return "3B";
    }
    else {
        return "2C";
    }
}

void Computer::new_time()
{
    x_is_it_a3 = ' ';
    x_is_it_c1 = ' ';
    if (!unmoeglich) {
        if (hwo(device) != 1) {
            x_is_it_a3 = 'N';
        }
        else {
            x_is_it_c1 = 'N';
        }
    }
}
