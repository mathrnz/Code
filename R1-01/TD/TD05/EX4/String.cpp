#include "String.hpp"

void CreateString(String & str, const size_t size=256) {
    str.allocated_size = size;
    str.buffer = new char[size];
    *str.buffer='\0';
    //str.buffer[0]='\0'; fait la même chose.
}

void DisplayString(const String & str) {

    //Toutes les boucles suivantes font la même chose.

    /*for(size_t i=0; i<str.allocated_size; ++i) {
        std::cout << str.buffer[i];
    }
    std::cout << std::endl;*/
    
    /*for(char* pc=str.buffer; *pc != '\0'; ++pc) {
        std::cout << *pc;
    }*/

    char* pc = str.buffer;
    while ( *pc != '\0') {
        std::cout << *pc++;
    }
}

size_t StringLength(const String & str) {
    size_t size=0;
    
    char* pc=str.buffer;
    while(*pc++ != '\0')
        ;
    return size_t(pc-str.buffer-1);
    

    /*while(str.buffer[size++] != '\0')
        ;    
    return size_t(size);*/
}

void DestroyString(String & str) {
    delete[] str.buffer;
    str.buffer = nullptr;
    str.allocated_size = 0;
}