#include <iostream>

void drawRectangle(unsigned int l, unsigned int L) {
    	for (int j=1; j <= l; j++) {
            for (int i=1; i <= L; i++) {
                std::cout << "*";
            }
		std::cout << std::endl;
	}
}

void drawTriangle(unsigned int L) {
    for (int j=1; j <= L; j++) { //longueur
		std::cout << "*";

		for (int i=1; i < j; i++) { //Largeur, augemente à chaque tour de la première boucle
			std::cout << "*";
		}

		std::cout << std::endl;
	}
}

void askUser(unsigned int& n, std::string thing) {
    std::cout << thing << "> ";
    std::cin >> n;
}

void menu(unsigned int& c) {
        std::cout << "Choississez une option :" << std::endl
        << "1. Rectangle" << std::endl
        << "2. Triangle" << std::endl
        << "3. Quitter" << std::endl;
        std::cin >> c;

        switch(c) {
            case 1:
                unsigned int l, L;
                askUser(l, "Longeur ?");
                askUser(L, "Largeur");
                drawRectangle(l, L);
                break;
            
            case 2:
                unsigned int h;
                askUser(h, "Taille de triangle");
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