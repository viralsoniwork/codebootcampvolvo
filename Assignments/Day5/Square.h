#include "Shape.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape
{
public:
    Square(unsigned int);
    ~Square();

    unsigned int getArea();
    unsigned int getPerimeter();
};

#endif