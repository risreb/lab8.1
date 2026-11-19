#include "RightTriangle.h"
#include "Exception.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle(a, b, c, A, B, 90)

{
    if (A + B != 90)
        throw Exception("углы прямоугольного треугольника неверны");
};
