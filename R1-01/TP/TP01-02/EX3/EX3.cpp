/*
Implatation pratique du TD01
Écrire directement le programme dans le style structuré (ce qui correspond à la question 6 de l'énoncé)
*/

#include <iostream>
#include <string>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void magic(int& nb1, int& nb2) { //Échange nb1 et nb2, passage par référence
    nb1 = nb1 + nb2;
    nb2 = nb1 - nb2;
    nb1 = nb1 - nb2;
}

void printresults(int& nb1, int& nb2) { //Affiche nb1 et nb2
    std::cout << "Magie, maintenant :" << std::endl;
    std::cout << "n1=" << nb1 << std::endl;
    std::cout << "n2=" << nb2 << std::endl;
}

int main() {
    int n1,n2;
    ui::askUser(n1, "N1");
    ui::askUser(n2, "N2");

    magic(n1, n2);

    printresults(n1, n2);

    return EXIT_SUCCESS;
}
