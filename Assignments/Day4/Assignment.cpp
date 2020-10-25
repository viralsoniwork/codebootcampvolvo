#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Square.h"

#include <iostream>

template<typename T>
bool isEqual(T const&a, T const&b)
{
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
    return answer;
}

template<typename T>
bool isGreaterThan(T const&a, T const&b)
{
    bool answer;
    if(a > b)
    {
        answer = true;
    }
    else
    {
        answer =  false;
    }
    return answer;
}

template<typename T>
bool isLessThan(T const&a, T const&b)
{
    bool answer;
    if(a<b)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}

int main()
{
    //bool isGreaterThan, isLessThan, isEqual;

    Shape *myCircle,*myTriangle, *myRectangle, *mySquare;

    myCircle = new Circle(3);
    myTriangle = new Triangle(3,3);
    myRectangle = new Rectangle(3,3);
    mySquare = new Square(3);

    std::cout<<"Is my Circle equal to my Triangle : ";
    std::cout<<isEqual<Shape>(*myCircle, *myTriangle)<<std::endl;

    std::cout<<"Is my Rectangle equal to my Square : ";
    std::cout<<isEqual<Shape>(*myRectangle, *mySquare)<<std::endl;

    std::cout<<"Is my Triangle equal to my Square : ";
    std::cout<<isEqual<Shape>(*myTriangle, *mySquare)<<std::endl;

    std::cout<<"Is my Circle greater than my Square : ";
    std::cout<<isGreaterThan<Shape>(*myCircle, *mySquare)<<std::endl;

    std::cout<<"Is my Triangle less than my Rectangle : ";
    std::cout<<isLessThan<Shape>(*myTriangle, *myRectangle)<<std::endl;

    delete myCircle;
    delete myTriangle;
    delete myRectangle;
    delete mySquare;

    return 0;
}