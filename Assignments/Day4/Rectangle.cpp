#include "Rectangle.h"

Rectangle::Rectangle(unsigned int length, unsigned int width)
{
    area = length * width;
    perimeter = ((2*length) + (2*width));
}

Rectangle::~Rectangle()
{
}