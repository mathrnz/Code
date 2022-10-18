#include <iostream>
#include <cstring>

int main(int argc, char *argv[]) {
    if(!strcmp(argv[0], "./hello.app"))
        std::cout << "Hello World!" << std::endl;
    else if(!strcmp(argv[0], "./bonjour.app"))
        std::cout << "Bonjour Monde!" << std::endl;
    else {
        std::cout << "Err: Le nom du fichier de correspond pas à un cas prévu!" << std::endl; return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}