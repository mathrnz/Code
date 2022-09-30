#include <iostream>

int main() {
    std::cout << "Nom ?> ";
    std::string nom;
    std::cin >> nom;
    std::cout << "Age ?> ";
    unsigned int age;
    std::cin >> age;
    std::cout << "Vous vous appellez : " << nom << " et vous avez " << age << " ans." << std::endl;
}