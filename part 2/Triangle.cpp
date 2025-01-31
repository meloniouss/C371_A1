#include "Triangle.hpp"

void Triangle::translate(int d, char axis)
{
    vertex_1.translate(d, axis);
    vertex_2.translate(d, axis);
    vertex_3.translate(d, axis);
}
