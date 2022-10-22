/*
Écrivez une fonction qui renvoie la moyenne des éléments du tableau comme un double.
13, 10, 2, 14 → 9.75
*/

#include <iostream>

double moy_Tab(const int tab[], size_t n) { //Fais la moyenne des nombres d'un tableau
    double somme=0;
    for(size_t i=0; i<n; i++)
        somme+=tab[i];

    return somme/n;
}

int main() {
    int tab[]={1,2,3};
    std::cout << moy_Tab(tab, 3) << std::endl;

    return EXIT_SUCCESS;
}