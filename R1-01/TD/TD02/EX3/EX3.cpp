/*
Ecrire un programme qui demande à un utilisateur de saisir son âge et affiche si celui-ci est 
mineur ou majeur. 
*/
#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool minorMajor(int a) { //Test mineur ou majeur (vrai si majeur)
    if (a >= 18)
        return true;
    else
        return false;
}

int main() {
    unsigned int age;
    ui::askUser(age, "Age?");
    
    std::cout << "Vous êtes " << ((minorMajor(age)?"majeur":"mineur")) << std::endl;

    return EXIT_SUCCESS;
}