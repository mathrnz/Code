#include <iostream>

void removeZero(int val[], size_t& size) { //Retire les 0 d'un tableau
    size_t write = 0;
    for (size_t read=0; read<size; read++) { //Lis chaque case du tableau
        if(val[read] == 0)
            read++; //Avance si la valeur est 0
        else 
            val[write++]=val[read]; //Écrit la dernière valeur en train d'être lue dans un case libre (0)
    }
    size=write; //Ajuste la taille du tableau en fonction du nombre de 0 enlevés
}

int main() {

    return EXIT_SUCCESS;
}