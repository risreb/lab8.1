#include "Parallelogram.h"
#include "Exception.h"

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B)
{
    if (A != C || B != D)
        throw Exception("углы параллелограмма не равны попарно");
}
