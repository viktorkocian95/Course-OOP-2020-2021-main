#include "AbstractRegisteredCustomer.h"

AbstractRegisteredCustomer::AbstractRegisteredCustomer(string email, string name) : AbstractCustomer(name)
{
	this->email = email;
}

string AbstractRegisteredCustomer::getEmail()
{
	return this->email;
}
