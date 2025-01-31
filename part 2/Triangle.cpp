#include "Triangle.hpp"
#include <cmath>
#include <iostream>

void Triangle::translate(int d, char axis)
{
    vertex_1.translate(d, axis);
    vertex_2.translate(d, axis);
    vertex_3.translate(d, axis);
}

double Triangle::calcArea()
{
    double AB_x = vertex_2.x - vertex_1.x;
    double AB_y = vertex_2.y - vertex_1.y;
    double AB_z = vertex_2.z - vertex_1.z;

    double AC_x = vertex_3.x - vertex_1.x;
    double AC_y = vertex_3.y - vertex_1.y;
    double AC_z = vertex_3.z - vertex_1.z;

    double cross_x = AB_y * AC_z - AB_z * AC_y;
    double cross_y = AB_z * AC_x - AB_x * AC_z;
    double cross_z = AB_x * AC_y - AB_y * AC_x;

    double cross_magnitude = sqrt(cross_x * cross_x + cross_y * cross_y + cross_z * cross_z);

    return 0.5 * cross_magnitude;
}

void Triangle::printPoints()
{
    std::cout << "The triangle has the following points: " << std::endl;
    std::cout << "Point 1: " << "{" << vertex_1.x << ", " << vertex_1.y << ", " << vertex_1.z << "}" << std::endl;
    std::cout << "Point 2: " << "{" << vertex_2.x << ", " << vertex_2.y << ", " << vertex_2.z << "}" << std::endl;
    std::cout << "Point 3: " << "{" << vertex_3.x << ", " << vertex_3.y << ", " << vertex_3.z << "}" << std::endl;
}