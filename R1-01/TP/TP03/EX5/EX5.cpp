/*
Cet exercice supplémentaire ne correspond pas à une question du TD.

Utilisez l'instruction switch vue en cours pour créer une calculatrice simpliste réalisant une des opérations arithmétiques fondamentales en fonction du symbole (caractère) choisi par l'utilisateur :

    addition (caractère « + ») ;
    soustraction (caractère « - ») ;
    multiplication (caractère « * ») ;
    division (caractère « / »).

L'interaction avec l'utilisateur pourra prendre la forme suivante (en gris ce que le programme affiche, en blanc de que l'utilisateur saisit) :

Donnez un calcul à faire (sous la forme « valeur1 opération valeur2 » où opération fait partie de « + - * / ») :
12.34 * 2
Résultat : 24.68
*/

#include <iostream>

void askUser(std::string things, double& a, char& b, double& c) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << things << " ?> ";
    std::cin >> a >> b >> c;
}

double calcul(double a, char b, double c) { //Identifie l'opération à effecter à partir d'un char et l'effectue
    switch (b) {
        case '+':
            return a + c;
            break;

        case '-':
            return a - c;
            break;

        case '/':
            return a / c;
            break;

        case '*':
            return a * c;
            break;

        default:
            std::cout << "Opération arithmétique inconnue" << std::endl;
            break;
    }
    return 0;
}

int main() {
    char operation;
    double nb1, nb2;
    askUser("Opération", nb1, operation, nb2);
    double result=0;
    
    std::cout << calcul(nb1, operation, nb2) << std::endl;

    return EXIT_SUCCESS;
}