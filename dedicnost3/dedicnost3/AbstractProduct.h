#pragma once
#include <string>
#include "AbstractStringOutput.h"

using std::string;

class AbstractProduct : public AbstractStringOutput
{
public:
	AbstractProduct(string name, double price, string color);
	virtual string GetName();
	virtual double GetPrice();
	virtual string GetColor();
protected:
	string name;
	double price;
	string color;
};