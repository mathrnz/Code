/*
Ecrire, dans un style impératif pur, un programme qui demande à l’utilisateur son nom et son 
âge et les affiche sur la sortie standard. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void printUserInfo(std::string name, unsigned int age) {
    std::cout << "Vous vous appelez " << name << " et vous avez " << age << " ans" << std::endl;
}

int main() {
    std::string name;
    ui::askUser(name, "Quel est votre nom ?");
    
    unsigned int age;
    ui::askUser(age, "Quel est votre âge ?");

    printUserInfo(name, age);

    return EXIT_SUCCESS;
}