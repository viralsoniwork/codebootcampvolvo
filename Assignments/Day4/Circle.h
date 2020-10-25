#include "Shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

namespace conval{
    const unsigned int PI = 3;
}

class Circle : public Shape
{
public:
    Circle(unsigned int);
    ~Circle();
};

#endif