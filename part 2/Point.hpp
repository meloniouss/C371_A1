class Point
{
public:
    int x, y, z;
    Point(int x, int y, int z)
        : x(x),
          y(y),
          z(z) {}
    ~Point();
    int translate(int d, char axis);
};
