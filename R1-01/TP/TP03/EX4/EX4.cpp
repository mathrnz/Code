/*
Implémentation prarique du TD02
Écrire directement le programme dans le style structuré en deux étapes :
faire une fonction qui dit si une année est bissextile ou non (fonction qui reçoit le numéro de l'année et qui renvoie un booléen) ; 
appeler cette fonction depuis le main() pour afficher son résultat ; tester tous les cas cités en exemple dans l'énoncé du TD ;
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool bissextile(unsigned int an) { //Vérifie si l'année est bissextile
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
    ui::askUser(année, "Année");
    
    std::cout << "L'année " << ((bissextile(année))?"est ":"n'est pas ") << "bissextile" << std::endl;

    return EXIT_SUCCESS;
}