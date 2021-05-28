#include "AbstractCustomer.h"

AbstractCustomer::AbstractCustomer(string name)
{
	this->name = name;
}

string AbstractCustomer::getName()
{
	return this->name;
}
