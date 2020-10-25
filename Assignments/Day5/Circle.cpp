#include "Circle.h"

Circle::Circle(unsigned int radius)
{
    area = conval::PI * radius;
    perimeter = (2 * conval::PI * radius);
}

Circle::~Circle()
{
}