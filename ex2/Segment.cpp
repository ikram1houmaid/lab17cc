#include "Segment.h"
#include <cmath>

Segment::Segment() {
    p1 = Point();
    p2 = Point();
}

Segment::Segment(Point p1, Point p2) {
    this->p1 = p1;
    this->p2 = p2;
}

double Segment::longueur() const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();

    return sqrt(dx * dx + dy * dy);
}
