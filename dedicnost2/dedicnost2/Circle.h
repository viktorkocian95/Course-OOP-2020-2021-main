#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(double rad);
	double GetArea();
	double GetPerimeter();
protected:
	long radius;
};