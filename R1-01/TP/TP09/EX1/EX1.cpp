//Usage : ./executable <valeurs.txt

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

void printTab(int tab[], size_t size) { //Affiche les cases d'un tableau dans la sortie standard
    for(size_t i=0; i<size-1; ++i) {
        std::cout << tab[i] << ",";
    }
    std::cout << tab[size-1] << "." << std::endl;
}

int main() {
    size_t size;
    commonthings::userinput::askUser(size, "Taille");
    int *pst = nullptr;
    pst = new int[size];

    int n;
    for(size_t i=0; i<size; ++i) {
        std::cin >> n;
        pst[i] = n;
    }

    printTab(pst, size);
    delete[] pst;

    return EXIT_SUCCESS;
}