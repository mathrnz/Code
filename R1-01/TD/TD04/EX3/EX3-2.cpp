/*
Écrivez une fonction qui renvoie le plus petit entier du tableau.
ex : 13, 10, 2, 14 → 2
*/

#include <iostream>

int getMin(const int tab[], size_t n) { //Récupère la plus petite valeur d'un tableau
    int min=tab[0];
    for(size_t i=1; i<n; i++)
        if(tab[i]<min)
            min=tab[i];

    return min;
}

int main() {
    int tab[]={3,5,1};
    std::cout << getMin(tab,3) << std::endl;

    return EXIT_SUCCESS;
}