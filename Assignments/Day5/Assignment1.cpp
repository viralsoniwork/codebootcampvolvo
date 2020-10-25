#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"

#include <iostream>

int main()
{
    bool isGreaterThan, isLessThan, isEqual;

    Shape *myCircle,*myTriangle, *myRectangle, *mySquare;

    myCircle = new Circle(3);
    myTriangle = new Triangle(3,3);
    myRectangle = new Rectangle(3,3);
    mySquare = new Square(3);

    std::cout<<"Is my Circle equal to my Triangle : ";
    if (myCircle == myTriangle)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }

    std::cout<<"Is my Rectangle equal to my Square : ";
    if (myRectangle == mySquare)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }

    std::cout<<"Is my Triangle equal to my Square : ";
    if (myTriangle == mySquare)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }

    std::cout<<"Is my Circle greater than my Square : ";
    if (myCircle > mySquare)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }

    std::cout<<"Is my Triangle less than my Rectangle : ";
    if (myTriangle < myRectangle)
    {
        std::cout<<"Yes"<<std::endl;
    }
    else
    {
        std::cout<<"No"<<std::endl;
    }

    delete myCircle;
    delete myTriangle;
    delete myRectangle;
    delete mySquare;

    return 0;
}