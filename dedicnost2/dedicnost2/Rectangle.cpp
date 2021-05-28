#include "Rectangle.h"

Rectangle::Rectangle(int a, int b) : Square(a)
{
    this->sideWidth = b;
}

double Rectangle::GetArea()
{
    printf("Rectangle area is: %d\n", this->sideLength * this->sideWidth);
    return this->sideLength*this->sideWidth;
}

double Rectangle::GetPerimeter()
{
    printf("Rectangle perimeter is: %d\n", (this->sideLength * 2) + (this->sideWidth * 2));
    return (this->sideLength*2) + (this->sideWidth*2);
}


