#include "AbstractCustomer.h"


AbstractCustomer::AbstractCustomer(string name, string date, string address)
{
    this->name = name;
    this->dateOfBirth = date;
    this->address = address;
}

string AbstractCustomer::GetName()
{
    return this->name;
}

string AbstractCustomer::GetDateOfBirth()
{
    return this->dateOfBirth;
}

string AbstractCustomer::GetAddress()
{
    return this->address;
}
