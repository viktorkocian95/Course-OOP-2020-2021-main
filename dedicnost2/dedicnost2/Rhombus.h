#pragma once
#include "Square.h"

class Rhombus : public Square
{
public:
	double GetArea();
	Rhombus(int a, int b, double angle);
protected:
	int height;
	double angle;
};