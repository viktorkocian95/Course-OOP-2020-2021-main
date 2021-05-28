#pragma once
#include "AbstractCustomer.h"
#include "AbstractStringOutput.h"
#include <string>

using std::string;

class UnregistredUser : public AbstractCustomer, public AbstractStringOutput
{
protected:
	string ipAddress;
	double tempID;
public:	
	UnregistredUser(string name, string date, string address);
	string ToString();
};

