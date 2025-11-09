#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <array>
#include <iomanip>
#include <stdexcept>

template<typename T, size_t N, size_t M>
class Matrix {
private:
    std::array<std::array<T, M>, N> data{};
public:
    // Constructeur par défaut
    Matrix() = default;

    // Accès aux éléments
    T& at(size_t i, size_t j) {
        if (i >= N || j >= M) throw std::out_of_range("Index out of range");
        return data[i][j];
    }
    const T& at(size_t i, size_t j) const {
        if (i >= N || j >= M) throw std::out_of_range("Index out of range");
        return data[i][j];
    }

    // Opérateur +
    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (size_t i = 0; i < N; ++i)
            for (size_t j = 0; j < M; ++j)
                result.at(i,j) = this->at(i,j) + other.at(i,j);
        return result;
    }

    // Opérateur *
    template<size_t P>
    Matrix<T, N, P> operator*(const Matrix<T, M, P>& other) const {
        Matrix<T, N, P> result;
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < P; ++j) {
                result.at(i,j) = T{};
                for (size_t k = 0; k < M; ++k)
                    result.at(i,j) += this->at(i,k) * other.at(k,j);
            }
        }
        return result;
    }

    // Affichage avec operator<<
    friend std::ostream& operator<<(std::ostream& os, const Matrix<T, N, M>& mat) {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j) {
                os << std::setw(8) << mat.at(i,j) << " ";
            }
            os << std::endl;
        }
        return os;
    }
};

#endif
