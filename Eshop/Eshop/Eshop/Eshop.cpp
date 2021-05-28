// Eshop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CompanyUser.h"
#include "Order.h"

int main()
{
    CompanyUser* user = new CompanyUser("email","jakub","secretPassowrd");
    AbstractRegisteredCustomer* absRegCustomer = user;
    AbstractCustomer* absCustomer = user;

    AbstractStringOutput* stringOutputCustomer = user;

    cout << user->ToString() << endl;

    Order* order = new Order(user->ToString(), user, stringOutputCustomer);

    CompanyUser* pd = dynamic_cast<CompanyUser*>(absCustomer);
}