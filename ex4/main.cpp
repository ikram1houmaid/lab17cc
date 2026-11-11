
#include <iostream>
#include "include/Matrix.h"

using namespace std;

int main() {

    // Matrices 2x2 d'entiers
    Matrix<int, 2, 2> A;
    Matrix<int, 2, 2> B;

    A.at(0, 0) = 1;
    A.at(0, 1) = 2;
    A.at(1, 0) = 3;
    A.at(1, 1) = 4;

    B.at(0, 0) = 5;
    B.at(0, 1) = 6;
    B.at(1, 0) = 7;
    B.at(1, 1) = 8;

    cout << "===== MATRICES INT 2x2 =====" << endl;

    cout << "Matrice A :" << endl;
    cout << A;

    cout << "Matrice B :" << endl;
    cout << B;

    cout << "Addition A + B :" << endl;
    cout << A + B;

    cout << "Multiplication A * B :" << endl;
    cout << A * B;


    // Matrices 3x3 de doubles
    Matrix<double, 3, 3> C;
    Matrix<double, 3, 3> D;

    C.at(0, 0) = 1.1;
    C.at(0, 1) = 2.2;
    C.at(0, 2) = 3.3;

    C.at(1, 0) = 4.4;
    C.at(1, 1) = 5.5;
    C.at(1, 2) = 6.6;

    C.at(2, 0) = 7.7;
    C.at(2, 1) = 8.8;
    C.at(2, 2) = 9.9;

    D.at(0, 0) = 1.0;
    D.at(0, 1) = 0.0;
    D.at(0, 2) = 0.0;

    D.at(1, 0) = 0.0;
    D.at(1, 1) = 1.0;
    D.at(1, 2) = 0.0;

    D.at(2, 0) = 0.0;
    D.at(2, 1) = 0.0;
    D.at(2, 2) = 1.0;

    cout << "\n===== MATRICES DOUBLE 3x3 =====" << endl;

    cout << "Matrice C :" << endl;
    cout << C;

    cout << "Matrice D :" << endl;
    cout << D;

    cout << "Addition C + D :" << endl;
    cout << C + D;

    cout << "Multiplication C * D :" << endl;
    cout << C * D;

    return 0;
}
