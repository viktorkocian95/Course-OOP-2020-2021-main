#pragma once
#include <string>
#include "AbstractProduct.h"
#include "AbstractStringOutput.h"

using std::string;

class Notebook : public AbstractProduct, public AbstractStringOutput
{
protected:
	bool convertible;
	bool hasNumpad;
	bool touchscreen;
public:
	Notebook(string name, double price, string color, bool con, bool num, bool touch);
	string ToString();
};

