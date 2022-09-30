#include <iostream>

void askNum(std::string thing, int& _n) {
    std::cout << thing << "?> ";
    std::cin >> _n;
}

void magic(int& _n1,int& _n2) {
    _n1 = _n1 + _n2;
    _n2 = _n1 - _n2;
    _n1 = _n1 - _n2;
}

void printNum(int _n1, int _n2) {
    std::cout << "Magie, maintenant" << std::endl;
    std::cout << "n1=" << _n1 << std::endl;
    std::cout << "n2=" << _n2 << std::endl;
}

int main() {
    int n1, n2;
    askNum("n1", n1);
    askNum("n2", n2);
    magic(n1, n2);
    printNum(n1, n2);
    return 0;
}