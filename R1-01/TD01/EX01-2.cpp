#include <iostream>

int askSmth(std::string thing) {
    std::cout << thing << " ?> ";
    int hour;
    std::cin >> hour;
    return hour;
}

void askTime(int& h, int& m, int& s) {
    h = askSmth("Heure");
    m = askSmth("Minutes");
    s = askSmth("Secondes");
}

void printTime(int _hours, int _minutes, int _seconds) {
    std::cout << "Il est : " << _hours << ":" << _seconds << ":" << _minutes << std::endl;
}

int main() {
    int hours, minutes, seconds;
    askTime(hours, minutes, seconds);
    printTime(hours, minutes, seconds);
    return 0;
}