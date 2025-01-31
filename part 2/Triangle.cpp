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
    double distance_1_2 = sqrt(pow(vertex_2.x - vertex_1.x, 2) + pow(vertex_2.y - vertex_1.y, 2) + pow(vertex_2.z - vertex_1.z, 2));
    double distance_1_3 = sqrt(pow(vertex_3.x - vertex_1.x, 2) + pow(vertex_3.y - vertex_1.y, 2) + pow(vertex_3.z - vertex_1.z, 2));
    return (0.5 * (distance_1_2 * distance_1_3));
}

void Triangle::printPoints()
{
    std::cout << "The triangle has the following points: " << std::endl;
    std::cout << "Point 1: " << "{" << vertex_1.x << ", " << vertex_1.y << ", " << vertex_1.z << "}" << std::endl;
    std::cout << "Point 2: " << "{" << vertex_2.x << ", " << vertex_2.y << ", " << vertex_2.z << "}" << std::endl;
    std::cout << "Point 3: " << "{" << vertex_3.x << ", " << vertex_3.y << ", " << vertex_3.z << "}" << std::endl;
}