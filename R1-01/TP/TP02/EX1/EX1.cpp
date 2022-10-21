#include <iostream>

void askUser(std::string thing, int& a) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << thing << "?> ";
    std::cin >> a;
}

std::string posNegNul(int n) { //Retourne si le nombre est nul, positif ou négatif
    if (n == 0)
        return "nul";
    if (n > 0)
        return "positif";
    if (n < 0)
        return "negatif";

    return NULL;
}

int main() {
    int nombre;
    askUser("Nombre", nombre);
    std::cout << posNegNul(nombre) << std::endl;

    return 0;
}