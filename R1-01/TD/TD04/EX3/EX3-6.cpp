#include <iostream>

void removeZero(int val[], size_t& size) {
    size_t write = 0;
    for (size_t read=0; read<size; read++) {
        if(val[read] == 0)
            read++;
        else 
            val[write++]=val[read];
    }
    size=write;
}

int main() {

    return EXIT_SUCCESS;
}