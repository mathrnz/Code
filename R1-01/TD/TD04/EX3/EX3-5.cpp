/*
Écrivez une fonction qui supprime le premier élément du tableau.
13, 10, 2, 14 → 10, 2, 14
*/

#include <iostream>

int popFront(int tab[], size_t& n) { //retire la première case du tableau
    for(size_t i=1; i<n; i++) //décale tout le tableau de 1
        tab[i-1]=tab[i];
    return tab[--n]; //réduit la taille du tableau de 1
}
