#include "AbstractRegisteredCustomer.h"

AbstractRegisteredCustomer::AbstractRegisteredCustomer(string name, string date, string address, string password, double id, string dateReg)
	                      : AbstractCustomer(name, date, address)
{
	this->password = password;
	this->dateOfRegister = dateReg;
	this->registerID = id;
}
