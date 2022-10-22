/*
Implantez ce qui a été vu à l'exercice 4 du TD au sujet de la structure « String ». 
Produisez un « main() » qui permet d'utiliser et tester le bon fonctionnement de toutes les fonctions de manipulation de chaîne.
*/

#include <iostream>
#include "String.hpp"

int main() {
    String stringA;
    const char strA[] = "contenu!";
    CreateString(stringA, 4); //Créé un string de 4 emplacements
    AssignString(stringA, strA); //Assigne strA[] à string, l'agrandissant dans le procédé
    std::cout << "const char strA[]=" << strA << std::endl << "String stringA="; DisplayString(stringA); std::cout << std::endl;
    
    String stringB;
    const char strb[] = "suite contenu!";
    CreateString(stringB, 120); //String de 120 emplacements
    AssignString(stringB, strb); //Assigne strb[], plaçant \0 à la fin
    ConcatenateString(stringA, stringB);
    std::cout << "String stringB="; DisplayString(stringB); std::cout << std::endl;
    std::cout << "stringA+stringB="; DisplayString(stringA); std::cout << std::endl;


   return EXIT_SUCCESS;
}