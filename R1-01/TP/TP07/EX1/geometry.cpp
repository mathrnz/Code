#include <cmath>
#include <algorithm>
#include "geometry.hpp"


namespace geometry {
    double distEucli(point p1, point p2){
        double dx = (p2.x-p1.x) * (p2.x-p1.x);
        double dy = (p2.y-p1.y) * (p2.y-p1.y);
        double dist = sqrt(dx+dy);
        return dist;
    }

    bool inside(point p1, circle c1){
        return distEucli(p1, c1.center) < c1.radius;
    }

    void reverse(point &p1){
        std::swap(p1.x, p1.y);
    }

    /*double randomNumber(double lower, double upper) {
        std::uniform_real_distribution<double> gen(lower, upper);
        std::default_random_engine random;
        random.seed(std::chrono::high_resolution_clock::now().time_since_epoch().count());

        return gen(random);
    }*/
}