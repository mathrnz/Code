//Demande le nom et l'age puis l'affiche (version structurée)
#include <iostream>

std::string askName() { //Demande le nom
    std::cout << "Nom ?> ";
    std::string nom;
    std::cin >> nom;
    return nom;
}

int askAge() { //Demande l'age
    std::cout << "Age ?> ";
    int age;
    std::cin >> age;
    return age;
}

void printInfo(std::string _name, int _age) { //Affiche le nom et l'age
    std::cout << "Vous vous appellez : " << _name << " et vous avez " << _age << " ans." << std::endl;
}

int main() {
    std::string name = askName();
    int age = askAge();
    printInfo(name, age);
    return 0;
}