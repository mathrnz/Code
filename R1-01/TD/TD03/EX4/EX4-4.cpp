/*
Améliorer le programme précédent pour que cette fois-ci il demande les notes et leur 
coefficient respectif et affiche la moyenne pondérée au fur et à mesure de la saisie.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void moyRealTime(unsigned int nb) { //Moyenne, affichage en temps réel
    double note, coeff, moyenne=0, ctotal=0, div=0; // ctotal -> total corrigé avec coeffs
    
    for (unsigned int i=1; i <= nb; i++) { //i commence à 0 pour éviter la division par 0 de ctotal
        ui::askUser(note, "Saisir une note");
        ui::askUser(coeff, "Saisir un coeff");
        
        ctotal += note*coeff; //total corrigé
        div += coeff; //Diviseur
        moyenne = ctotal/div;

        std::cout << "La moyenne est de " << moyenne << std::endl;
    }
}

int main() {
    unsigned int nbnote;
    ui::askUser(nbnote, "Combien de notes souhaitez vous saisir ?");

    moyRealTime(nbnote);

    return EXIT_SUCCESS;
}
