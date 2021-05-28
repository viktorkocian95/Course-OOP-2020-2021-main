#pragma once
#include "Circle.h"

class Ellipse : public Circle
{
public:
	Ellipse(double rad, double axis);
	double GetArea();
	double GetPerimeter();
protected:
	long halfaxis;
};

