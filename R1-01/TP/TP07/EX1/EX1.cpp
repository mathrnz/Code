#include <iostream>
#include <random>
#include <chrono>
#include "geometry.hpp"

int main() {

    std::uniform_real_distribution<double> gen(0, 1);
    std::default_random_engine random;
    random.seed(std::chrono::high_resolution_clock::now().time_since_epoch().count());

    //const double points = 100000;
    double pointsInside = 0;    

    geometry::point center;
    center.x = 0;
    center.y = 0;
    geometry::circle circle;
    circle.center = center;
    circle.radius = 1;

/*    for (int i=0; i<points; i++) {
        geometry::point point;
        point.x = gen(random);
        point.y = gen(random);

        if (geometry::inside(point, circle))
            pointsInside++;
    }

        double pi = 4*(pointsInside/points);   
        std::cout << "pi = " << pi << std::endl;*/

    double points = 0;
    while (true) {
        geometry::point point;
        point.x = gen(random);
        point.y = gen(random);

        if (geometry::inside(point, circle))
            pointsInside++;

        points++;

        double pi = 4*(pointsInside/points); 
        std::cout << "pi =" << pi << std::endl;
    }
}
