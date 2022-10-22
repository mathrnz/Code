#ifndef _EX42_HPP_
#define _EX42_HPP_
#include <string>

namespace ex42 {
    void askUser(std::string thing, unsigned int& a); //Demande à l'utilisateur, passage par référence (int)
    bool bissextile(unsigned int an); //Vérifie si l'année est bissextile
    int prog();
}

#endif