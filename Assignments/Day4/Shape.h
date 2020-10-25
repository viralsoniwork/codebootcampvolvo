#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    unsigned int area;
    unsigned int perimeter;
public:
    Shape();
    ~Shape();

    bool operator==(const Shape &s);
    bool operator>(const Shape &s);
    bool operator<(const Shape &s);
};

#endif