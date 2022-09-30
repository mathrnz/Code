#include <iostream>
#include <string>

void ask(std::string thing, int& n) {
    std::cout << thing << " ?>";
    std::cin >> n;
}

void printHour(int h, int m, int s) {
    std::cout << "Il est : " << h << ":" << m << ":" << s << std::endl;
}

int main() {
    int hour, minute, second;
    ask("Heure", hour);
    ask("Minute", minute);
    ask("Seconde", second);
    printHour(hour, minute, second);
}