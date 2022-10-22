/*
Ecrire un programme (et ses sous-programmes) qui demande à l’utilisateur trois valeurs (du 
type de votre choix) et réalise une permutation circulaire (sens horaire). Comme 
précédemment, ce programme doit utiliser une approche qui puisse être mise en œuvre aussi 
bien avec des entiers, des réels, des caractères que et des booléens. Vous proposerez deux 
solutions : une qui n’utilise pas le sous-programme de la question 4.1, et une qui l’utilise.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void permute(char& _c1, char& _c2) { //Échange deux variables
    char ctemp;
    _c1 = ctemp;
    _c1 = _c2;
    _c2 = ctemp;
}

int main() {
    char c1, c2;
    ui::askUser(c1, "c1?");
    ui::askUser(c2, "c2?");

    permute(c1, c2);

    std::cout << "c1=" << c1 << std::endl;
    std::cout << "c2=" << c2 << std::endl;

    return EXIT_SUCCESS;
}