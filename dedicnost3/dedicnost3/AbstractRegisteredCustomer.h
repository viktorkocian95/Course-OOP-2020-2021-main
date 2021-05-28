#pragma once
#include "AbstractCustomer.h"
#include "AbstractStringOutput.h"
#include <string>

using std::string;

class AbstractRegisteredCustomer : public AbstractCustomer
{
protected:
	string password;
	double registerID;
	string dateOfRegister;
public:
	AbstractRegisteredCustomer(string name, string date, string address, string password, double id, string dateReg);
};