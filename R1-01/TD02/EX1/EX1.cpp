#include <iostream>

void ask(int& input) {
    std::cout << "Entrez un nombre> ";
    std::cin >> input;
}

int main() {
    int n;
    ask(n);

    if (n == 0)
        std::cout << "Le nombre est nul" << std::endl;
    else if (n > 0)
        std::cout << "Le nombre est positif";
    else
        std::cout << "Le nombre est négatif";
}