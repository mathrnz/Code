#include <iostream>

void asksmth(std::string thing, int& t) {
    std::cout << thing << "?> ";
    std::cin >> t;
}

void checkbornes(int b1, int b2, int nb) {
    if (nb >= b1 && nb <= b2)
        std::cout << "Le nombre est compris dans les bornes" << std::endl;
    else 
        std::cout << "Le nombre n'est pas compris dans les bornes" << std::endl;
}

int main() {
    int borne1, borne2, nombre;
    asksmth("Borne 1", borne1);
    asksmth("Borne 2", borne2);
    asksmth("Nombre", nombre);

    checkbornes(borne1, borne2, nombre);
}