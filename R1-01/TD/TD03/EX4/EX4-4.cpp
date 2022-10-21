#include <iostream>

void askUser(double& n, std::string msg) { //Demande à l'utilisateur, passage par référence (double)
    std::cout << msg << "> ";
    std::cin >> n;
}

void askUser(int& n, std::string msg) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << msg << "> ";
    std::cin >> n;
}

void askUser(unsigned int& n, std::string msg) { //Demande à l'utilisateur, passage par référence (unsigned int)
    std::cout << msg << "> ";
    std::cin >> n;
}

void moyRealTime(unsigned int nb) { //Moyenne, affichage en temps réel
    double note, coeff, moyenne=0, ctotal=0, div=0; // ctotal -> total corrigé avec coeffs
    
    for (unsigned int i=1; i <= nb; i++) { //i commence à 0 pour éviter la division par 0 de ctotal
        askUser(note, "Saisir une note");
        askUser(coeff, "Saisir un coeff");
        
        ctotal += note*coeff; //total corrigé
        div += coeff; //Diviseur
        moyenne = ctotal/div;

        std::cout << "La moyenne est de " << moyenne << std::endl;
    }
}

int main() {
    unsigned int nbnote;
    askUser(nbnote, "Combien de notes souhaitez vous saisir ?");

    moyRealTime(nbnote);

    return 0;
}
