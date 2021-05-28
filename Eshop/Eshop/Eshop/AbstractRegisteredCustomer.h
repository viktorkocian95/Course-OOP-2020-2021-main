#pragma once
#include "AbstractCustomer.h"
#include<string>

using namespace std;

class AbstractRegisteredCustomer : public AbstractCustomer
{
private:
	string email;

public:
	AbstractRegisteredCustomer(string email, string name);
	string getEmail();
	virtual bool Login(string email, string password) = 0;
	virtual string toString() = 0;
};

