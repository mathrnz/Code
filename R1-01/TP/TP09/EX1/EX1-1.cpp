//Usage : ./executable <valeurs.txt

#include <iostream>

void printTab(double tab[], size_t size) {
    for(size_t i=0; i<size-1; ++i) {
        std::cout << tab[i] << ",";
    }
    std::cout << tab[size-1] << "." << std::endl;
}

double moy(const double tab[], size_t size) {
    double sum=0;
    for(size_t i=0; i<size; ++i) {
        sum+=tab[i];
    }
    return double(sum/size);
}

int main() {
    size_t size;
    std::cin >> size;
    double *pst = nullptr;
    pst = new double[size];

    double n;
    for(size_t i=0; i<size; ++i) {
        std::cin >> n;
        pst[i] = n;
    }
    std::cout << moy(pst, size) << std::endl;
    delete[] pst;

    //printTab(pst, size);

    return EXIT_SUCCESS;
}