#pragma once
#include "Shape.h"
class Square : public Shape
{
public:
	Square(int len);
	double GetArea();
	double GetPerimeter();
protected:
	int sideLength;
};