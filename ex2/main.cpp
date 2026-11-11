#include <iostream>
#include "Point.h"
#include "Triangle.h"

using namespace std;

int main() {

    // Création de trois points
    Point A(0, 0);
    Point B(3, 0);
    Point C(0, 4);

    // Création du triangle
    Triangle t(A, B, C);

    // Calcul du périmètre
    cout << "===== Bibliotheque Geo2D =====" << endl;

    cout << "Perimetre du triangle : "
         << t.perimetre() << endl;

    return 0;
}
