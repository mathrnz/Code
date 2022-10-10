#include <iostream>

void printTab(const int tab[], size_t n) { //Attention, cet algo nécessite deux valeurs ! (risque underflow)
    for (int i=0; i<n-1; i++)
        std::cout << tab[i] << ",";
    std::cout << tab[n-1] << "." << std::endl;
}

int main() {
    int tab[] = {1,2,3};
    printTab(tab, 3);

    return EXIT_SUCCESS;
}