/*
Écrire un programme dans lequel on demande un nombre à l'utilisateur et affiche si celui-ci est 
positif, négatif ou nul 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

std::string testNum(int n) {
    if (n == 0)
        return "nul";
    else if (n > 0)
        return "positif";
    else
        return "négatif";
    
    return "NaN";
}

int main() {
    int n;
    ui::askUser(n, "Entrez un nombre");

    std::cout << "Le nombre est " << testNum(n) << std::endl;
    
    return EXIT_SUCCESS;
}