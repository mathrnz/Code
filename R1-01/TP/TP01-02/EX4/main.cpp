/*
Implanter le sous-programme permutant deux variables dans un fichier « .cpp » dédié à cela uniquement (pas de « main() »), 
déclarer la fonction correspondante dans le fichier « .hpp » correspondant. 
Utiliser cette fonction de permutation dans deux programmes différents, 
le premier s'occupe de deux variables uniquement (question 2 du TD), le deuxième de trois variables (question 3).
*/

#include <iostream>
#include <string>
#include "../../../includes/CommonThings/commonthings.hpp"
#include "EX4.hpp"

namespace ui = commonthings::userinput;

void printresults(int& nb1, int& nb2) { //Affiche nb1 et nb2
    std::cout << "Magie, maintenant :" << std::endl;
    std::cout << "n1=" << nb1 << std::endl;
    std::cout << "n2=" << nb2 << std::endl;
}

int main() {
    int n1,n2;
    ui::askUser(n1, "N1");
    ui::askUser(n2, "N2");
        
    magic(n1, n2);

    printresults(n1, n2);

    return EXIT_SUCCESS;
}