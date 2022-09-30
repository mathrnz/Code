#include "convert.hpp"

double convert::degToRad(double deg) {
    double rad = ( deg * convert::pi ) / 180;
    return rad;
}

double convert::radToDeg(double rad) {
    double deg = rad * (180/pi);
    return deg;
}