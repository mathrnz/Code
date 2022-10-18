#include <iostream>

int askSmth(std::string thing) { //Demande à l'utilsateur
    std::cout << thing << " ?> ";
    int hour;
    std::cin >> hour;
    return hour;
}

void askTime(int& h, int& m, int& s) { //Demande l'heure (heure, minute, secondes)
    h = askSmth("Heure");
    m = askSmth("Minutes");
    s = askSmth("Secondes");
}

void printTime(int _hours, int _minutes, int _seconds) { //Affiche l'heure
    std::cout << "Il est : " << _hours << ":" << _seconds << ":" << _minutes << std::endl;
}

int main() {
    int hours, minutes, seconds;
    askTime(hours, minutes, seconds);
    printTime(hours, minutes, seconds);
    return 0;
}