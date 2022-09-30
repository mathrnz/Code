#include <iostream>
#include <string>

void ask(std::string thing, int& n) {
    std::cout << thing << " ?>";
    std::cin >> n;
}

void ask(std::string thing, std::string& n) {
    std::cout << thing << " ?>";
    std::cin >> n;
}

void printInfo(std::string n, int a) {
    std::cout << "Vous vous appelez " << n << " et vous avez " << a << std::endl;
}

int main() {
    std::string name;
    ask("Nom", name);
    int age;
    ask("Age", age);
    printInfo(name, age);
}