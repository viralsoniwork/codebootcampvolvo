#include "Triangle.h"

Triangle::Triangle(unsigned int base, unsigned int height)
{
    area = ((base * height) / 2);
    perimeter = (3*base);
}

Triangle::~Triangle()
{
}