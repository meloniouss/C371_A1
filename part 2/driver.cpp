#include <iostream>
#include "Triangle.hpp"

int main()
{
    int x1, y1, z1, x2, y2, z2, x3, y3, z3;
    std::cout << "Please enter the x y z coordinates of the first point, separated by spaces: ";
    std::cin >> x1 >> y1 >> z1;
    std::cout << "Please enter the x y z coordinates of the second point, separated by spaces: ";
    std::cin >> x2 >> y2 >> z2;
    std::cout << "Please enter the x y z coordinates of the third point, separated by spaces: ";
    std::cin >> x3 >> y3 >> z3;
    Point *point1 = new Point(x1, y1, z1);
    Point *point2 = new Point(x2, y2, z2);
    Point *point3 = new Point(x3, y3, z3);
    Triangle *triangle = new Triangle(*point1, *point2, *point3);

    // Trying to use printPoints() method from Triangle class but it doesn't work because of some error
    triangle->printPoints();

    delete point1;
    delete point2;
    delete point3;
    return 0;
}
