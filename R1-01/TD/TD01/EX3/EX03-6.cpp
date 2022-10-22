/*
Réécrire ce programme en utilisant les principes de programmation structurée vus en cours. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void magic(int& _n1,int& _n2) { //Tour de magie
    _n1 = _n1 + _n2;
    _n2 = _n1 - _n2;
    _n1 = _n1 - _n2;
}

void printNum(int _n1, int _n2) { //Affiche les variables
    std::cout << "Magie, maintenant" << std::endl;
    std::cout << "n1=" << _n1 << std::endl;
    std::cout << "n2=" << _n2 << std::endl;
}

int main() {
    int n1, n2;
    ui::askUser(n1, "N1?");
    ui::askUser(n2, "N2?");

    magic(n1, n2);
    printNum(n1, n2);

    return EXIT_SUCCESS;
}