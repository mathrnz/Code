#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Nombre d'arguments : " << argc-1 << std::endl;
    
    (argc>1)?std::cout << "Arguments :" << std::endl:std::cout << "Aucun argument." << std::endl;
    for(size_t i=1; i<argc; ++i) {
        std::cout << i << ". " << argv[i] << std::endl;
    }

    return EXIT_SUCCESS;
}