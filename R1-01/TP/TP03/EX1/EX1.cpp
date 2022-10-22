/*
Implatation pratique du TD02
Écrire directement le programme dans le style structuré.
*/


#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;


std::string posNegNul(int n) { //Retourne si le nombre est nul, positif ou négatif
    if (n == 0)
        return "nul";
    if (n > 0)
        return "positif";
    if (n < 0)
        return "negatif";

    return NULL;
}

int main() {
    int nombre;
    ui::askUser(nombre, "Nombre");
    std::cout << posNegNul(nombre) << std::endl;

    return EXIT_SUCCESS;
}