//For swap2 active, give 2 value, if a > b, swap between a and b
//For swap3 active, give 3 value, order to a <= b <= c
//DO NOT CALL SWAP2 AND SWAP3 AT SAME TIME IN THE MAIN

#include <iostream>
#include <cstring>

void asksmth(std::string thing, double &n)
{
    std::cout << thing << " : ";
    std::cin >> n;
}

void swap2(double *pa, double *pb)
{
    if(*pa>*pb)
        {
            double temp;
            temp = *pa;
            *pa = *pb;
            *pb = temp;
        }
}

void swap3(double *pa, double *pb, double *pc)
{
    if(*pa>*pb && *pb>*pc)
    {
        swap2(&*pa, &*pb);
        swap2(&*pb, &*pc);
        swap2(&*pa, &*pb);
    }
    else if(*pa>*pb && *pb<*pc)
    {
        swap2(&*pa, &*pb);
        if(*pb>*pc)
            swap2(&*pb, &*pc);
    }
    else if(*pa<*pb && *pb>*pc)
    {
        swap2(&*pb, &*pc);
        if(*pa>*pb)
            swap2(&*pa, &*pb);
    }
}

int main()
{
    double a;
    double b;
    double c;

    asksmth("Choisir une valeur pour a", a);
    asksmth("Choisir une valeur pour b", b);
    asksmth("Choisir une valeur pour c", c);

    std::cout << "Before swap " << a << " " << b << " " << c << std::endl;

    //swap2(&a, &b);
    swap3(&a, &b, &c);

    std::cout << "After swap " << a << " " << b << " " << c;

    return 0;
}