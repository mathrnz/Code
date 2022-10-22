/*
Écrivez une fonction qui inverse l’ordre des caractères d’une chaine C, par exemple le mot «port»
devient «trop». Cette fonction doit renverser la chaine sur place. Est-ce qu’on a besoin d’un
passage par référence ?
*/

#include <cstring>
#include <string_view>
#include <iostream>

void inverse(char str[]) {
    size_t lengh = strlen(str);

    for (size_t i=0; i<lengh/2; i++) {
        std::swap(str[i], str[lengh-i-1]);
    }

    for (size_t i=0; i<lengh; i++) {
        std::cout << str[i];
    }
}

int main() {
    char str[100] = {"Bonjour"};
    inverse(str);

    return EXIT_SUCCESS;
}
