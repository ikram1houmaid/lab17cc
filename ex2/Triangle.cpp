#include "Triangle.h"
#include "Segment.h"

Triangle::Triangle() {
    a = Point();
    b = Point();
    c = Point();
}

Triangle::Triangle(Point a, Point b, Point c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::perimetre() const {
    Segment ab(a, b);
    Segment bc(b, c);
    Segment ca(c, a);

    return ab.longueur() + bc.longueur() + ca.longueur();
}
