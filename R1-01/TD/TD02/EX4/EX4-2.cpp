/*
Ecrire un programme qui demande à l’utilisateur une date et indique si cette date est valide. Dans cet 
exercice on ne considèrera que des dates du calendrier Grégorien. Pour rappel, celui-ci ne comporte pas 
d’année 0 et commence à l’année 1. Adopté en France en décembre 1582 le calendrier Grégorien est le 
calendrier que vous utilisez tous les jours, autant dire que ça date... 
Exemple : le 31/04/2020 n’est pas une date valide contrairement au 31/01/1910
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool biOrNot(int d) { //Teste si une année est bissextile ou pas
    
    if (d%400 == 0)
        return true; //L'année est bissextile
    else if (d%100 == 0)
        return false; //L'année n'est pas bissextile
    else if (d%4 == 0)
        return true;
    else 
        return false;
}

bool valid(unsigned int j, unsigned int m, unsigned int a) { //Teste la validité d'une année
    unsigned int nbjours=0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 10 || m == 12) //Mois à 31 jours
        nbjours = 31;
    else if (m == 4 || m == 6 || m == 9 || m == 11) //Mois à 30 jours
        nbjours = 30;
    else if (m == 2 && biOrNot(a)) //Février bissextile
        nbjours = 29;
    else if (m == 2) //Février non bissextile
        nbjours = 28;

    if (j > nbjours)
        return false;
    else 
        return true;
}

int main() {
    unsigned int jour, mois, année;
    ui::askUser(jour, "Jour");
    ui::askUser(mois, "Mois");
    ui::askUser(année, "Année");

    std::cout << "La date est " << ((valid(jour, mois, année))?"valide":"invalide") << std::endl;

    return EXIT_SUCCESS;
}