#include <iostream>

struct PointChar { //coordonnées d'un point et caratère à placer à ce point
    int x,y;
    char c;
};

int contains(const PointChar tab[], size_t tabSize, int x0, int y0) { //Renvoie le caratère contenu aux coordonnées x0 y0
    for(size_t i=0; i<tabSize; i++) {
        if(tab[i].x == x0 && tab[i].y == y0)
            return tab[i].c;
    }
    return -1;
}

void display(PointChar t[], const int size=24){ //Affiche un ASCII art à partir d'un tableau
    for(int y=0; y<size-1; y++){
        for(int x=0; x<size-1; x++){
            char c = contains(t, size, x, y);
            if(c != -1) std::cout << c;
        }
        std::cout << std::endl;
    }
}


int main() {
    PointChar cat[24] = { 
        {0,0,' '}, 
        {1,0,'/'}, 
        {2,0,'\\'}, 
        {3,0,'_'}, 
        {4,0,'/'}, 
        {5,0,'\\'}, 
        {0,1,'('}, 
        {1,1,' '}, 
        {2,1,'o'}, 
        {3,1,'.'}, 
        {4,1,'o'}, 
        {5,1,' '}, 
        {6,1,')'}, 
        {0,2,' '},
        {1,2,'>'}, 
        {2,2,' '}, 
        {3,2,'^'}, 
        {4,2,' '}, 
        {5,2,'<'} 
        };
    size_t catSize = 24;
    display(cat);

    return EXIT_SUCCESS;
}