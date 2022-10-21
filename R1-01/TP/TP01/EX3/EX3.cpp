#include <iostream>
#include <string>

void ask(std::string thing, int& n) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << thing << " ?>";
    std::cin >> n;
}

void magic(int& nb1, int& nb2) { //Échange nb1 et nb2, passage par référence
    nb1 = nb1 + nb2;
    nb2 = nb1 - nb2;
    nb1 = nb1 - nb2;
}

void printresults(int& nb1, int& nb2) { //Affiche nb1 et nb2
    std::cout << "Magie, maintenant :" << std::endl;
    std::cout << "n1=" << nb1 << std::endl;
    std::cout << "n2=" << nb2 << std::endl;
}

int main() {
    int n1,n2;
    ask("n1", n1);
    ask("n2", n2);
    magic(n1, n2);
    printresults(n1, n2);

    return 0;
}