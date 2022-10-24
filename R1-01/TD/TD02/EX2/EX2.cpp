/*
Écrire un programme dans lequel on lit un nombre et un intervalle et qui affiche si le nombre 
est compris entre les deux bornes, bornes incluses.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool checkbornes(int b1, int b2, int nb) { //Vérifie si nb est compris entre b1 et b2
    if ((nb >= b1 && nb <= b2) || (nb >= b2 && nb <= b1))
        return true;

    return false;
}

int main() {
    int borne1, borne2, nombre;
    ui::askUser(borne1, "Borne1");
    ui::askUser(borne2, "Borne2");
    ui::askUser(nombre, "Nombre");
    
    std::cout << "Le nombre " << ((checkbornes(borne1, borne2, nombre))?"est":"n'est pas") << " compris dans les bornes" << std::endl;

    return EXIT_SUCCESS;
}