#include <iostream>
#include "Triangle.hpp"

int main()
{
    double x1, y1, z1, x2, y2, z2, x3, y3, z3;
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

    int option;
    int d;
    char axis;

    while (option != 4) {
        std::cout <<
            "\nPlease select an option:\n"
        << "  1. Translate the triangle\n"
        << "  2. View the points of the triangle\n"
        << "  3. Calculate the area of the triangle\n"
        << "  4. Close the application" << std::endl;
        std::cin >> option;
        switch (option) {
            case 1:
                std::cout << "\nPlease enter the number by which to translate the triangle and the axis in which direction to translate (x, y, z), separated by a space: ";
                std::cin >> d >> axis;
                triangle->translate(d, axis);
                break;
            case 2:
                triangle->printPoints();
                break;
            case 3:
                std::cout << "\nThe area of the triangle is: " << triangle->calcArea() << std::endl;
                break;
            case 4:
                std::cout << "\nClosing the application..." << std::endl;
                break;
            default:
                std::cout << "\nPlease enter a valid option" << std::endl;
        }
    }

    delete point1;
    delete point2;
    delete point3;
    return 0;
}
