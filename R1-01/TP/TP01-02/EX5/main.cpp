/*
mplanter les fonctions de conversion degrés/radians grâce à des fonctions dans un module 
(une paire de fichiers .cpp et .hpp) et en même temps, dans un namespace nommé « trigonometrie ». 
Utilisez ces fonctions dans programme principal rédigé dans un fichier .cpp différent.
*/

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