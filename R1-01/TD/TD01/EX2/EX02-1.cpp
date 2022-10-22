/*
Ecrire, dans un style impératif pur, un programme qui demande à l’utilisateur son nom et son 
âge et les affiche sur la sortie standard. 
*/

#include <iostream>

int main() {
    std::cout << "Nom ?> ";
    std::string nom;
    std::cin >> nom;

    std::cout << "Age ?> ";
    unsigned int age;
    std::cin >> age;

    std::cout << "Vous vous appellez : " << nom << " et vous avez " << age << " ans." << std::endl;
}