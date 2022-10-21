#include "EX4.hpp"

void magic(int& nb1, int& nb2) { //Échange nb1 et nb2, passage par référence
    nb1 = nb1 + nb2;
    nb2 = nb1 - nb2;
    nb1 = nb1 - nb2;
}