#pragma once
#include "AbstractRegisteredCustomer.h"
#include "AbstractStringOutput.h"
#include <string>

using namespace std;

class CompanyUser : public AbstractRegisteredCustomer, public AbstractStringOutput
{
public:
	CompanyUser(string email, string name, string password);
	virtual string ToString();
	virtual bool Login(string email, string password);
	virtual string getUniqueIdentifier();
	virtual string toString();
};

