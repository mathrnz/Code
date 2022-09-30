#include "ex4-2.hpp"
#include <iostream>

void ex42::askUser(std::string thing, unsigned int& a) {
    std::cout << thing << " ?> ";
    std::cin >> a;
}

bool ex42::bissextile(unsigned int an) {
    if (an%400 == 0)
        return true;
    else if (an%100 == 0)
        return false;
    else if (an%4 == 0)
        return true;
    return false;
}

int ex42::prog() {
    unsigned int année;
    askUser("Année",année);
    
    if (ex42::bissextile(année))
        std::cout << "bissextile" << std::endl;
    else
        std::cout << "non bissextile" << std::endl;

    return 0;
}
