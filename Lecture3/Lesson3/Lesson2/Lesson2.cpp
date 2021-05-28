// Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"

int main()
{
    std::cout << "Hello World!\n";

    KeyValues* dictionary = new KeyValues(5);
    
    dictionary->Create(1, 1.5);
    dictionary->Create(2, 8.5);
    dictionary->Create(3, 9.1);
    dictionary->Create(4, 0.5);
    dictionary->Create(5, -5.5);

    std::cout << dictionary->GetCount() << std::endl;

    
    KeyValue* kvp = dictionary->Search(5);
    if (kvp != nullptr)
    {
        std::cout << kvp->GetValue();
    }

    dictionary->Remove(3);

    delete dictionary;
}
