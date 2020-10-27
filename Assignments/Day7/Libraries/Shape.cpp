#include "Shape.h"

#include <iostream>

Shape::Shape()
{
}

Shape::~Shape()
{
}

bool Shape::operator==(Shape const &s)
{
    return ((this->area == s.area) && (this->perimeter == s.perimeter));
}

bool Shape::operator>(Shape const &s)
{
    return ((this->area > s.area) && (this->perimeter > s.perimeter));
}

bool Shape::operator<(Shape const &s)
{
    return ((this->area < s.area) && (this->perimeter < s.perimeter));
}