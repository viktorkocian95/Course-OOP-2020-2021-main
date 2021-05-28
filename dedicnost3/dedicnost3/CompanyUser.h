#pragma once
#include "AbstractStringOutput.h"
#include "AbstractRegisteredCustomer.h"
#include <string>

using std::string;

class CompanyUser : public AbstractStringOutput, public AbstractRegisteredCustomer
{
protected:
	double ico;
	double dic;
public:
	CompanyUser(string name, string date, string address, string password, double id, string dateReg, double ico, double dic);
	string ToString();
};