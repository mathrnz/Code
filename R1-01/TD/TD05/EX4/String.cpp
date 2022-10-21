#include "String.hpp"
#include <cstring>

void CreateString(String & str, const size_t size=256) { //Crée un string de taille 256 par défaut
    str.allocated_size = size;
    str.buffer = new char[size];
    *str.buffer='\0';
    //str.buffer[0]='\0'; fait la même chose.
}

void DisplayString(const String & str) { //Affiche le string

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

size_t StringLength(const String & str) { //Renvoie la taille du string ('\0' compris)
    size_t size=0;
    
    char* pc=str.buffer;
    while(*pc++ != '\0')
        ;
    return size_t(pc-str.buffer-1);
    

    /*while(str.buffer[size++] != '\0')
        ;    
    return size_t(size);*/
}

void DestroyString(String & str) { //Supprime le string
    delete[] str.buffer;
    str.buffer = nullptr;
    str.allocated_size = 0;
}

void GrowString(String & str, size_t newSize) { //Agrandi le string (copie temporaire, suppression de l'ancien et modification du pointeur)
    if(newSize <= str.allocated_size) return;

    char* tmp_buffer = new char[newSize]; //tableau temporaire, à la bonne taille.
    char *p1=str.buffer, *p2=tmp_buffer;
    while(*p1 != '\0') //Jusqu'à la fin du "string"
        *p2++=*p1++;

    delete[] str.buffer;
    str.buffer = tmp_buffer;
    str.allocated_size = newSize;
}

void AssignString(String & str, const char *ptr) { //Assigne un tableau de char au string
    GrowString(str, strlen(ptr)+1);
    char *pc = str.buffer;
    while(*ptr != '\0')
        *pc++=*ptr++;
}

void ConcatenateString(String & s1, String & s2) { //Ajoute deux strings
    char *p1 = s1.buffer; //début string 1
    while(*p1++ != '\0') //jusqu'à la fin du string
        ;
    p1--; //Corrige *p1++

    const char *p2 = s2.buffer;
    while(*p2 != '\0') //Jusqu'à la fin du string
        *p1++ = *p2++;
    *p1 = '\0'; //Fin du string
}