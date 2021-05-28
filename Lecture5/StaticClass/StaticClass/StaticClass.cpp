// StaticClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StaticValue.h"

int main()
{
    std::cout << "Hello World!\n";

    std::cout << StaticValue::getValue() << "\n";

    StaticValue::setValue(10);

    std::cout << StaticValue::getValue() << "\n";
}