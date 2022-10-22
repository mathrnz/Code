/*
Commencez par créer une structure PointChar avec trois attribues : un entier x, un entier y,
et un caractère c, dans cette ordre. Réfléchissez plus tard pourquoi l’ordre est importante.
2. Créez une fonction contains qui reçoit comme paramètres un tableau t de PointChar, sa
taille n et deux entiers x0 et y0. Cette fonction renvoie un entier. Si t contient un elément
t[i] tel que t[i].x = x0 et t[i].y = y0, alors on renvoie t[i].c. Sinon, on renvoie -1. Pourquoi on
demande int et pas char ?
3. En utilisant contains, écrivez une fonction display qui affiche le caractère correspondant à
chaque case d’un tableau de PointChar pour x et y de 0 à size-1, où size est une constante
égale à 24. Cette fonction n’utilise aucun autre tableau. Si on a les valeurs à gauche, on doit
afficher l’image :
 /\_/\
( o.o )
 > ^ <

x y  c
1 0 '/'
2 0 '\\'
3 0 '_'
4 0 '/'
5 0 '\\'
0 1 '('
2 1 'o'
3 1 '.'
4 1 'o'
6 1 ')'
1 2 '>'
3 2 '^'
5 2 '<'
*/

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