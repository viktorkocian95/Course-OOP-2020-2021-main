#pragma once
#include "AbstractCustomer.h"
#include "AbstractStringOutput.h"
class Order
{
private:
	string custInfo;
	AbstractCustomer* customer;
	AbstractStringOutput* abso;

public:
	Order(string ci, AbstractCustomer* c, AbstractStringOutput* abso);

};

