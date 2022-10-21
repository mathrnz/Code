#ifndef _EX2_HPP_
#define _EX2_HPP_
#include <string>

namespace exo2 {
    void askUser(std::string thing, int& a); //Demande à l'utilisateur, passage par référence (int)
    bool isInRange(int a, int b, int c); //Vérifie si c est compris en a et b ou b et a
    int prog();
}

#endif