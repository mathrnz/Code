#include <iostream>

std::string askName() {
    std::cout << "Nom ?> ";
    std::string nom;
    std::cin >> nom;
    return nom;
}

int askAge() {
    std::cout << "Age ?> ";
    int age;
    std::cin >> age;
    return age;
}

void printInfo(std::string _name, int _age) {
    std::cout << "Vous vous appellez : " << _name << " et vous avez " << _age << " ans." << std::endl;
}

int main() {
    std::string name = askName();
    int age = askAge();
    printInfo(name, age);
    return 0;
}