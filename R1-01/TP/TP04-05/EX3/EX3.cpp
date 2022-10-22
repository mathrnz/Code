/*
Implémentez l'exercice 3.

Vous devez créer un programme principal qui implémente un menu permettant de choisir la forme à dessiner :

rectangle
triangle
cercle 

Cela vous impose de structurer correctement votre programme (un sous-programme par forme à dessiner).
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void drawRectangle(unsigned int l, unsigned int L) { //Dessine un rectangle de l sur L dans la sortie standard
    	for (int j=1; j <= l; j++) {
            for (int i=1; i <= L; i++) {
                std::cout << "*";
            }
		std::cout << std::endl;
	}
}

void drawTriangle(unsigned int L) { //Dessine un triangle L sur la sortie standard
    for (int j=1; j <= L; j++) { //longueur
		std::cout << "*";

		for (int i=1; i < j; i++) { //Largeur, augemente à chaque tour de la première boucle
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}

void menu(unsigned int& c) { //Menu de sélection
        std::cout << "Choississez une option :" << std::endl
        << "1. Rectangle" << std::endl
        << "2. Triangle" << std::endl
        << "3. Quitter" << std::endl;
        std::cin >> c;

        switch(c) {
            case 1:
                unsigned int l, L;
                ui::askUser(l, "Longeur ?");
                ui::askUser(L, "Largeur");
                drawRectangle(l, L);
                break;
            
            case 2:
                unsigned int h;
                ui::askUser(h, "Taille de triangle");
                drawTriangle(h);
                break;
            
            case 3:
                break;

            default:
                std::cout << "Erreur: (" << c << ") Choix invalide" << std::endl;
                break;

        }
}

int main() {
    unsigned int choice;
    
    do {
        menu(choice);
    } while (choice != 3);


    return 0;
}