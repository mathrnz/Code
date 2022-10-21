#include <iostream>

void askUser(std::string thing, unsigned int& a) { //Demande à l'utilisateur, passage par référence (unsigned int)
    std::cout << thing << " ?> ";
    std::cin >> a;
}

bool bissextile(unsigned int an) { //Vérifie si l'année est bissextile
    if (an%400 == 0)
        return true;
    else if (an%100 == 0)
        return false;
    else if (an%4 == 0)
        return true;
    return false;
}

int main() {
    unsigned int année;
    askUser("Année",année);
    
    if (bissextile(année))
        std::cout << "bissextile" << std::endl;
    else
        std::cout << "non bissextile" << std::endl;
}