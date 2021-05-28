#pragma once
#include <string>

using std::string;

class AbstractStringOutput
{
public:
	AbstractStringOutput();
	virtual string ToString();
};