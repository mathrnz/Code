/*
Ecrire un programme dans lequel l’utilisateur saisi sa date de naissance (jour, mois et année) 
ainsi que la date du jour. Comme précédemment, celui-ci devra afficher à l’utilisateur s’il est 
mineur ou majeur.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool minorMajor(unsigned int jN, unsigned int mN, unsigned aN, unsigned int j, unsigned int m, unsigned int a) { //Test mineur ou majeur (vrai si majeur)
    if (a - aN >= 18) {
        if (m - mN > 0) {
            return true;
        } else if ((m - mN == 0) && (j - jN >= 0)) {
            return true;
        }
    }
    
    return false;
}

int main() {
    unsigned int jourN, moisN, annéeN;
    ui::askUser(jourN, "Jour de naissance");
    ui::askUser(moisN, "Mois de naissance");
    ui::askUser(annéeN, "Année de naissance");
    
    unsigned int jour, mois, année;
    ui::askUser(jour, "Jour d'aujourd'hui");
    ui::askUser(mois, "Mois d'aujourd'hui");
    ui::askUser(année, "Année d'aujourd'hui");

    std::cout << "Vous êtes " << ((minorMajor(jourN, moisN, annéeN, jour, mois, année))?"majeur":"mineur") << std::endl;

    return EXIT_SUCCESS;
}