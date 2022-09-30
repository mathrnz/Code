#include <iostream>

void askUser(std::string thing, unsigned int& a) {
    std::cout << thing << " ?> ";
    std::cin >> a;
}

bool bissextile(unsigned int an) {
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