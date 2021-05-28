#pragma once
#include "RegisteredUser.h"
#include "AbstractRegisteredCustomer.h"
#include <string>
#include <sstream>

using std::string;

RegisteredUser::RegisteredUser(string name, string date, string address, string password, double id, string dateReg, string username)
	: AbstractRegisteredCustomer(name, date, address, password, id, dateReg)
{
	this->username = username;
}

string RegisteredUser::ToString()
{
	std::stringstream ss;
	ss << "Name is " << this->name << ", is registered and user's username is " << this->username;
	std::string s = ss.str();
	return s;
}

