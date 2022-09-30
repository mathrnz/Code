#include <iostream>
#include "ex2.hpp"

void exo2::askUser(std::string thing, int& a) {
    std::cout << thing << " ?> ";
    std::cin >> a;
}

bool exo2::isInRange(int a, int b, int c) {
    if ( ((c >= a) && (c <= b)) || ((c >= b) && (c <= a)))
        return true;
    else
        return false;
}

int exo2::prog() {
    int a, b, nb;
    exo2::askUser("Borne 1", a);
    exo2::askUser("Borne 2", b);
    exo2::askUser("Nbombre", nb);

    if(exo2::isInRange(a, b, nb))
        std::cout << "Compris entre les deux bornes" << std::endl;
    else
        std::cout << "n'est pas compris entre les deux bornes" << std::endl;

    return 0;
}

