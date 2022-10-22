#ifndef _EX5_HPP_
#define _EX5_HPP_
#include <string>

namespace ex5 {
    void askUser(std::string things, double& a, char& b, double& c); //Demande à l'utilisateur, passage par référence (int)
    double calcul(double a, char b, double c); //Identifie l'opération à effecter à partir d'un char et l'effectue
    int prog();

}


#endif