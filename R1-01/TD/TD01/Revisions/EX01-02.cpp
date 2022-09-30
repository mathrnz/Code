#include <iostream>

void askSmth(std::string thing, int& thg) {
    std::cout << thing << " ?>";
    std::cin >> thg;
}

void printTime(int h, int m, int s) {
    std::cout << "Il est : " << h << ":" << m << ":" << s << std::endl;
}

void askTime(int& h, int& m, int& s) {
    askSmth("Heure", h);
    askSmth("Minute", m);
    askSmth("Secondes", s);
}

int main() {
    int heure, minute, secondes;
    askTime(heure, minute, secondes);
    printTime(heure, minute, secondes);
}