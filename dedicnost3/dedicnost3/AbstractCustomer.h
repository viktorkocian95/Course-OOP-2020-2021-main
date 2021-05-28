#pragma once
#include <string>
#include "AbstractStringOutput.h"


using std::string;

class AbstractCustomer : public AbstractStringOutput
{
public:
	AbstractCustomer(string name, string date, string address);
	virtual string GetName();
	virtual string GetDateOfBirth();
	virtual string GetAddress();
protected:
	string name;
	string dateOfBirth;
	string address;
};