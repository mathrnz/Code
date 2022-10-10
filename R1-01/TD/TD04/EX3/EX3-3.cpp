#include <iostream>

double moy_Tab(const int tab[], size_t n) {
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