#ifndef _EX4_HPP_
#define _EX4_HPP_
#include <string>

namespace ex4 {
    void askUser(std::string thing, unsigned int& a); //Demande à l'utilisateur, passage par référence (int)
    bool biOrNot(int d); //Vérifie si l'année est bissextile
    void valid(unsigned int j,unsigned int m,unsigned int a); //Vérifie si la date est valide
    int prog();
}

#endif