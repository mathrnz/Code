#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

void echange2(double *pa, double *pb) { //Echange deux variables
    if(*pa > *pb) {
        double pc=*pa;
        *pa=*pb;
        *pb=pc;
    }
}

int main(int argc, char *argv[]) {
    double a, b;
    commonthings::userinput::askUser(a, "A?");
    commonthings::userinput::askUser(b, "B?");

    echange2(&a, &b);

    std::cout << "A: " << a << " B: " << b << std::endl;

    return EXIT_SUCCESS;
}