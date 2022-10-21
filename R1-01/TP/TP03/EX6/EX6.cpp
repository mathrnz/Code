#include "../../../includes/CommonThings/commonthings.hpp"
#include <iostream>

namespace ct = commonthings;
namespace ui = commonthings::userinput;

void syracuse(unsigned int n, unsigned int& ft,unsigned int& max) { //Conjecture de collatz
    do {
        if (n%2 == 0)
            n = (n/2);
        else
            n = 3*n + 1;

        if (n > max)
            max = n;

        ft++;
    } while (n != 1);
}

int main() {
    unsigned int nb;
    ct::userinput::askUser(nb, "Choissir une nombre");

    unsigned int ft = 0, max=0;
    syracuse(nb, ft, max);

    std::cout << "Temps de vol : " << ft << std::endl
    << "Maximum : " << max << std::endl;
}