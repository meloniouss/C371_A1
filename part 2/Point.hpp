class Point
{
public:
    double x, y, z;
    Point()
        : x(0),
          y(0),
          z(0) {}
    Point(double x, double y, double z)
        : x(x),
          y(y),
          z(z) {}
    ~Point() {}
    double translate(int d, char axis);
};
