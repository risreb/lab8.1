#include "IsoscelesTriangle.h"
#include "Exception.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b,
    double A, double B)
    : Triangle(a, b, a, A, B, A)

{
        if (a != a || A != A)
            throw Exception("равнобедренный треугольник задан неверно");
}
