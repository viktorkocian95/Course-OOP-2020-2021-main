#pragma once
#include <string>

using namespace std;

string generateColor();

class Shape
{
	public:
		Shape();
		string color;
		virtual void GetColor();
		virtual double GetArea();
		virtual double GetPerimeter();
	protected:
		//
};