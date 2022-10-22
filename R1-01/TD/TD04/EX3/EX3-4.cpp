/*
Écrivez une fonction qui supprime le dernier élément du tableau.
13, 10, 2, 14 → 13, 10, 2
*/

#include <iostream>

int popBack(int tab[], size_t& n) { //Retire la dernière case d'un tableau
    return tab[--n];
}
