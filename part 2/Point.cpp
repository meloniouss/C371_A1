#include "Point.hpp"

int Point::translate(int d, char axis)
{
    switch (axis)
    {
    case 'x':
        x += d;
        return 0;
    case 'y':
        y += d;
        return 0;
    case 'z':
        z += d;
        return 0;
    }
    return -1;
}
