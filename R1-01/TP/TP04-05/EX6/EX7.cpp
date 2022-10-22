/*
Implémentez  l'exercice 7.
Vous prendrez soin de structurer correctement votre programme (sous-programmes et programme principal).
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

void printFibonacci(unsigned int n) { //Affiche n termes de la suite de Fibonacci
    const unsigned int F0 = 0;
    const unsigned int F1 = 1;

    long long unsigned int Fn = F0;
    long long unsigned int Fn1 = F1;
    long long unsigned int nextTerm;
    
    for (unsigned int i=0; i < n; i++) {
        if (i == 0)
            std::cout << F0 << ", "; //Terme 0
        if (i == 1)     
            std::cout << F1 << ", "; //Terme 1
        
        nextTerm = Fn + Fn1;
        Fn = Fn1;
        Fn1 = nextTerm;

        std::cout << nextTerm;
        (i == (n-1))?std::cout << std::endl:std::cout << ", "; //virgule etre les éléments, saut de ligne si dernier de la liste   
    }
}

int main() {
    unsigned int n;
    commonthings::userinput::askUser(n, "Fibonnacci à n éléments, n?");
    printFibonacci(n);

    return EXIT_SUCCESS;
}