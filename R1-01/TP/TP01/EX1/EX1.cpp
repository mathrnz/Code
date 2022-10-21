#include <iostream>
#include <string>

void ask(std::string thing, int& n) { //Demande à l'utilisateur, passage par référence (int)
    std::cout << thing << " ?>";
    std::cin >> n;
}

void printHour(int h, int m, int s) { //affiche l'heure
    std::cout << "Il est : " << h << ":" << m << ":" << s << std::endl;
}

int main() {
    int hour, minute, second;
    ask("Heure", hour);
    ask("Minute", minute);
    ask("Seconde", second);
    printHour(hour, minute, second);
}