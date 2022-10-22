/*
Écrire un programme qui demande à l'utilisateur combien de notes il veut saisir, les lit et 
affiche à la fin de son exécution la plus petite valeur. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

void LSG(double& min) { //Note la plus basse
    double note;
    ui::askUser(note, "Saisir une note");
    if (min > note)
        min = note;
}

int main() {
    unsigned int nbnotes;
    ui::askUser(nbnotes, "Combien de notes souhaitez vous saisir ?");

    double min = 20;
    for ( int i=0; i < nbnotes; i++ ) {
        LSG(min);
    }
    std::cout << "La note la plus basse est : " << min << std::endl;

    return 0;
}