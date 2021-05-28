#include "Rhombus.h"
#include <math.h>
#define pi 3.14159265359


double Rhombus::GetArea()
{
	printf("Rhombus area is: %f\n", this->sideLength * (this->sideLength*sin(this->angle*pi/180)));
	return this->sideLength * (this->sideLength * sin(this->angle));
}

Rhombus::Rhombus(int a, int b, double angle) : Square(a)
{
	this->height = b;
	this->angle = angle;
}
