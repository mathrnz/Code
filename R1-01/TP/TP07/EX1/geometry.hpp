#pragma once

namespace geometry {
    struct point {
        double x, y;
    };

    struct circle {
        point center;
        double radius;
    };

    double distEucli(point p1, point p2);
    bool inside(point p1, circle c1);
    void reverse(point &p1);
    //double randomNumber(double lower, double upper);

} // namespace geometry
