#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

void ordonne3(double *pa, double *pb, double *pc) {   
    double tmp=*pa;
    
    if(*pa < *pb && *pb < *pc)
        return;
    else {
        if(*pb < *pa && *pa < *pc) {
            // b a c
            *pa=*pb;
            *pb=tmp;
        } else if (*pc < *pb && *pb < *pa){
            //c b a
            *pa=*pc;
            *pc=tmp;
        } else {
            //b c a
            *pa=*pb;
            *pb=*pc;
            *pc=tmp;
        }

    }
}

int main(int argc, char *argv[]) {
    double a, b, c;
    commonthings::userinput::askUser(a, "A?");
    commonthings::userinput::askUser(b, "B?");
    commonthings::userinput::askUser(c, "C?");

    ordonne3(&a, &b, &c);

    std::cout << "A:" << a << ", B:" << b << ", C:" << c << std::endl;

    return EXIT_SUCCESS;
}