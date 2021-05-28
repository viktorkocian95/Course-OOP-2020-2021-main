#pragma once
#include <string>
#include "AbstractProduct.h"
#include "AbstractStringOutput.h"

using std::string;

class Tablet : public AbstractProduct, public AbstractStringOutput
{
protected:
	bool appendKeyboard;
	double size;
public:
	Tablet(string name, double price, string color, bool key, double size);
	string ToString();
};

