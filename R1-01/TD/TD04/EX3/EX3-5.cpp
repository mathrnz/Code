#include <iostream>

int popFront(int tab[], size_t& n) {
    for(size_t i=1; i<n; i++)
        tab[i-1]=tab[i];
    return tab[--n];
}

int main() {

    return EXIT_SUCCESS;
}