#include "ex4.hpp"
#include <iostream>

void ex4::askUser(std::string thing, unsigned int& a) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << thing << "?> ";
    std::cin >> a;
}

bool ex4::biOrNot(int d) {
    
    if (d%400 == 0)
        return true; //L'année est bissextile
    else if (d%100 == 0)
        return false; //L'année n'est pas bissextile
    else if (d%4 == 0)
        return true;
    else 
        return false;
}

void ex4::valid(unsigned int j,unsigned int m,unsigned int a) { //Vérifie si la date est valide
    unsigned int nbjours=0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 10 || m == 12) //Mois à 31 jours
        nbjours = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) //Mois à 30 jours
        nbjours = 30;
    else if (m == 2 && ex4::biOrNot(a)) //Février bissextile
        nbjours = 29;
    else if (m == 2) //Février non bissextile
        nbjours = 28;

    if (j > nbjours)
        std::cout << "Date invalide !" << std::endl;
    else 
        std::cout << "Date valide !" << std::endl;
}

int ex4::prog() {
    unsigned int jour, mois, année;
    ex4::askUser("Jour", jour);
    ex4::askUser("Mois", mois);
    ex4::askUser("Année", année);

    ex4::valid(jour, mois, année);

    return 0;
}