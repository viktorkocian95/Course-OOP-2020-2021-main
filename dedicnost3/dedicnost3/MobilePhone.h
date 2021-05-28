#pragma once
#include <string>
#include "AbstractProduct.h"
#include "AbstractStringOutput.h"

using std::string;

class MobilePhone : public AbstractProduct, public AbstractStringOutput
{
protected:
	int mpix;
	double size;
	string cpuname;
public:
	MobilePhone(string name, double price, string color, int mpix, double size, string cpu);
	string ToString();
};

