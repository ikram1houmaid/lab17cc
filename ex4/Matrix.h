
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T, int N, int M>
class Matrix {
private:
    T data[N][M];

public:
    // Constructeur par defaut
    Matrix() {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                data[i][j] = T();
            }
        }
    }

    // Acces a un element
    T& at(int i, int j) {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }

        return data[i][j];
    }

    // Acces en lecture seule
    const T& at(int i, int j) const {
        if (i < 0 || i >= N || j < 0 || j >= M) {
            throw out_of_range("Indice invalide");
        }

        return data[i][j];
    }

    // Addition de deux matrices
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& autre) const {
        Matrix<T, N, M> resultat;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                resultat.data[i][j] = data[i][j] + autre.data[i][j];
            }
        }

        return resultat;
    }

    // Multiplication de deux matrices
    template <int P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& autre) const {
        Matrix<T, N, P> resultat;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                resultat.data[i][j] = T();

                for (int k = 0; k < M; k++) {
                    resultat.data[i][j] +=
                        data[i][k] * autre.data[k][j];
                }
            }
        }

        return resultat;
    }

    // Operateur d'affichage
    friend ostream& operator<<(ostream& os, const Matrix<T, N, M>& mat) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                os << mat.data[i][j] << "\t";
            }

            os << endl;
        }

        return os;
    }
};

#endif
