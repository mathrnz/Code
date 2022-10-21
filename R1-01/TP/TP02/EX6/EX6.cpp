#include <iostream>
#include <stdlib.h>
#include "ex1.hpp"
#include "ex2.hpp"
#include "ex3.hpp"
#include "ex4.hpp"
#include "ex4-2.hpp"
#include "ex5.hpp"

void menu(std::string opt1, std::string opt2, std::string opt3, std::string opt4, std::string opt5, std::string opt6, unsigned int& c) { //menu de sélectibon
    std::cout << "1." << opt1 << std::endl
    << "2." << opt2 << std::endl
    << "3." << opt3 << std::endl
    << "4." << opt4 << std::endl
    << "42." << opt5 << std::endl
    << "5." << opt6 << std::endl
    << "0. Quitter" << std::endl;
    
    std::cout << "Choississez une option> ";
    std::cin >> c;

}

int main();

void lauch(unsigned int a) {
    std::cout << std::endl;

    switch (a) //Lance le programme correspondant à l'input
        {
        case 1:
            exo1::prog();
            break;

        case 2:
            exo2::prog();
            break;

        case 3:
            ex3::prog();
            break;

        case 4:
            ex4::prog();
            break;

        case 42:
            ex42::prog();
            break;

        case 5:
            ex5::prog();
            break;

        case 0:
            exit(0);
            break;

        default:
            std::cout << "Option inconnue" << std::endl;
            break;
        }
        
    std::cout << std::endl;
    main();
}

int main() {
    unsigned int choice;
    menu("Exo 1", "Exo 2", "Exo 3", "Exo 4", "Exo 4-2", "Exo 5", choice);

    lauch(choice);

    return 0;
}