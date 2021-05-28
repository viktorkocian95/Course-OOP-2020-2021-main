#include "Ellipse.h"
#include "Circle.h"
#include <math.h>
#define pi 3.14159265359

Ellipse::Ellipse(double rad, double axis) : Circle(rad)
{
	this->halfaxis = axis;
}

double Ellipse::GetArea()
{
	printf("Ellipse area is: %f\n", pi*this->halfaxis*this->radius);
	return pi * this->halfaxis * this->radius;
}

double Ellipse::GetPerimeter()
{
	printf("Ellipse perimeter is: %f\n", (pi / 2) * (this->radius + this->halfaxis + sqrt(2*(this->radius * this->radius + this->halfaxis * this->halfaxis))));
	return (pi / 2) * (this->radius + this->halfaxis + sqrt(2 * (this->radius * this->radius + this->halfaxis * this->halfaxis)));
}
