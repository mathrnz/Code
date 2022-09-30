#include <iostream>

void askUser(double& n, std::string msg) {
    std::cout << msg << "> ";
    std::cin >> n;
}

void askUser(int& n, std::string msg) {
    std::cout << msg << "> ";
    std::cin >> n;
}

void askUser(unsigned int& n, std::string msg) {
    std::cout << msg << "> ";
    std::cin >> n;
}

void LSG(double& min) { //Note la plus basse
    double note;
    askUser(note, "Saisir une note");
    if (min > note)
        min = note;
}

int main() {
    unsigned int nbnotes;
    askUser(nbnotes, "Combien de notes souhaitez vous saisir ?");

    double min = 20;
    for ( int i=0; i < nbnotes; i++ ) {
        LSG(min);
    }
    std::cout << "La note la plus basse est : " << min << std::endl;

    return 0;
}