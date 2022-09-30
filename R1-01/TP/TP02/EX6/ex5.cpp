#include "ex5.hpp"
#include <iostream>

void ex5::askUser(std::string things, double& a, char& b, double& c) {
    std::cout << things << " ?> ";
    std::cin >> a >> b >> c;
}

double ex5::calcul(double a, char b, double c) {
    switch (b) {
        case '+':
            return a + c;
            break;

        case '-':
            return a - c;
            break;

        case '/':
            return a / c;
            break;

        case '*':
            return a * c;
            break;

        default:
            std::cout << "Opération arithmétique inconnue" << std::endl;
            break;
    }
    return 0;
}

int ex5::prog() {
    char operation;
    double nb1, nb2;
    ex5::askUser("Opération", nb1, operation, nb2);    
    std::cout << ex5::calcul(nb1, operation, nb2) << std::endl;

    return 0;
}