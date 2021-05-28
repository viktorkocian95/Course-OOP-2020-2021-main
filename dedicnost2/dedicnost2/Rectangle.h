#pragma once
#include "Square.h"


class Rectangle : public Square
{
public:
	double GetArea();
	double GetPerimeter();
	Rectangle(int a, int b);
protected:
	int sideWidth;
};