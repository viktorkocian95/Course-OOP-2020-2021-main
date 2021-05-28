#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"
#include "Rhombus.h"

#define nl printf("\n")

int main()
{
    srand(time(NULL));

    //Shape* shape = new Shape();
    Square* square = new Square(5);
    Rectangle* rectangle = new Rectangle(5, 4);
    Circle* circle = new Circle(10);
    Ellipse* ellipse = new Ellipse(4, 3);
    Rhombus* rhombus = new Rhombus(4, 7, 30);
    square->GetArea();
    square->GetColor();
    square->GetPerimeter(); nl;
    rectangle->GetArea();
    rectangle->GetColor();
    rectangle->GetPerimeter(); nl;
    circle->GetArea();
    circle->GetPerimeter();
    circle->GetColor(); nl;
    ellipse->GetArea();
    ellipse->GetPerimeter();
    ellipse->GetColor(); nl;
    rhombus->GetArea();
    rhombus->GetPerimeter();
    rhombus->GetColor();
}