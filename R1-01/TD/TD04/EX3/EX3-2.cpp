#include <iostream>

int getMin(const int tab[], size_t n) {
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