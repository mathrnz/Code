#include <iostream>
#include "convert.hpp"

void deg() {
    std::cout << "deg ?>";
    double deg;
    std::cin >> deg;
    std::cout << convert::degToRad(deg) << " radian" << std::endl;
}

void rad() {
    std::cout << "rad ?>";
    double rad;
    std::cin >> rad;
    std::cout << convert::radToDeg(rad) << " degré" << std::endl;
}

int main() {
    rad();
    return 0;
}