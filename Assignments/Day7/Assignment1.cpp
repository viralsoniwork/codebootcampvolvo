#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"

#include <iostream>

int main()
{
    Shape *myCircle,*myTriangle, *myRectangle, *mySquare;

    myCircle = new Circle(3);
    myTriangle = new Triangle(3,3);
    myRectangle = new Rectangle(3,3);
    mySquare = new Square(3);

    std::cout<<"I am executing"<<std::endl;

    delete myCircle;
    delete myTriangle;
    delete myRectangle;
    delete mySquare;

    return 0;
}