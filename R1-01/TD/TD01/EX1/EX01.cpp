/*
Ecrire un programme principal qui demande à l’utilisateur de saisir trois données : un nombre 
d’heures (h), un nombre de minutes (m) et un nombre de secondes (s), et utilise un sous-
programme pour afficher l’heure au format "h:m:s".
*/

#include <iostream>

void printTime(unsigned int hour, unsigned int min, unsigned int sec) {
    std::cout << "Il est " << hour << ":" << min << ":" << sec << std::endl;
}

int main() {
    std::cout << "Heure ?>";
    unsigned int heure;
    std::cin >> heure;

    std::cout << "Minute ?>";
    unsigned int minutes;
    std::cin >> minutes;

    std::cout << "Secondes ?>";
    unsigned int secondes;
    std::cin >> secondes;

    printTime(heure, minutes, secondes);

    return EXIT_SUCCESS;
}
