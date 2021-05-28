#include "Shape.h"
#include <iostream>

string generateColor()
{
	switch (rand() % 5)
	{
		case 0:
			return "cerna";
		case 1:
			return "modra";
		case 2:
			return "zelena";
		case 3:
			return "zluta";
		case 4:
			return "cervena";
		default:
			return "error";
	}
}

Shape::Shape()
{
	this->color = generateColor();
}

double Shape::GetArea()
{
	return 0;
}

double Shape::GetPerimeter()
{
	return 0;
}

void Shape::GetColor()
{
	std::cout << "Shape color is: " << this->color << std::endl;
}