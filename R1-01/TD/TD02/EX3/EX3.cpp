//Demande l'age et indique si la personne est majeure ou mineure
#include <iostream>

void askUser(std::string thing, unsigned int& a) { //Demande à l'utilsateur
    std::cout << thing << "?> ";
    std::cin >> a;
}

void minorMajor(int a) {
    if (a >= 18)
        std::cout << "Vous êtes majeur !";
    else
        std::cout << "Vous êtes mineur !";
}

int main() {
    unsigned int age;
    askUser("Age", age);
    minorMajor(age);
}