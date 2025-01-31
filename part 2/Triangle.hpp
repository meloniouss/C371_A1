#include "Point.hpp";

class Triangle
{
public:
    Point vertex_1, vertex_2, vertex_3;
    Triangle(Point p1, Point p2, Point p3)
        : vertex_1(p1),
          vertex_2(p2),
          vertex_3(p3) {}
    void translate(int d, char axis);
};
