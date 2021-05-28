#include "Square.h"
#include "Shape.h"
#include <iostream>

Square::Square(int len)
{
	this->sideLength = len;
}

double Square::GetArea()
{
	printf("Square area is: %d\n", this->sideLength*this->sideLength);
	return this->sideLength * this->sideLength;
}

double Square::GetPerimeter()
{
	printf("Square perimeter is: %d\n", this->sideLength * 4);
	return this->sideLength * 4;
}
