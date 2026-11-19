#include "Quadrilateral.h"
#include "Exception.h"
#include <iostream>

Quadrilateral::Quadrilateral(double a, double b, double c, double d,
    double A, double B, double C, double D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D)
{
    if (A + B + C + D != 360)
        throw Exception("сумма углов не равна 360");
}

void Quadrilateral::print() const
{

    std::cout << "Стороны: a=" << a << " b=" << b
        << " c=" << c << " d=" << d << '\n';
    std::cout << "Углы: A=" << A << " B=" << B
        << " C=" << C << " D=" << D << '\n';
}