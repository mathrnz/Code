/*
1) Écrire un programme qui demande à l'utilisateur combien de notes il veut saisir, les lit et 
calcule le pourcentage de notes supérieures à dix. 

2) Compléter le programme précédent pour qu’après avoir lu les notes, celui-ci affiche leur 
moyenne.

3) Est-il possible d’afficher le pourcentage de notes supérieures à la moyenne des notes ?
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void moyIt(double& moy, int i) { //Moyenne avec i itérations
    double total;
    for (int j=1; j <= i; j++) {
        double note;
        ui::askUser(note, "Saisir une note> ");
        total += note;
    }
    moy= total/i;
}

void moyItPercent(double& moy, double& p, int i) { //Moyenne avec i itérations, et pourcent de notes au dessu de la moyenne
    moyIt(moy, i);
    std::cout << "La moyenne est de " << moy << std::endl;

    double nbsupmoy = 0;
    for (int j=1; j <= i; j++) {
        double note;
        ui::askUser(note, "Resaisir une même note");
        
        if (note > moy) //Compteur de notes au dessus de la moyenne
            nbsupmoy++;

        p = (nbsupmoy/i)*100; //Pourcentage de notes au dessus de la moyenne
    }
}

void percent10(double& p, int i) { //Pourcentage de notes au dessus de 10
    double nbsup10 = 0;
    for (int j=1; j <= i; j++) {
        double note;
        ui::askUser(note, "Saisir une note");
        
        if (note > 10)
            nbsup10++;

        p = (nbsup10/i)*100;
    }
}


int main() {
    int nbnote;
    ui::askUser(nbnote, "Nombre de notes");

    /*
    double percent;
    percent10(percent, nbnote);

    std::cout << "Il y a " << percent<< "% de notes au dessus de 10" << std::endl;

    double moyenne;
    moyIt(moyenne, nbnote);

    std::cout << "La moyenne est de : " << moyenne << std::endl;
    */

    double moyenne;
    double percentmoy;
    moyItPercent(moyenne, percentmoy, nbnote);

    std::cout << "Il y a " << percentmoy << "% de notes au dessus de la moyenne" << std::endl;

    return EXIT_SUCCESS;
}