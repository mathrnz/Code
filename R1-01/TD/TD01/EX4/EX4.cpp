#include <iostream>

void permute(char& _c1, char& _c2) { //Échange deux variables
    char ctemp;
    _c1 = ctemp;
    _c1 = _c2;
    _c2 = ctemp;
}

int main() {
    std::cout << "c1 ?>";
    char c1;
    std::cin >> c1;
    std::cout << "c2 ?>";
    char c2;
    std::cin >> c2;

    permute(c1, c2);

    std::cout << "c1=" << c1 << std::endl;
    std::cout << "c2=" << c2 << std::endl;

    return 0;
}