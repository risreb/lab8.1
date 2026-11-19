#include "Triangle.h"
#include "Exception.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a(a), b(b), c(c), A(A), B(B), C(C)
{
    if (A + B + C != 180)
        throw Exception("сумма углов не равна 180");
}

void Triangle::print() const
{
    std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << '\n';
    std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << '\n';
}