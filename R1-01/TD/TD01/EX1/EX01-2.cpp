/*
Réécrire le programme précédent en utilisant l’approche structurée comme vu en cours. A vous 
d’identifier les sous-programmes nécessaires et le programme principal correspondant. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void PrintTime(unsigned int h, unsigned int m, unsigned int s) {
    std::cout << "Il est " << h << ":" << m << ":" << s << std::endl;
}

int main() {
    unsigned int hour, min, sec;
    ui::askUser(hour, "Saisir l'heure");
    ui::askUser(min, "Saisir les minutes");
    ui::askUser(sec, "Saisir les secondes");

    PrintTime(hour, min, sec);

    return EXIT_SUCCESS;
}