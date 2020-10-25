#include "Square.h"

Square::Square(unsigned int length)
{
    area = length * length;
    perimeter = 4 * length;
}

Square::~Square()
{
}

unsigned int Square::getArea()
{
    return area;
}

unsigned int Square::getPerimeter()
{
    return perimeter;
}