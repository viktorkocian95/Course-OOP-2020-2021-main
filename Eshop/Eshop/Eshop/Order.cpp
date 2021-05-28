#include "Order.h"

Order::Order(string ci, AbstractCustomer* c, AbstractStringOutput* a)
{
	this->custInfo = ci;
	this->customer = c;
	this->abso = a;
}
