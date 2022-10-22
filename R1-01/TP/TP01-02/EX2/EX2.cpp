/*
Implatation pratique du TD01
Écrire directement le programme dans le style structuré.
*/

#include <iostream>
#include <string>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;


void printInfo(std::string n, int a) { //Affiche les variables n et a dans la sortie standard
    std::cout << "Vous vous appelez " << n << " et vous avez " << a << std::endl;
}

int main() {
    std::string name;
    ui::askUser(name, "Nom");

    int age;
    ui::askUser(age, "Age");

    printInfo(name, age);

    return EXIT_SUCCESS;
}
