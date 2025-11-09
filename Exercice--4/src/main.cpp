#include <iostream>
#include "Matrix.h"

int main() {
    // Matrix 2x2 d'entiers
    Matrix<int, 2, 2> A, B;
    A.at(0,0) = 1; A.at(0,1) = 2;
    A.at(1,0) = 3; A.at(1,1) = 4;

    B.at(0,0) = 5; B.at(0,1) = 6;
    B.at(1,0) = 7; B.at(1,1) = 8;

    auto C = A + B;
    auto D = A * B;

    std::cout << "Matrix A + B:" << std::endl << C;
    std::cout << "Matrix A * B:" << std::endl << D;

    // Matrix 3x3 de doubles
    Matrix<double, 3, 3> X, Y;
    X.at(0,0) = 1.1; X.at(0,1) = 2.2; X.at(0,2) = 3.3;
    X.at(1,0) = 4.4; X.at(1,1) = 5.5; X.at(1,2) = 6.6;
    X.at(2,0) = 7.7; X.at(2,1) = 8.8; X.at(2,2) = 9.9;

    Y.at(0,0) = 9.9; Y.at(0,1) = 8.8; Y.at(0,2) = 7.7;
    Y.at(1,0) = 6.6; Y.at(1,1) = 5.5; Y.at(1,2) = 4.4;
    Y.at(2,0) = 3.3; Y.at(2,1) = 2.2; Y.at(2,2) = 1.1;

    auto Z = X + Y;
    std::cout << "Matrix X + Y:" << std::endl << Z;

    return 0;
}
