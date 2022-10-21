#include <iostream>

void askUser(std::string thing, int& a) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << thing << " ?> ";
    std::cin >> a;
}

bool isInRange(int a, int b, int c) { //Vérifie si c est compris en a et b ou b et a
    if ( (c >= a) && (c <= b) || (c >= b) && (c <= a))
        return true;
    else
        return false;
}

int main() {
    int a, b, nb;
    askUser("Borne 1", a);
    askUser("Borne 2", b);
    askUser("Nbombre", nb);

    if(isInRange(a, b, nb))
        std::cout << "Compris entre les deux bornes" << std::endl;
    else
        std::cout << "n'est pas compris entre les deux bornes" << std::endl;

    return 0;
}