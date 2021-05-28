#pragma once
#include "CompanyUser.h"
#include "AbstractRegisteredCustomer.h"
#include <string>
#include <sstream>

using std::string;

CompanyUser::CompanyUser(string name, string date, string address, string password, double id, string dateReg, double ico, double dic)
	        : AbstractRegisteredCustomer(name, date, address, password, id, dateReg)
{
	this->ico = ico;
	this->dic = dic;
}

string CompanyUser::ToString()
{
	std::stringstream ss;
	ss << "Name is " << this->name << ", is registered company user and user's ICO is " << this->ico << " with DIC " << this->dic;
	std::string s = ss.str();
	return s;
}

