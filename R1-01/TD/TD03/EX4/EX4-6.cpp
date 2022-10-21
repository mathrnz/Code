#include <iostream>
#include <cmath>

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
        askUser(note, "Saisir une note");
        askUser(coeff, "Saisir un coeff");

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
    askUser(nbnote, "Combien de notes souhaitez vous saisir");

    hellGate(nbnote);

    return 0;
}