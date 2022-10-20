#include <iostream>
#include "String.hpp"

int main() {
    String stringA;
    const char strA[] = "contenu!";
    CreateString(stringA, 4);
    AssignString(stringA, strA);
    std::cout << "const char strA[]=" << strA << std::endl << "String stringA="; DisplayString(stringA); std::cout << std::endl;
    
    String stringB;
    const char strb[] = "suite contenu!";
    CreateString(stringB, 120);
    AssignString(stringB, strb);
    ConcatenateString(stringA, stringB);
    std::cout << "String stringB="; DisplayString(stringB); std::cout << std::endl;
    std::cout << "stringA+stringB="; DisplayString(stringA); std::cout << std::endl;


   return EXIT_SUCCESS;
}