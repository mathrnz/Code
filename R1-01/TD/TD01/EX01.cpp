#include <iostream>

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

    std::cout << "Il est " << heure << ":" << minutes << ":" << secondes << std::endl;
}
