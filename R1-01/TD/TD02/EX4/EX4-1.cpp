//Teste si l'année est bissextile
#include <iostream>

void askUser(std::string thing, unsigned int& a) { //Demande à l'utilisateur
    std::cout << thing << "?> ";
    std::cin >> a;
}

void biOrNot(const int d) {
    
    if (d%400 == 0)
        std::cout << "L'année est bissextile." << std::endl;
    else if (d%100 == 0)
        std::cout << "L'année n'est pas bissextile." << std::endl;
    else if (d%4 == 0)
        std::cout << "L'année est bissextile." << std::endl;
    else 
        std::cout << "L'année n'est pas bissextile." << std::endl;
}

int main() {
    unsigned int année;
    askUser("Année", année);
    biOrNot(année);
}