#include "Rhombus.h"
#include "Exception.h"

Rhombus::Rhombus(double side, double A, double B)
    : Quadrilateral(side, side, side, side, A, B, A, B)
{
    if (A != C || B != D)
        throw Exception("углы ромба не равны попарно");
}