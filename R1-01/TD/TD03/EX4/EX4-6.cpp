/*
Écrire un programme qui demande à un enseignant combien il a de notes, calcule et affiche au 
fur et à mesure de la saisie, la moyenne, la plus petite note, la plus grande note et la variance. 
 
Complément d'information : 
La variance, notée v, est un estimateur permettant de savoir comment sont réparties les 𝑝 
notes 𝑛𝑖 autour de la moyenne 𝑚. Elle est calculée par la formule suivante :  
 
𝑣 =1
𝑝×∑(𝑛𝑖 −𝑚)2 =1
𝑝×((𝑛1 −𝑚)2 +(𝑛2 −𝑚)2 +⋯+(𝑛𝑝 −𝑚)2)
𝑝
𝑖=1
 
 
Aide : essayez de développer la formule de la variance à l’aide de l’identité remarquable : 
(𝑎−𝑏)2 =𝑎2 +𝑏2 −2𝑎𝑏.
*/

#include <iostream>
#include <cmath>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

double variance(double note, double moy) { //Calcule la variance
    return std::pow((note - moy), 2);
}

void moyPond(double& moy, double& ctotal, double& div, double n, double c) {  //Moyenne pondérée
        ctotal += n*c; //total corrigé
        div += c; //Diviseur
        moy = ctotal/div;

}

void LSG(double& min, double note) { //Minimum
    if (min > note) 
        min = note;
}

void MSG(double& max, double note) { //Maximum
    if (max < note)
        max = note;
}

void hellGate(unsigned int nb) { //Magie
    double note, coeff;
    double moyenne, ctotal=0, div=0;
    double min = 20;
    double max = 0;
    double v = 0;

    for (int i=0; i < nb; i++) {
        ui::askUser(note, "Saisir une note");
        ui::askUser(coeff, "Saisir un coeff");

        moyPond(moyenne, ctotal, div, note, coeff);
        LSG(min, note);
        MSG(max, note);
        v += variance(note, moyenne);

        std::cout << "La moyenne est de " << moyenne << std::endl
        << "La plus petite note est " << min << std::endl
        << "La plus grande note est " << max << std::endl
        << "La variance est " << v << std::endl;
    }

}

int main() {
    unsigned int nbnote;
    ui::askUser(nbnote, "Combien de notes souhaitez vous saisir");

    hellGate(nbnote);

    return 0;
}