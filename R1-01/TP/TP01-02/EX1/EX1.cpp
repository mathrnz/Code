/*
Implatation pratique du TD01
Écrire directement le programme dans le style structuré.
*/

#include <iostream>
#include <string>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void printHour(int h, int m, int s) { //affiche l'heure
    std::cout << "Il est : " << h << ":" << m << ":" << s << std::endl;
}

int main() {
    int hour, minute, second;
    ui::askUser(hour, "Heure");
    ui::askUser(minute, "Minute");
    ui::askUser(second, "Secondes");

    printHour(hour, minute, second);

    return EXIT_SUCCESS;
}