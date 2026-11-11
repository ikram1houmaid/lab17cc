#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"

class Triangle {
private:
    Point a;
    Point b;
    Point c;

public:
    Triangle();
    Triangle(Point a, Point b, Point c);

    double perimetre() const;
};

#endif
