#ifndef _EX3_HPP_
#define _EX3_HPP_
#include <string>

namespace ex3
{
    void askUser(std::string thing, int& a); //Demande à l'utilisateur, passage par référence (int)
    bool minMaj(unsigned int jn, unsigned int mn, unsigned int an, unsigned int j, unsigned int m, unsigned int a); //Vérifie si l'utilisateur est majeu ou mineur
    int prog();


} 


#endif