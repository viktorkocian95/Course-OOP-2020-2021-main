#pragma once
#include "AbstractStringOutput.h"
#include "AbstractRegisteredCustomer.h"
#include <string>

using std::string;

class RegisteredUser : public AbstractStringOutput, public AbstractRegisteredCustomer
{
protected:
	string username;
public:
	RegisteredUser(string name, string date, string address, string password, double id, string dateReg, string username);
	string ToString();
};