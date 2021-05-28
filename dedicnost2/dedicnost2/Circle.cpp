#include "Circle.h"
#define pi 3.14159265359


Circle::Circle(double rad)
{
	this->radius = rad;
}

double Circle::GetArea()
{
	printf("Circle area is: %f\n", pi*this->radius*this->radius);
	return pi * this->radius * this->radius;
}

double Circle::GetPerimeter()
{
	printf("Circle perimeter is: %f\n", pi * 2 * this->radius);
	return pi * 2 * this->radius;
}
