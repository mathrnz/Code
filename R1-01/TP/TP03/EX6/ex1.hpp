#ifndef _EX1_HPP_
#define _EX1_HPP_
#include <string>

namespace exo1 {
    void askUser(std::string thing, int& a); //Demande à l'utilisateur, passage par référence (int)
    std::string posNegNul(int n); //Retourne si le nombre est nul, positif ou négatif
    int prog();
}

#endif