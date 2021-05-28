#include "CompanyUser.h"

CompanyUser::CompanyUser(string email, string name, string password) : AbstractRegisteredCustomer(email, name)
{
}

string CompanyUser::ToString()
{
	return "Company User: " + this->getEmail() + " - " + this->getName();
}

bool CompanyUser::Login(string email, string password)
{
	return true;
}

string CompanyUser::getUniqueIdentifier()
{
	return this->getEmail();
}

string CompanyUser::toString()
{
	return "Company User: " + this->getEmail() + " - " + this->getName();
}
