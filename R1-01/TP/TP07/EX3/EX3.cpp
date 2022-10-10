#include <iostream>

void printTab(const int tab[], size_t n) { //Attention, cet algo nécessite deux valeurs ! (risque underflow)
    for (int i=0; i<n-1; i++)
        std::cout << tab[i] << ",";
    std::cout << tab[n-1] << "." << std::endl;
}

int getMin(const int tab[], size_t n) {
    int min=tab[0];
    for(size_t i=1; i<n; i++)
        if(tab[i]<min)
            min=tab[i];

    return min;
}

double moy_Tab(const int tab[], size_t n) {
    double somme=0;
    for(size_t i=0; i<n; i++)
        somme+=tab[i];

    return somme/n;
}

int popBack(int tab[], size_t& n) {
    return tab[--n];
}

int popFront(int tab[], size_t& n) {
    for(size_t i=1; i<n; i++)
        tab[i-1]=tab[i];
    return tab[--n];
}

void removeZero(int val[], size_t& size) {
    size_t write = 0;
    for (size_t read=0; read<size; read++) {
        if(val[read] == 0)
            read++;
        else 
            val[write++]=val[read];
    }
    size=write;
}

int main() {
    std::cout << "Test printTab (résultat attendu : 13,10,2,14.)" << std::endl;
    int tab1[]={13,10,2,14};
    size_t tab1Size=4;
    printTab(tab1, tab1Size);

    std::cout << "Test getMin (résulatat attendu 2)" << std::endl;
    int tab2[]={13,10,2,14};
    size_t tab2Size=4;
    std::cout << getMin(tab2, tab2Size) << std::endl;

    std::cout << "Test moy_Tab (résultat attendu : 9.75" << std::endl ;
    int tab3[]={13,10,2,14};
    size_t tab3Size=4;
    std::cout << moy_Tab(tab3, tab3Size) << std::endl;

    std::cout << "Test popBack (résultat attendu : 13,10,2.)" << std::endl;
    int tab4[]={13,10,2,14};
    size_t tab4Size=4;
    popBack(tab4, tab4Size);
    printTab(tab4, tab4Size);

    std::cout << "Test popFront (résultat attendu : 10,2,14.)" << std::endl;
    int tab5[]={13,10,2,14};
    size_t tab5Size=4;
    popFront(tab5, tab5Size);
    printTab(tab5, tab5Size);

    std::cout << "Test removeZero (résultat attendu : 13,10,2,14.)" << std::endl;
    int tab6[]={13,0,0,10,2,0,14,0};
    size_t tab6Size=8;
    removeZero(tab6, tab6Size);
    printTab(tab6, tab6Size);

    return EXIT_SUCCESS;
}