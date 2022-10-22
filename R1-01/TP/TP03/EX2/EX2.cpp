/*
Implatation pratique du TD02
Écrire directement le programme dans le style structuré.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool isInRange(int a, int b, int c) { //Vérifie si c est compris en a et b ou b et a
    if ( ((c >= a) && (c <= b)) || ((c >= b) && (c <= a)))
        return true;
    else
        return false;
}

int main() {
    int a, b, nb;
    ui::askUser(a,"Borne 1");
    ui::askUser(b, "Borne 2");
    ui::askUser(nb, "Nbombre");

    std::cout << "Le nombre " << ((isInRange(a, b, nb))?"est ":"n'est pas ") << "compris dans les bornes" << std::endl;

    return EXIT_SUCCESS;
}