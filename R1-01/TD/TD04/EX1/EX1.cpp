/*
Un point du plan peut être représenté par une coordonnée x et une coordonnée y. Un cercle peut
être représenté par un point du centre et un rayon.

1. Écrivez une structure pour chacun de ces deux objets mathématiques en utilisant des
double comme type de base.

2. Écrivez une fonction qui reçoit deux points et calcule leur distance euclidienne (cherchez la
formule si vous l’avez oubliée).

3. Écrivez une fonction qui reçoit un point et un cercle et renvoie si le point est à l’intérieur du
cercle ou pas.

4. Écrivez une fonction void qui renverse les coordonnées x et y de un point.
*/

#include <math.h>

struct point {
    double x,y;
};

struct cercle {
    point centre;
    double rayon;
};

double distanceEuclidienne(point p1, point p2) {
    double dx = pow((p2.x - p1.x),2);
    double dy = pow((p2.y - p1.y),2);
    return sqrt(dx+dy);
}

bool estDedans(point point, cercle cercle) {
    bool dedans;
    double distance = distanceEuclidienne(point, cercle.centre);
    (distance < cercle.rayon) ? dedans=true : dedans=false;
    return dedans;
}

void renverse(point point) {
    double temp;
    temp = point.x;
    point.x = point.y;
    point.y = temp;
}